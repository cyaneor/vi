/**
 * @file intptr.h
 * @brief Определения и типы для работы с указателями.
 *
 * Этот файл содержит определения макросов и типов, которые используются
 * для работы с указателями как для знаковых, так и для беззнаковых типов.
 * Типы и макросы зависят от разрядности системы.
 *
 * Основные компоненты:
 * - Макросы для минимальных, максимальных значений и размера типов.
 * - Типы `vi_uintptr_t` и `vi_sintptr_t`, которые являются синонимами
 *   для типов `vi_uaddr_t` и `vi_saddr_t` соответственно.
 */

#ifndef VI_INTPTR_H
#define VI_INTPTR_H

#include "addr.h"

/**
 * @def VI_UINTPTR_T_MIN
 * @brief Минимальное значение для типа `vi_uintptr_t`.
 *
 * Этот макрос определяет минимальное значение для типа `vi_uintptr_t`,
 * эквивалентного `vi_uaddr_t`. Значение берется из макроса `VI_UADDR_T_MIN`.
 */
#define VI_UINTPTR_T_MIN VI_UADDR_T_MIN

/**
 * @def VI_UINTPTR_T_MAX
 * @brief Максимальное значение для типа `vi_uintptr_t`.
 *
 * Этот макрос определяет максимальное значение для типа `vi_uintptr_t`,
 * эквивалентного `vi_uaddr_t`. Значение берется из макроса `VI_UADDR_T_MAX`.
 */
#define VI_UINTPTR_T_MAX VI_UADDR_T_MAX

/**
 * @def VI_UINTPTR_T_SIZE
 * @brief Размер типа `vi_uintptr_t` в байтах.
 *
 * Этот макрос определяет размер типа `vi_uintptr_t`,
 * эквивалентного `vi_uaddr_t`, с использованием макроса `VI_UADDR_T_SIZE`.
 */
#define VI_UINTPTR_T_SIZE VI_UADDR_T_SIZE

/**
 * @typedef vi_uintptr_t
 * @brief Тип для представления беззнаковых указателей.
 *
 * Этот тип является синонимом для типа `vi_uaddr_t` и используется для работы
 * с беззнаковыми указателями. Размер типа определяется разрядностью системы.
 */
typedef vi_uaddr_t vi_uintptr_t;

/**
 * @def VI_SINTPTR_T_MIN
 * @brief Минимальное значение для типа `vi_sintptr_t`.
 *
 * Этот макрос определяет минимальное значение для типа `vi_sintptr_t`,
 * эквивалентного `vi_saddr_t`. Значение берется из макроса `VI_SADDR_T_MIN`.
 */
#define VI_SINTPTR_T_MIN VI_SADDR_T_MIN

/**
 * @def VI_SINTPTR_T_MAX
 * @brief Максимальное значение для типа `vi_sintptr_t`.
 *
 * Этот макрос определяет максимальное значение для типа `vi_sintptr_t`,
 * эквивалентного `vi_saddr_t`. Значение берется из макроса `VI_SADDR_T_MAX`.
 */
#define VI_SINTPTR_T_MAX VI_SADDR_T_MAX

/**
 * @def VI_SINTPTR_T_SIZE
 * @brief Размер типа `vi_sintptr_t` в байтах.
 *
 * Этот макрос определяет размер типа `vi_sintptr_t`,
 * эквивалентного `vi_saddr_t`, с использованием макроса `VI_SADDR_T_SIZE`.
 */
#define VI_SINTPTR_T_SIZE VI_SADDR_T_SIZE

/**
 * @typedef vi_sintptr_t
 * @brief Тип для представления знаковых указателей.
 *
 * Этот тип является синонимом для типа `vi_saddr_t` и используется для работы
 * с знаковыми указателями. Размер типа определяется разрядностью системы.
 */
typedef vi_saddr_t vi_sintptr_t;

#endif // VI_INTPTR_H
