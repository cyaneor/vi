/**
 * @file compiler_attribute_symbol.h
 * @brief Определение макросов для атрибутов экспорта,
 *        импорта и скрытия символов.
 *
 * Этот файл предоставляет макросы для управления видимостью символов в динамических
 * библиотеках, что позволяет контролировать экспорт, импорт и скрытие символов
 * (функций и данных) при компиляции с различными компиляторами.
 *
 * Макросы:
 * - `VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT`:
 *    Экспорт символа для использования вне библиотеки.
 * - `VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT`:
 *    Импорт символа, определенного вне текущей библиотеки.
 * - `VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN`:
 *    Скрытие символа, чтобы он не был доступен вне библиотеки.
 *
 * Поддерживаемые компиляторы:
 * - **GCC и Clang**: Используются атрибуты `__attribute__((visibility("default")))`
 *                    для экспорта/импорта и `__attribute__((visibility("hidden")))` для скрытия.
 *
 * - **MSVC**: Используются `__declspec(dllexport)` для экспорта
 *             и `__declspec(dllimport)` для импорта.
 *             Скрытие символов не поддерживается напрямую.
 *
 * @note Для неподдерживаемых компиляторов атрибуты
 *       определены как пустые макросы, а также выводится предупреждение.
 */

#ifndef VI_COMPILER_ATTRIBUTE_SYMBOL_H
#define VI_COMPILER_ATTRIBUTE_SYMBOL_H

#include "compiler_type.h"

#if (VI_COMPILER_TYPE == VI_COMPILER_TYPE_GCC) || (VI_COMPILER_TYPE == VI_COMPILER_TYPE_CLANG)
/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT
 * @brief Отмечает символ для экспорта в общих библиотеках для компиляторов GCC и Clang.
 * @details Этот атрибут делает символ видимым и доступным для связывания
 *          извне общей библиотеки, где он определен.
 *          Используется для компиляторов GCC и Clang.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT __attribute__((visibility("default")))

/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT
 * @brief Отмечает символ для импорта в общих библиотеках для компиляторов GCC и Clang.
 * @details Этот атрибут используется при доступе к символу из общей библиотеки,
 *          который не определен в текущем проекте.
 *          Используется для компиляторов GCC и Clang.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT __attribute__((visibility("default")))

/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN
 * @brief Скрывает символ, чтобы предотвратить его экспорт для компиляторов GCC и Clang.
 * @details Этот атрибут гарантирует, что символ не будет виден за пределами общей
 *          библиотеки, где он определен, фактически делая его приватным.
 *          Используется для компиляторов GCC и Clang.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN __attribute__((visibility("hidden")))

#elif (VI_COMPILER_TYPE == VI_COMPILER_TYPE_MSVC)
/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT
 * @brief Отмечает символ для экспорта в общих библиотеках, используя MSVC.
 * @details При создании общей библиотеки с MSVC
 *          используйте этот атрибут для экспорта символа.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT __declspec(dllexport)

/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT
 * @brief Отмечает символ для импорта в общих библиотеках, используя MSVC.
 * @details При использовании общей библиотеки с MSVC
 *          используйте этот атрибут для импорта символа.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT __declspec(dllimport)

/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN
 * @brief Переопределение для MSVC,
 *        который не поддерживает скрытие символов таким же образом, как GCC/Clang.
 *
 * @details В MSVC нет эквивалента атрибуту видимости 'hidden'.
 *          Символы, не помеченные явно для экспорта, не экспортируются.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN
#else
/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT
 * @brief Заполнитель для неподдерживаемых компиляторов,
 *        где экспорт символов не определен.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_EXPORT

/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT
 * @brief Заполнитель для неподдерживаемых компиляторов,
 *        где импорт символов не определен.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_IMPORT

/**
 * @def VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN
 * @brief Заполнитель для неподдерживаемых компиляторов,
 *        где скрытие символов не определено.
 */
#    define VI_COMPILER_ATTRIBUTE_SYMBOL_HIDDEN

#    pragma message("Warning: Compiler does not support export, import and hidden attributes")
#endif

#endif // VI_COMPILER_ATTRIBUTE_SYMBOL_H
