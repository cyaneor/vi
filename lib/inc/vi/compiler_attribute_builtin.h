/**
 * @file compiler_attribute_builtin.h
 * @brief Заголовочный файл для определения атрибута принудительной инлайнизации функций.
 *
 * Этот файл предоставляет макрос `VI_COMPILER_ATTRIBUTE_BUILTIN`, который определяет
 * атрибут принудительной инлайнизации для различных компиляторов (GCC, Clang, MSVC).
 * Макрос используется для повышения производительности в критически важных участках кода,
 * где важно минимизировать накладные расходы на вызов функций.
 *
 * Поддерживаемые компиляторы:
 * - GCC и Clang: атрибут `__attribute__((always_inline)) inline`
 * - MSVC: атрибут `__forceinline`
 *
 * @note На неподдерживаемых компиляторах макрос
 *       определяется как пустой и выводится предупреждение.
 *
 * Макросы:
 * - `VI_COMPILER_ATTRIBUTE_BUILTIN`:
 *    Принудительная инлайнизация функции.
 */

#ifndef VI_COMPILER_ATTRIBUTE_BUILTIN_H
#define VI_COMPILER_ATTRIBUTE_BUILTIN_H

#include "compiler_type.h"

#if (VI_COMPILER_TYPE == VI_COMPILER_TYPE_GCC) || (VI_COMPILER_TYPE == VI_COMPILER_TYPE_CLANG)
/**
 * @def VI_COMPILER_ATTRIBUTE_BUILTIN
 * @brief Принудительно инлайнирует функцию с помощью GCC/Clang.
 * @details Этот макрос гарантирует, что компилятор попытается инлайнировать функцию,
 *          независимо от уровня оптимизации. Он используется для повышения производительности
 *          в критически важных участках кода, где нужно минимизировать накладные расходы
 *          на вызов функций. Применяется для компиляторов GCC и Clang.
 */
#    define VI_COMPILER_ATTRIBUTE_BUILTIN __attribute__((always_inline)) inline

#elif (VI_COMPILER_TYPE == VI_COMPILER_TYPE_MSVC)
/**
 * @def VI_COMPILER_ATTRIBUTE_BUILTIN
 * @brief Принудительно инлайнирует функцию с помощью MSVC.
 * @details Аналогично GCC/Clang, этот макрос указывает компилятору MSVC инлайнировать
 *          функцию любой ценой, если это возможно. Это полезно для критически важных
 *          по производительности участков кода, где важно минимизировать накладные расходы
 *          на вызов функций. Применяется для компилятора MSVC.
 */
#    define VI_COMPILER_ATTRIBUTE_BUILTIN __forceinline
#else
/**
 * @def VI_COMPILER_ATTRIBUTE_BUILTIN
 * @brief Заглушка для неподдерживаемых компиляторов,
 *        где атрибут 'always_inline' не определен.
 *
 * @details Если компилятор не поддерживает атрибут 'always_inline',
 *          этот макрос будет определен как пустой,
 *          и будет выведено сообщение компилятора,
 *          указывающее на отсутствие поддержки.
 *
 * @warning Использование этого макроса с неподдерживаемым компилятором
 *          не даст желаемого эффекта и вызовет предупреждение компилятора.
 */
#    define VI_COMPILER_ATTRIBUTE_BUILTIN

#    pragma message("Warning: Compiler does not support builtin attribute")
#endif

#endif // VI_COMPILER_ATTRIBUTE_BUILTIN_H
