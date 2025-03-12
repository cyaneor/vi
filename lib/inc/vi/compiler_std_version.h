/**
 * @file compiler_std_version.h
 * @brief Определение макросов для различных версий стандарта C.
 *
 * Этот файл предоставляет макросы, представляющие разные версии стандартов языка C,
 * такие как C99, C11, C17 и C23. Макросы позволяют использовать версии стандартов
 * для управления совместимостью и функциональностью кода,
 * в зависимости от поддерживаемого компилятором стандарта.
 *
 * Макросы:
 * - `VI_COMPILER_STD_VERSION_C99`: Версия для стандарта C99 (ISO/IEC 9899:1999).
 * - `VI_COMPILER_STD_VERSION_C11`: Версия для стандарта C11 (ISO/IEC 9899:2011).
 * - `VI_COMPILER_STD_VERSION_C17`: Версия для стандарта C17/C18 (ISO/IEC 9899:2018).
 * - `VI_COMPILER_STD_VERSION_C23`: Версия для стандарта C23 (ISO/IEC 9899:2023).
 * - `VI_COMPILER_STD_VERSION_C`: Определяется в соответствии с макросом `__STDC_VERSION__`.
 *
 * @note Номер версии C23 может различаться в зависимости от компилятора.
 *       Для Clang используется `202311L`, для остальных компиляторов
 *       — значение по умолчанию `202000L`.
 */

#ifndef VI_COMPILER_STD_VERSION_H
#define VI_COMPILER_STD_VERSION_H

#include "compiler_type.h"

/**
 * @def VI_COMPILER_STD_VERSION_C99
 * @brief Представляет стандарт ISO/IEC 9899:1999, также известный как C99.
 */
#define VI_COMPILER_STD_VERSION_C99 199901L

/**
 * @def VI_COMPILER_STD_VERSION_C11
 * @brief Представляет стандарт ISO/IEC 9899:2011, также известный как C11.
 */
#define VI_COMPILER_STD_VERSION_C11 201112L

/**
 * @def VI_COMPILER_STD_VERSION_C17
 * @brief Представляет стандарт ISO/IEC 9899:2018, также известный как C17 или C18.
 */
#define VI_COMPILER_STD_VERSION_C17 201710L

/**
 * @def VI_COMPILER_STD_VERSION_C23
 * @brief Представляет стандарт ISO/IEC 9899:2023, также известный как C23.
 *
 * Номер версии может варьироваться в зависимости от используемого компилятора.
 * При компиляции с Clang устанавливается версия 202311L;
 * в противном случае используется значение по умолчанию 202000L.
 */
#if (VI_COMPILER_TYPE == VI_COMPILER_TYPE_CLANG)
#    define VI_COMPILER_STD_VERSION_C23 202311L
#else
#    define VI_COMPILER_STD_VERSION_C23 202000L
#endif

/**
 * @def VI_COMPILER_STD_VERSION_C
 * @brief Макрос, который использует предопределённый макрос __STDC_VERSION__
 *        для определения версии стандарта C.
 */
#define VI_COMPILER_STD_VERSION_C __STDC_VERSION__

#endif // VI_COMPILER_STD_VERSION_H
