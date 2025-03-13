/**
 * @file wchar.h
 * @brief Заголовочный файл для определения типов данных широких символов.
 *
 * Этот файл содержит определения типов данных для широких символов,
 * которые могут быть как знаковыми, так и беззнаковыми,
 * в зависимости от настроек компилятора.
 */

#ifndef VI_WCHAR_H
#define VI_WCHAR_H

#include "numeric.h"

/**
 * @def VI_SCHAR16_T_MIN
 * @brief Минимальное значение для типа VI_SCHAR16_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_SCHAR16_T.
 * Он эквивалентен значению макроса VI_S16_T_MIN.
 */
#define VI_SCHAR16_T_MIN VI_S16_T_MIN

/**
 * @def VI_SCHAR16_T_MAX
 * @brief Максимальное значение для типа VI_SCHAR16_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_SCHAR16_T.
 * Он эквивалентен значению макроса VI_S16_T_MAX.
 */
#define VI_SCHAR16_T_MAX VI_S16_T_MAX

/**
 * @def VI_SCHAR16_T_SIZE
 * @brief Размер типа VI_SCHAR16_T в байтах.
 *
 * Этот макрос возвращает размер типа данных VI_SCHAR16_T в байтах.
 * Он эквивалентен значению макроса VI_S16_T_SIZE.
 */
#define VI_SCHAR16_T_SIZE VI_S16_T_SIZE

/**
 * @typedef vi_schar16_t
 * @brief Тип данных для 16-битных знаковых целых чисел.
 *
 * Этот тип является синонимом для типа данных @ref vi_s16_t,
 * который представляет собой 16-битное знаковое целое число.
 */
typedef vi_s16_t vi_schar16_t;

/**
 * @def VI_UCHAR16_T_MIN
 * @brief Минимальное значение для типа VI_UCHAR16_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_UCHAR16_T.
 * Он эквивалентен значению макроса VI_U16_T_MIN.
 */
#define VI_UCHAR16_T_MIN VI_U16_T_MIN

/**
 * @def VI_UCHAR16_T_MAX
 * @brief Максимальное значение для типа VI_UCHAR16_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_UCHAR16_T.
 * Он эквивалентен значению макроса VI_U16_T_MAX.
 */
#define VI_UCHAR16_T_MAX VI_U16_T_MAX

/**
 * @def VI_UCHAR16_T_SIZE
 * @brief Размер типа VI_UCHAR16_T в байтах.
 *
 * Этот макрос возвращает размер типа данных VI_UCHAR16_T в байтах.
 * Он эквивалентен значению макроса VI_U16_T_SIZE.
 */
#define VI_UCHAR16_T_SIZE VI_U16_T_SIZE

/**
 * @typedef vi_uchar16_t
 * @brief Тип данных для 16-битных беззнаковых целых чисел.
 *
 * Этот тип является синонимом для типа данных @ref vi_u16_t,
 * который представляет собой 16-битное беззнаковое целое число.
 */
typedef vi_u16_t vi_uchar16_t;

/**
 * @def VI_SCHAR32_T_MIN
 * @brief Минимальное значение для типа VI_SCHAR32_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_SCHAR32_T.
 * Он эквивалентен значению макроса VI_S32_T_MIN.
 */
#define VI_SCHAR32_T_MIN VI_S32_T_MIN

/**
 * @def VI_SCHAR32_T_MAX
 * @brief Максимальное значение для типа VI_SCHAR32_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_SCHAR32_T.
 * Он эквивалентен значению макроса VI_S32_T_MAX.
 */
#define VI_SCHAR32_T_MAX VI_S32_T_MAX

/**
 * @def VI_SCHAR32_T_SIZE
 * @brief Размер типа VI_SCHAR32_T в байтах.
 *
 * Этот макрос возвращает размер типа данных VI_SCHAR32_T в байтах.
 * Он эквивалентен значению макроса VI_S32_T_SIZE.
 */
#define VI_SCHAR32_T_SIZE VI_S32_T_SIZE

/**
 * @typedef vi_schar32_t
 * @brief Тип данных для 32-битных знаковых целых чисел.
 *
 * Этот тип является синонимом для типа данных @ref vi_s32_t,
 * который представляет собой 32-битное знаковое целое число.
 */
typedef vi_s32_t vi_schar32_t;

/**
 * @def VI_UCHAR32_T_MIN
 * @brief Минимальное значение для типа VI_UCHAR32_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_UCHAR32_T.
 * Он эквивалентен значению макроса VI_U32_T_MIN.
 */
#define VI_UCHAR32_T_MIN VI_U32_T_MIN

/**
 * @def VI_UCHAR32_T_MAX
 * @brief Максимальное значение для типа VI_UCHAR32_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_UCHAR32_T.
 * Он эквивалентен значению макроса VI_U32_T_MAX.
 */
#define VI_UCHAR32_T_MAX VI_U32_T_MAX

/**
 * @def VI_UCHAR32_T_SIZE
 * @brief Размер типа VI_UCHAR32_T в байтах.
 *
 * Этот макрос возвращает размер типа данных VI_UCHAR32_T в байтах.
 * Он эквивалентен значению макроса VI_U32_T_SIZE.
 */
#define VI_UCHAR32_T_SIZE VI_U32_T_SIZE

/**
 * @typedef vi_uchar32_t
 * @brief Тип данных для 32-битных беззнаковых целых чисел.
 *
 * Этот тип является синонимом для типа данных @ref vi_u32_t,
 * который представляет собой 32-битное беззнаковое целое число.
 */
