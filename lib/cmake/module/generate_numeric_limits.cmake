# -------------------------------------------------------------------------------------------------- #
# Генерация числовых ограничений для типов данных библиотеки                                         #
#                                                                                                    #
# Этот файл конфигурации CMake автоматически генерирует файл `numeric_limits.h` с определениями      #
# макросов, представляющих числовые ограничения для различных пользовательских типов VM библиотеки.  #
# Сначала создается временный C-файл с кодом, определяющим ограничения для всех целочисленных типов. #
# Затем этот файл компилируется и запускается для генерации окончательного заголовочного файла.      #
#                                                                                                    #
# В результате создается `numeric_limits.h` с макросами, определяющими минимальные                   #
# и максимальные значения, а также размеры различных знаковых и беззнаковых типов данных.            #
# -------------------------------------------------------------------------------------------------- #

# Этот файл генерирует ограничения в виде макросов для собственных типов VM библиотеки.
include(CheckCSourceRuns)

# Создаем переменную с путем, по которому будут генерироваться ограничения.
set(VI_NUMERIC_LIMITS_OUTPUT_FILE "${VI_TARGET_INCLUDE_DIR}/${PROJECT_NAME}/numeric_limits.h")

# Создание исходного кода в переменную.
set(VI_NUMERIC_LIMITS_SOURCE_CODE "
#include <stdio.h>
#include <errno.h>
#include <wchar.h>
#include \"${VI_TARGET_INCLUDE_DIR}/${PROJECT_NAME}/numeric_types.h\"
#include \"${VI_TARGET_INCLUDE_DIR}/${PROJECT_NAME}/numeric_limit.h\"
#include \"${VI_TARGET_INCLUDE_DIR}/${PROJECT_NAME}/compiler.h\"

int main() {
    FILE *file = fopen(\"${VI_NUMERIC_LIMITS_OUTPUT_FILE}\", \"w+\");
    if (!file) {
        return errno;
    }

    /* ---------------------------------------- Header ---------------------------------------- */

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @file numeric_limits.h\\n\");
    fprintf(file, \" * @brief Определяет макросы для числовых ограничений различных типов данных.\\n\");
    fprintf(file, \" * @details Этот файл создается автоматически, не пытайтесь редактировать его вручную.\\n\");
    fprintf(file, \" * \\n\");
    fprintf(file, \" * Этот заголовочный файл содержит макросы для определения минимальных\\n\");
    fprintf(file, \" * и максимальных значений как для знаковых, так и для беззнаковых числовых типов данных.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"#ifndef VI_NUMERIC_LIMITS_H\\n\");
    fprintf(file, \"#define VI_NUMERIC_LIMITS_H\\n\");
    fprintf(file, \"\\n\");

    /* ----------------------------------------- Size ----------------------------------------- */

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_CHAR_T_SIZE\\n\");
    fprintf(file, \" * @brief Размер знакового или беззнакового `char` в байтах.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_CHAR_T_SIZE\\n\");
    fprintf(file, \"#define VI_CHAR_T_SIZE %zu\\n\", sizeof(vi_uchar_t));
    fprintf(file, \"#endif // VI_CHAR_T_SIZE\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_WCHAR_T_SIZE\\n\");
    fprintf(file, \" * @brief Размер типа `wchar_t`, который используется для представления широких символов.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_WCHAR_T_SIZE\\n\");
    fprintf(file, \"#define VI_WCHAR_T_SIZE %zu\\n\", sizeof(wchar_t));
    fprintf(file, \"#endif // VI_WCHAR_T_SIZE\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SHORT_T_SIZE\\n\");
    fprintf(file, \" * @brief Размер знакового или беззнакового `short` в байтах.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SHORT_T_SIZE\\n\");
    fprintf(file, \"#define VI_SHORT_T_SIZE %zu\\n\", sizeof(vi_ushort_t));
    fprintf(file, \"#endif // VI_SHORT_T_SIZE\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_INT_T_SIZE\\n\");
    fprintf(file, \" * @brief Размер знакового или беззнакового `int` в байтах.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_INT_T_SIZE\\n\");
    fprintf(file, \"#define VI_INT_T_SIZE %zu\\n\", sizeof(vi_uint_t));
    fprintf(file, \"#endif // VI_INT_T_SIZE\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_LONG_T_SIZE\\n\");
    fprintf(file, \" * @brief Размер знакового или беззнакового `long` в байтах.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_LONG_T_SIZE\\n\");
    fprintf(file, \"#define VI_LONG_T_SIZE %zu\\n\", sizeof(vi_ulong_t));
    fprintf(file, \"#endif // VI_LONG_T_SIZE\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_LLONG_T_SIZE\\n\");
    fprintf(file, \" * @brief Размер знакового или беззнакового `long long` в байтах.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_LLONG_T_SIZE\\n\");
    fprintf(file, \"#define VI_LLONG_T_SIZE %zu\\n\", sizeof(vi_ullong_t));
    fprintf(file, \"#endif // VI_LLONG_T_SIZE\\n\");
    fprintf(file, \"\\n\");

    /* --------------------------------------- Unsigned --------------------------------------- */

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_UCHAR_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_uchar_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_UCHAR_T_MIN\\n\");
    fprintf(file, \"#define VI_UCHAR_T_MIN %huU\\n\", VI_NUMERIC_LIMIT_UINT_MIN(vi_uchar_t));
    fprintf(file, \"#endif // VI_UCHAR_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_UCHAR_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_uchar_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_UCHAR_T_MAX\\n\");
    fprintf(file, \"#define VI_UCHAR_T_MAX %huU\\n\", VI_NUMERIC_LIMIT_UINT_MAX(vi_uchar_t));
    fprintf(file, \"#endif // VI_UCHAR_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_USHORT_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_ushort_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_USHORT_T_MIN\\n\");
    fprintf(file, \"#define VI_USHORT_T_MIN %huU\\n\", VI_NUMERIC_LIMIT_UINT_MIN(vi_ushort_t));
    fprintf(file, \"#endif // VI_USHORT_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_USHORT_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_ushort_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_USHORT_T_MAX\\n\");
    fprintf(file, \"#define VI_USHORT_T_MAX %huU\\n\", VI_NUMERIC_LIMIT_UINT_MAX(vi_ushort_t));
    fprintf(file, \"#endif // VI_USHORT_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_UINT_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_uint_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_UINT_T_MIN\\n\");
    fprintf(file, \"#define VI_UINT_T_MIN %uU\\n\", VI_NUMERIC_LIMIT_UINT_MIN(vi_uint_t));
    fprintf(file, \"#endif // VI_UINT_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_UINT_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_uint_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_UINT_T_MAX\\n\");
    fprintf(file, \"#define VI_UINT_T_MAX %uU\\n\", VI_NUMERIC_LIMIT_UINT_MAX(vi_uint_t));
    fprintf(file, \"#endif // VI_UINT_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_ULONG_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_ulong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_ULONG_T_MIN\\n\");
    fprintf(file, \"#define VI_ULONG_T_MIN %luUL\\n\", VI_NUMERIC_LIMIT_UINT_MIN(vi_ulong_t));
    fprintf(file, \"#endif // VI_ULONG_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_ULONG_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_ulong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_ULONG_T_MAX\\n\");
    fprintf(file, \"#define VI_ULONG_T_MAX %luUL\\n\", VI_NUMERIC_LIMIT_UINT_MAX(vi_ulong_t));
    fprintf(file, \"#endif // VI_ULONG_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_ULLONG_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_ullong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_ULLONG_T_MIN\\n\");
    fprintf(file, \"#define VI_ULLONG_T_MIN %lluULL\\n\", VI_NUMERIC_LIMIT_UINT_MIN(vi_ullong_t));
    fprintf(file, \"#endif // VI_ULLONG_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_ULLONG_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_ullong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_ULLONG_T_MAX\\n\");
    fprintf(file, \"#define VI_ULLONG_T_MAX %lluULL\\n\", VI_NUMERIC_LIMIT_UINT_MAX(vi_ullong_t));
    fprintf(file, \"#endif // VI_ULLONG_T_MAX\\n\");
    fprintf(file, \"\\n\");

    /* ---------------------------------------- Signed ---------------------------------------- */

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SCHAR_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_schar_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SCHAR_T_MIN\\n\");
    fprintf(file, \"#define VI_SCHAR_T_MIN (%d)\\n\", VI_NUMERIC_LIMIT_SINT_MIN(vi_schar_t));
    fprintf(file, \"#endif // VI_SCHAR_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SCHAR_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_schar_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SCHAR_T_MAX\\n\");
    fprintf(file, \"#define VI_SCHAR_T_MAX %d\\n\", VI_NUMERIC_LIMIT_SINT_MAX(vi_schar_t));
    fprintf(file, \"#endif // VI_SCHAR_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SSHORT_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_sshort_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SSHORT_T_MIN\\n\");
    fprintf(file, \"#define VI_SSHORT_T_MIN (%d)\\n\", VI_NUMERIC_LIMIT_SINT_MIN(vi_sshort_t));
    fprintf(file, \"#endif // VI_SSHORT_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SSHORT_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_sshort_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SSHORT_T_MAX\\n\");
    fprintf(file, \"#define VI_SSHORT_T_MAX %d\\n\", VI_NUMERIC_LIMIT_SINT_MAX(vi_sshort_t));
    fprintf(file, \"#endif // VI_SSHORT_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SINT_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_sint_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SINT_T_MIN\\n\");

    #if VI_COMPILER_TYPE == VI_COMPILER_TYPE_MSVC
        fprintf(file, \"#define VI_SINT_T_MIN (%di32 - 1)\\n\", -(VI_NUMERIC_LIMIT_SINT_MIN(vi_sint_t) - 1));
    #else
        fprintf(file, \"#define VI_SINT_T_MIN (%d - 1)\\n\", -(VI_NUMERIC_LIMIT_SINT_MIN(vi_sint_t) - 1));
    #endif

    fprintf(file, \"#endif // VI_SINT_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SINT_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_sint_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SINT_T_MAX\\n\");
    fprintf(file, \"#define VI_SINT_T_MAX %d\\n\", VI_NUMERIC_LIMIT_SINT_MAX(vi_sint_t));
    fprintf(file, \"#endif // VI_SINT_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SLONG_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_slong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SLONG_T_MIN\\n\");

    #if VI_COMPILER_TYPE == VI_COMPILER_TYPE_MSVC
        fprintf(file, \"#define VI_SLONG_T_MIN (%ldL - 1)\\n\", -(VI_NUMERIC_LIMIT_SINT_MIN(vi_slong_t) - 1));
    #else
        fprintf(file, \"#define VI_SLONG_T_MIN (%ldL - 1)\\n\", -(VI_NUMERIC_LIMIT_SINT_MIN(vi_slong_t) - 1));
    #endif

    fprintf(file, \"#endif // VI_SLONG_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SLONG_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_slong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SLONG_T_MAX\\n\");
    fprintf(file, \"#define VI_SLONG_T_MAX %ldL\\n\", VI_NUMERIC_LIMIT_SINT_MAX(vi_slong_t));
    fprintf(file, \"#endif // VI_SLONG_T_MAX\\n\");
    fprintf(file, \"\\n\");

    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SLLONG_T_MIN\\n\");
    fprintf(file, \" * @brief Определяет минимальное значение для `vi_sllong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SLLONG_T_MIN\\n\");

    #if VI_COMPILER_TYPE == VI_COMPILER_TYPE_MSVC
        fprintf(file, \"#define VI_SLLONG_T_MIN (%lldi64 - 1)\\n\", -(VI_NUMERIC_LIMIT_SINT_MIN(vi_sllong_t) - 1));
    #else
        fprintf(file, \"#define VI_SLLONG_T_MIN (%lldLL - 1)\\n\", -(VI_NUMERIC_LIMIT_SINT_MIN(vi_sllong_t) - 1));
    #endif

    fprintf(file, \"#endif // VI_SLLONG_T_MIN\\n\");
    fprintf(file, \"\\n\");
    fprintf(file, \"/**\\n\");
    fprintf(file, \" * @def VI_SLLONG_T_MAX\\n\");
    fprintf(file, \" * @brief Определяет максимальное значение для `vi_sllong_t`.\\n\");
    fprintf(file, \" */\\n\");
    fprintf(file, \"#ifndef VI_SLLONG_T_MAX\\n\");
    fprintf(file, \"#define VI_SLLONG_T_MAX %lldLL\\n\", VI_NUMERIC_LIMIT_SINT_MAX(vi_sllong_t));
    fprintf(file, \"#endif // VI_SLLONG_T_MAX\\n\");
    fprintf(file, \"\\n\");

    /* ---------------------------------------- Footer ---------------------------------------- */

    fprintf(file, \"\#endif // VI_NUMERIC_LIMITS_H\");
    return fclose(file);
}
")

# Записываем сгенерированный исходный код в файл.
file(WRITE "${VI_CMAKE_CURRENT_BINARY_DIR}/generate_numeric_limits.c" "${VI_NUMERIC_LIMITS_SOURCE_CODE}")

# Компилируем сгенерированный исходный код,
# чтобы проверить наличие синтаксических ошибок и потенциальных проблем.
try_compile(VI_COMPILE_RESULT
        ${VI_CMAKE_CURRENT_BINARY_DIR}
        ${VI_CMAKE_CURRENT_BINARY_DIR}/generate_numeric_limits.c)

# Запускаем ранее созданный файл.
try_run(VI_RUN_RESULT VI_COMPILE_RESULT
        ${VI_CMAKE_CURRENT_BINARY_DIR}/run_result
        ${VI_CMAKE_CURRENT_BINARY_DIR}/generate_numeric_limits.c
)

# Удаляем ранее созданный временный файл.
file(REMOVE "${VI_CMAKE_CURRENT_BINARY_DIR}/generate_numeric_limits.c")

# Проверяем переменные с результатами компиляции и запуска.
if (VI_COMPILE_RESULT AND VI_RUN_RESULT EQUAL 0)
    message(STATUS "Limits of standard VI library types have been successfully generated")
else ()
    message(FATAL_ERROR "Error when generating limits for standard VI library types")
endif ()

# Очистка переменных, как если бы они никогда не создавались.
unset(VI_RUN_RESULT)
unset(VI_COMPILE_RESULT)
unset(VI_NUMERIC_LIMITS_SOURCE_CODE)
unset(VI_NUMERIC_LIMITS_OUTPUT_FILE)