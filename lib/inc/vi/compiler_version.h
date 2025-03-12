/**
 * @file compiler_version.h
 * @brief Определение макросов для получения версии компилятора.
 *
 * Этот заголовочный файл предоставляет макросы для определения версии компилятора
 * в зависимости от его типа (Clang, GCC или MSVC). Макросы позволяют получить
 * основную, минорную и патч-версии текущего компилятора, что полезно
 * для реализации условной компиляции на основе версии.
 *
 * Макросы:
 * - `VI_COMPILER_VERSION_MAJOR`: Основной номер версии компилятора.
 * - `VI_COMPILER_VERSION_MINOR`: Минорный номер версии компилятора.
 * - `VI_COMPILER_VERSION_PATCH`: Номер патча версии компилятора.
 *
 * @note Если компилятор не распознан, версии по умолчанию устанавливаются в 0.
 */

#ifndef VI_COMPILER_VERSION_H
#define VI_COMPILER_VERSION_H

#include "compiler_type.h"

#if (VI_COMPILER_TYPE == VI_COMPILER_TYPE_CLANG)
/** @brief Основной номер версии компилятора для Clang. */
#    define VI_COMPILER_VERSION_MAJOR __clang_major__
/** @brief Минорный номер версии компилятора для Clang. */
#    define VI_COMPILER_VERSION_MINOR __clang_minor__
/** @brief Номер патча версии компилятора для Clang. */
#    define VI_COMPILER_VERSION_PATCH __clang_patchlevel__

#elif (VI_COMPILER_TYPE == VI_COMPILER_TYPE_GCC)
/** @brief Основной номер версии компилятора для GCC. */
#    define VI_COMPILER_VERSION_MAJOR __GNUC__
/** @brief Минорный номер версии компилятора для GCC. */
#    define VI_COMPILER_VERSION_MINOR __GNUC_MINOR__
/** @brief Номер патча версии компилятора для GCC. */
#    define VI_COMPILER_VERSION_PATCH __GNUC_PATCHLEVEL__

#elif (VI_COMPILER_TYPE == VI_COMPILER_TYPE_MSVC)
/** @brief Основной номер версии компилятора для MSVC. */
#    define VI_COMPILER_VERSION_MAJOR (_MSC_FULL_VER / 10000000)
/** @brief Минорный номер версии компилятора для MSVC. */
#    define VI_COMPILER_VERSION_MINOR ((_MSC_FULL_VER / 100000) % 100)
/** @brief Номер патча версии компилятора для MSVC. */
#    define VI_COMPILER_VERSION_PATCH (_MSC_FULL_VER % 100000)

#else
/** @brief Значение по умолчанию для основного номера версии компилятора, установленное на 0. */
#    define VI_COMPILER_VERSION_MAJOR 0
/** @brief Значение по умолчанию для минорного номера версии компилятора, установленное на 0. */
#    define VI_COMPILER_VERSION_MINOR 0
/** @brief Значение по умолчанию для номера патча компилятора, установленное на 0. */
#    define VI_COMPILER_VERSION_PATCH 0
#endif

#endif // VI_COMPILER_VERSION_H
