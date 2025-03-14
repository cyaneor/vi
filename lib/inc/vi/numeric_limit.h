/**
 * @file numeric_limit.h
 * @brief Макросы для определения границ значений целочисленных типов.
 *
 * Этот файл содержит набор макросов, предназначенных для определения
 * минимальных и максимальных значений знаковых и беззнаковых целочисленных типов.
 * Макросы работают для произвольных целочисленных типов `T` и полезны для обеспечения
 * переносимости кода между различными архитектурами и компиляторами.
 *
 * Макросы:
 * - Минимальное значение для знаковых типов: VI_NUMERIC_LIMIT_SINT_MIN(T)
 * - Максимальное значение для знаковых типов: VI_NUMERIC_LIMIT_SINT_MAX(T)
 * - Минимальное значение для беззнаковых типов: VI_NUMERIC_LIMIT_UINT_MIN(T)
 * - Максимальное значение для беззнаковых типов: VI_NUMERIC_LIMIT_UINT_MAX(T)
 *
 * @note Макросы используют битовые операции и предполагают,
 *       что тип `T` является либо знаковым, либо беззнаковым целым числом.
 */

#ifndef VI_NUMERIC_LIMIT_H
#define VI_NUMERIC_LIMIT_H

/**
 * @def VI_NUMERIC_LIMIT_SINT_MIN(T)
 * @brief Определяет минимальное значение для знакового целого типа T.
 *
 * Этот макрос вычисляет минимальное значение для знакового целого типа `T`,
 * используя побитовый сдвиг. Минимальное значение для знакового целого
 * представляет наименьшее возможное отрицательное число для заданного типа.
 *
 * @param T Целочисленный тип,
 *          для которого требуется определить минимальное значение.
 * @return Минимальное значение для знакового целого типа `T`.
 *
 * @note Макрос предполагает, что `T` является знаковым целочисленным типом.
 */
#define VI_NUMERIC_LIMIT_SINT_MIN(T) ((T)((T)1 << (sizeof(T) * 8 - 1)))

/**
 * @def VI_NUMERIC_LIMIT_SINT_MAX(T)
 * @brief Определяет максимальное значение для знакового целого типа T.
 *
 * Этот макрос вычисляет максимальное значение для знакового целого типа `T`
 * с использованием побитовых операций. Максимальное значение для знакового целого
 * типа представляет наибольшее положительное число, которое может быть представлено этим типом.
 *
 * @param T Целочисленный тип,
 *          для которого требуется определить максимальное значение.
 * @return Максимальное значение для знакового целого типа `T`.
 *
 * @note Макрос предполагает, что `T` является знаковым целочисленным типом.
 */
#define VI_NUMERIC_LIMIT_SINT_MAX(T) (~(T)(((T)1) << (sizeof(T) * 8 - 1)))

/**
 * @def VI_NUMERIC_LIMIT_UINT_MIN(T)
 * @brief Определяет минимальное значение для беззнакового целого типа T.
 *
 * Этот макрос задаёт минимальное значение для беззнакового целого типа `T`,
 * которое всегда равно нулю.
 *
 * @param T Целочисленный тип,
 *          для которого требуется определить минимальное значение.
 * @return Минимальное значение для беззнакового целого типа `T` (всегда 0).
 *
 * @note Макрос предполагает, что `T` является беззнаковым целочисленным типом.
 */
#define VI_NUMERIC_LIMIT_UINT_MIN(T) ((T)0U)

/**
 * @def VI_NUMERIC_LIMIT_UINT_MAX(T)
 * @brief Определяет максимальное значение для беззнакового целого типа T.
 *
 * Этот макрос вычисляет максимальное значение для беззнакового целого типа `T`
 * с использованием побитового оператора отрицания. Максимальное значение
 * представляет собой число, в котором все биты установлены в 1.
 *
 * @param T Беззнаковый целочисленный тип,
 *          для которого требуется определить максимальное значение.
 * @return Максимальное значение для беззнакового целого типа `T`.
 *
 * @note Макрос предполагает, что `T` является беззнаковым целочисленным типом.
 */
#define VI_NUMERIC_LIMIT_UINT_MAX(T) ((T)~0ULL)

#endif // VI_NUMERIC_LIMIT_H
