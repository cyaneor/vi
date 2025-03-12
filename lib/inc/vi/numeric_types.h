/**
 * @file numeric_types.h
 * @brief Определения целочисленных типов данных
 *        с фиксированным размером и знаком в зависимости от платформы.
 *
 * Этот файл содержит определения целочисленных типов,
 * которые используются для обеспечения переносимости кода между разными платформами.
 * Включает знаковые и беззнаковые типы с фиксированной длиной, соответствующей базовым типам C.
 *
 * Типы:
 * - Беззнаковые типы: vi_uchar_t, vi_ushort_t, vi_uint_t, vi_ulong_t, vi_ullong_t
 * - Знаковые типы: vi_schar_t, vi_sshort_t, vi_sint_t, vi_slong_t, vi_sllong_t
 *
 * @note Размеры типов могут различаться в зависимости от архитектуры,
 *       однако указанные типы стремятся к совместимости с платформами C.
 */

#ifndef VI_NUMERIC_TYPES_H
#define VI_NUMERIC_TYPES_H

/**
 * @typedef vi_uchar_t
 * @brief Определение беззнакового однобайтового целого типа.
 */
typedef unsigned char vi_uchar_t;

/**
 * @typedef vi_ushort_t
 * @brief Определение беззнакового двухбайтового целого типа.
 */
typedef unsigned short vi_ushort_t;

/**
 * @typedef vi_uint_t
 * @brief Определение беззнакового четырехбайтового целого типа.
 */
typedef unsigned int vi_uint_t;

/**
 * @typedef vi_ulong_t
 * @brief Определение беззнакового целого типа
 *        с длиной в четыре или восемь байт (в зависимости от платформы).
 */
typedef unsigned long vi_ulong_t;

/**
 * @typedef vi_ullong_t
 * @brief Определение беззнакового целого типа
 *        с длиной в восемь байт.
 */
typedef unsigned long long int vi_ullong_t;

/**
 * @typedef vi_schar_t
 * @brief Определение знакового однобайтового целого типа.
 */
typedef char vi_schar_t;

/**
 * @typedef vi_sshort_t
 * @brief Определение знакового двухбайтового целого типа.
 */
typedef short vi_sshort_t;

/**
 * @typedef vi_sint_t
 * @brief Определение знакового четырехбайтового целого типа.
 */
typedef int vi_sint_t;

/**
 * @typedef vi_slong_t
 * @brief Определение знакового целого типа
 *        с длиной в четыре или восемь байт (в зависимости от платформы).
 */
typedef long vi_slong_t;

/**
 * @typedef vi_sllong_t
 * @brief Определение знакового целого типа
 *        с длиной в восемь байт.
 */
typedef long long vi_sllong_t;

#endif // VI_NUMERIC_TYPES_H
