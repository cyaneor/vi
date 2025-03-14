/**
 * @file numeric_fixed_types.h
 * @brief Этот файл содержит определения компактных числовых типов
 *        и статические проверки для проверки их размеров.
 *
 * Файл определяет различные псевдонимы для знаковых
 * и беззнаковых целочисленных типов разного размера
 * (8-битные, 16-битные, 32-битные и 64-битные).
 *
 * Включены также статические проверки,
 * чтобы гарантировать соответствие размеров этих типов ожидаемым значениям,
 * обеспечивая переносимость и согласованность на разных платформах.
 *
 * В этом файле определены следующие пользовательские типы:
 * - vi_u8_t: беззнаковый 8-битный тип
 * - vi_s8_t: знаковый 8-битный тип
 * - vi_u16_t: беззнаковый 16-битный тип
 * - vi_s16_t: знаковый 16-битный тип
 * - vi_u32_t: беззнаковый 32-битный тип
 * - vi_s32_t: знаковый 32-битный тип
 * - vi_u64_t: беззнаковый 64-битный тип
 * - vi_s64_t: знаковый 64-битный тип
 *
 * Статические проверки включены для гарантии:
 * - Размер vi_u8_t равен 1 байту.
 * - Размер vi_u16_t равен 2 байтам.
 * - Размер vi_u32_t равен 4 байтам.
 * - Размер vi_u64_t равен 8 байтам.
 */

#ifndef VI_NUMERIC_FIXED_TYPES_H
#define VI_NUMERIC_FIXED_TYPES_H

#include "numeric_types.h"

/**
 * @typedef vi_u8_t
 * @brief Псевдоним для 8-битного беззнакового целого числа (vi_uchar_t).
 */
typedef vi_uchar_t vi_u8_t;

/**
 * @typedef vi_s8_t
 * @brief Псевдоним для 8-битного знакового целого числа (vi_schar_t).
 */
typedef vi_schar_t vi_s8_t;

/**
 * @typedef vi_u16_t
 * @brief Псевдоним для 16-битного беззнакового целого числа (vi_ushort_t).
 */
typedef vi_ushort_t vi_u16_t;

/**
 * @typedef vi_s16_t
 * @brief Псевдоним для 16-битного знакового целого числа (vi_sshort_t).
 */
typedef vi_sshort_t vi_s16_t;

/**
 * @typedef vi_u32_t
 * @brief Псевдоним для 32-битного беззнакового целого числа (vi_uint_t).
 */
typedef vi_uint_t vi_u32_t;

/**
 * @typedef vi_s32_t
 * @brief Псевдоним для 32-битного знакового целого числа (vi_sint_t).
 */
typedef vi_sint_t vi_s32_t;

/**
 * @typedef vi_u64_t
 * @brief Псевдоним для 64-битного беззнакового целого числа (vi_ullong_t).
 */
typedef vi_ullong_t vi_u64_t;

/**
 * @typedef vi_s64_t
 * @brief Псевдоним для 64-битного знакового целого числа (vi_sllong_t).
 */
typedef vi_sllong_t vi_s64_t;

#endif // VI_NUMERIC_FIXED_TYPES_H