typedef vi_u32_t vi_uchar32_t;

/**
 * @def VI_WCHAR_T_SIZE
 * @brief Флаг компиляции, определяющий размер @ref vi_wchar_t.
 *
 * - Если флаг @ref VI_WCHAR_T_SIZE равен 4,
 *   то @ref vi_wchar_t будет 32-битным.
 * - Если флаг @ref VI_WCHAR_T_SIZE равен 2,
 *   то @ref vi_wchar_t будет 16-битным.
 */
#if VI_WCHAR_T_SIZE == 4
#    ifdef VI_CHAR_UNSIGNED
/**
 * @def VI_WCHAR_T_MIN
 * @brief Минимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_UCHAR32_T_MIN.
 */
#        define VI_WCHAR_T_MIN VI_UCHAR32_T_MIN

/**
 * @def VI_WCHAR_T_MAX
 * @brief Максимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_UCHAR32_T_MAX.
 */
#        define VI_WCHAR_T_MAX VI_UCHAR32_T_MAX

/**
 * @typedef vi_wchar_t
 * @brief Тип данных для широкого символа (32-битный).
 *
 * Тип @ref vi_wchar_t представляет собой 32-битный широкий символ, который может быть либо
 * знаковым, либо беззнаковым в зависимости от флага компиляции @c VI_CHAR_UNSIGNED.
 *
 * - Если флаг @c VI_CHAR_UNSIGNED определён, то @ref vi_wchar_t является синонимом
 *   для типа @ref vi_uchar32_t, который представляет собой 32-битное беззнаковое целое число.
 *
 * @note Этот тип используется для представления широких символов с размером 32 бита.
 */
typedef vi_uchar32_t vi_wchar_t;
#    else
/**
 * @def VI_WCHAR_T_MIN
 * @brief Минимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_SCHAR32_T_MIN.
 */
#        define VI_WCHAR_T_MIN VI_SCHAR32_T_MIN

/**
 * @def VI_WCHAR_T_MAX
 * @brief Максимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_SCHAR32_T_MAX.
 */
#        define VI_WCHAR_T_MAX VI_SCHAR32_T_MAX

/**
 * @typedef vi_wchar_t
 * @brief Тип данных для широкого символа (32-битный).
 *
 * Тип @ref vi_wchar_t представляет собой 32-битный широкий символ, который может быть либо
 * знаковым, либо беззнаковым в зависимости от флага компиляции @c VI_CHAR_UNSIGNED.
 *
 * - Если флаг @c VI_CHAR_UNSIGNED не определён, то @ref vi_wchar_t является синонимом
 *   для типа @ref vi_schar32_t, который представляет собой 32-битное знаковое целое число.
 *
 * @note Этот тип используется для представления широких символов с размером 32 бита.
 */
typedef vi_schar32_t vi_wchar_t;
#    endif // VI_CHAR_UNSIGNED
#elif VI_WCHAR_T_SIZE == 2
#    ifdef VI_CHAR_UNSIGNED
/**
 * @def VI_WCHAR_T_MIN
 * @brief Минимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_UCHAR16_T_MIN.
 */
#        define VI_WCHAR_T_MIN VI_UCHAR16_T_MIN

/**
 * @def VI_WCHAR_T_MAX
 * @brief Максимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_UCHAR16_T_MAX.
 */
#        define VI_WCHAR_T_MAX VI_UCHAR16_T_MAX

/**
 * @typedef vi_wchar_t
 * @brief Тип данных для широкого символа (16-битный).
 *
 * Тип @ref vi_wchar_t представляет собой 16-битный широкий символ, который может быть либо
 * знаковым, либо беззнаковым в зависимости от флага компиляции @c VI_CHAR_UNSIGNED.
 *
 * - Если флаг @c VI_CHAR_UNSIGNED определён, то @ref vi_wchar_t является синонимом
 *   для типа @ref vi_uchar16_t, который представляет собой 16-битное беззнаковое целое число.
 *
 * @note Этот тип используется для представления широких символов с размером 16 бита.
 */
typedef vi_uchar16_t vi_wchar_t;
#    else
/**
 * @def VI_WCHAR_T_MIN
 * @brief Минимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает минимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_SCHAR16_T_MIN.
 */
#        define VI_WCHAR_T_MIN VI_SCHAR16_T_MIN

/**
 * @def VI_WCHAR_T_MAX
 * @brief Максимальное значение для типа VI_WCHAR_T.
 *
 * Этот макрос задает максимальное значение для типа данных VI_WCHAR_T.
 * Он эквивалентен значению макроса VI_SCHAR16_T_MAX.
 */
#        define VI_WCHAR_T_MAX VI_SCHAR16_T_MAX

/**
 * @typedef vi_wchar_t
 * @brief Тип данных для широкого символа (16-битный).
 *
 * Тип @ref vi_wchar_t представляет собой 16-битный широкий символ,
 * который может быть либо знаковым, либо беззнаковым в зависимости
 * от флага компиляции @c VI_CHAR_UNSIGNED.
 *
 * - Если флаг @c VI_CHAR_UNSIGNED не определён, то @ref vi_wchar_t является синонимом
 *   для типа @ref vi_schar16_t, который представляет собой 16-битное знаковое целое число.
 *
 * @note Этот тип используется для представления широких символов с размером 16 бит.
 */
typedef vi_schar16_t vi_wchar_t;
#    endif // VI_CHAR_UNSIGNED
#else
#    error "Unknown size for VI_WCHAR_T_SIZE"
#endif // VI_WCHAR_T_SIZE

#endif // VI_WCHAR_H
