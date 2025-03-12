/**
 * @file size.h
 * @brief Определения типов для представления размеров в байтах.
 *
 * Этот файл содержит определения типов `vi_ssize_t` и `vi_usize_t`,
 * которые используются для представления знаковых и беззнаковых значений размера соответственно.
 * В зависимости от архитектуры (8, 16, 32, 64 бит) используются соответствующие типы данных,
 * такие как `vi_s8_t`, `vi_s16_t`, `vi_s32_t`, `vi_s64_t` для знаковых значений и
 *           `vi_u8_t`, `vi_u16_t`, `vi_u32_t`, `vi_u64_t` для беззнаковых значений.
 *
 * @note В случае, если `VI_OPTION_SEGMENTED_ARCH` содержит неподдерживаемое значение,
 *       будет сгенерирована ошибка компиляции.
 */

#ifndef VI_SIZE_H
#define VI_SIZE_H

#include "addr.h"

#ifndef VI_OPTION_SEGMENTED_ARCH

/**
 * @def VI_SSIZE_T_MIN
 * @brief Минимальное значение для типа `vi_ssize_t`, синоним для `VI_SADDR_T_MIN`.
 */
#    define VI_SSIZE_T_MIN VI_SADDR_T_MIN

/**
 * @def VI_SSIZE_T_MAX
 * @brief Максимальное значение для типа `vi_ssize_t`, синоним для `VI_SADDR_T_MAX`.
 */
#    define VI_SSIZE_T_MAX VI_SADDR_T_MAX

/**
 * @def VI_SSIZE_T_SIZE
 * @brief Размер типа `vi_ssize_t` в байтах, синоним для `VI_SADDR_T_SIZE`.
 */
#    define VI_SSIZE_T_SIZE VI_SADDR_T_SIZE

/**
 * @typedef vi_ssize_t
 * @brief Тип для знаковых значений размера, синоним для `vi_saddr_t`.
 *
 * Этот тип используется для представления размера в байтах в случае,
 * когда требуется поддержка отрицательных значений.
 */
typedef vi_saddr_t vi_ssize_t;

/**
 * @def VI_USIZE_T_MIN
 * @brief Минимальное значение для типа `vi_usize_t`, синоним для `VI_UADDR_T_MIN`.
 */
#    define VI_USIZE_T_MIN VI_UADDR_T_MIN

/**
 * @def VI_USIZE_T_MAX
 * @brief Максимальное значение для типа `vi_usize_t`, синоним для `VI_UADDR_T_MAX`.
 */
#    define VI_USIZE_T_MAX VI_UADDR_T_MAX

/**
 * @def VI_USIZE_T_SIZE
 * @brief Размер типа `vi_usize_t` в байтах, синоним для `VI_UADDR_T_SIZE`.
 */
#    define VI_USIZE_T_SIZE VI_UADDR_T_SIZE

/**
 * @typedef vi_usize_t
 * @brief Тип для беззнаковых значений размера, синоним для `vi_uaddr_t`.
 *
 * Этот тип используется для представления размера в байтах в случае,
 * когда требуется поддержка только положительных значений.
 */
typedef vi_uaddr_t vi_usize_t;
#elif (VI_OPTION_SEGMENTED_ARCH == 64)

/**
 * @def VI_SSIZE_T_MIN
 * @brief Минимальное значение для типа `vi_ssize_t`, синоним для `VI_S64_T_MIN`.
 */
#    define VI_SSIZE_T_MIN VI_S64_T_MIN

/**
 * @def VI_SSIZE_T_MAX
 * @brief Максимальное значение для типа `vi_ssize_t`, синоним для `VI_S64_T_MAX`.
 */
#    define VI_SSIZE_T_MAX VI_S64_T_MAX

/**
 * @def VI_SSIZE_T_SIZE
 * @brief Размер типа `vi_ssize_t` в байтах, синоним для `VI_S64_T_SIZE`.
 */
#    define VI_SSIZE_T_SIZE VI_S64_T_SIZE

/**
 * @typedef vi_ssize_t
 * @brief Тип для знаковых значений размера, синоним для `vi_s64_t`.
 *
 * Этот тип используется для представления размера в байтах
 * с поддержкой отрицательных значений на 64-битных архитектурах.
 */
typedef vi_s64_t vi_ssize_t;

/**
 * @def VI_USIZE_T_MIN
 * @brief Минимальное значение для типа `vi_usize_t`, синоним для `VI_U64_T_MIN`.
 */
#    define VI_USIZE_T_MIN VI_U64_T_MIN

/**
 * @def VI_USIZE_T_MAX
 * @brief Максимальное значение для типа `vi_usize_t`, синоним для `VI_U64_T_MAX`.
 */
#    define VI_USIZE_T_MAX VI_U64_T_MAX

/**
 * @def VI_USIZE_T_SIZE
 * @brief Размер типа `vi_usize_t` в байтах, синоним для `VI_U64_T_SIZE`.
 */
#    define VI_USIZE_T_SIZE VI_U64_T_SIZE

/**
 * @typedef vi_usize_t
 * @brief Тип для беззнаковых значений размера, синоним для `vi_u64_t`.
 *
 * Этот тип используется для представления размера в байтах
 * на 64-битных архитектурах с поддержкой только положительных значений.
 */
typedef vi_u64_t vi_usize_t;

#elif (VI_OPTION_SEGMENTED_ARCH == 32)

/**
 * @def VI_SSIZE_T_MIN
 * @brief Минимальное значение для типа `vi_ssize_t`, синоним для `VI_S32_T_MIN`.
 */
#    define VI_SSIZE_T_MIN VI_S32_T_MIN

/**
 * @def VI_SSIZE_T_MAX
 * @brief Максимальное значение для типа `vi_ssize_t`, синоним для `VI_S32_T_MAX`.
 */
#    define VI_SSIZE_T_MAX VI_S32_T_MAX

/**
 * @def VI_SSIZE_T_SIZE
 * @brief Размер типа `vi_ssize_t` в байтах, синоним для `VI_S32_T_SIZE`.
 */
#    define VI_SSIZE_T_SIZE VI_S32_T_SIZE

/**
 * @typedef vi_ssize_t
 * @brief Тип для знаковых значений размера, синоним для `vi_s32_t`.
 *
 * Этот тип используется для представления размера в байтах
 * с поддержкой отрицательных значений на 32-битных архитектурах.
 */
typedef vi_s32_t vi_ssize_t;

/**
 * @def VI_USIZE_T_MIN
 * @brief Минимальное значение для типа `vi_usize_t`, синоним для `VI_U32_T_MIN`.
 */
#    define VI_USIZE_T_MIN VI_U32_T_MIN

/**
 * @def VI_USIZE_T_MAX
 * @brief Максимальное значение для типа `vi_usize_t`, синоним для `VI_U32_T_MAX`.
 */
#    define VI_USIZE_T_MAX VI_U32_T_MAX

/**
 * @def VI_USIZE_T_SIZE
 * @brief Размер типа `vi_usize_t` в байтах, синоним для `VI_U32_T_SIZE`.
 */
#    define VI_USIZE_T_SIZE VI_U32_T_SIZE

/**
 * @typedef vi_usize_t
 * @brief Тип для беззнаковых значений размера, синоним для `vi_u32_t`.
 *
 * Этот тип используется для представления размера в байтах
 * на 32-битных архитектурах с поддержкой только положительных значений.
 */
typedef vi_u32_t vi_usize_t;

#elif (VI_OPTION_SEGMENTED_ARCH == 16)

/**
 * @def VI_SSIZE_T_MIN
 * @brief Минимальное значение для типа `vi_ssize_t`, синоним для `VI_S16_T_MIN`.
 */
#    define VI_SSIZE_T_MIN VI_S16_T_MIN

/**
 * @def VI_SSIZE_T_MAX
 * @brief Максимальное значение для типа `vi_ssize_t`, синоним для `VI_S16_T_MAX`.
 */
#    define VI_SSIZE_T_MAX VI_S16_T_MAX

/**
 * @def VI_SSIZE_T_SIZE
 * @brief Размер типа `vi_ssize_t` в байтах, синоним для `VI_S16_T_SIZE`.
 */
#    define VI_SSIZE_T_SIZE VI_S16_T_SIZE

/**
 * @typedef vi_ssize_t
 * @brief Тип для знаковых значений размера, синоним для `vi_s16_t`.
 *
 * Этот тип используется для представления размера в байтах
 * с поддержкой отрицательных значений на 16-битных архитектурах.
 */
typedef vi_s16_t vi_ssize_t;

/**
 * @def VI_USIZE_T_MIN
 * @brief Минимальное значение для типа `vi_usize_t`, синоним для `VI_U16_T_MIN`.
 */
#    define VI_USIZE_T_MIN VI_U16_T_MIN

/**
 * @def VI_USIZE_T_MAX
 * @brief Максимальное значение для типа `vi_usize_t`, синоним для `VI_U16_T_MAX`.
 */
#    define VI_USIZE_T_MAX VI_U16_T_MAX

/**
 * @def VI_USIZE_T_SIZE
 * @brief Размер типа `vi_usize_t` в байтах, синоним для `VI_U16_T_SIZE`.
 */
#    define VI_USIZE_T_SIZE VI_U16_T_SIZE

/**
 * @typedef vi_usize_t
 * @brief Тип для беззнаковых значений размера, синоним для `vi_u16_t`.
 *
 * Этот тип используется для представления размера в байтах
 * на 16-битных архитектурах с поддержкой только положительных значений.
 */
typedef vi_u16_t vi_usize_t;

#elif (VI_OPTION_SEGMENTED_ARCH == 8)

/**
 * @def VI_SSIZE_T_MIN
 * @brief Минимальное значение для типа `vi_ssize_t`, синоним для `VI_S8_T_MIN`.
 */
#    define VI_SSIZE_T_MIN VI_S8_T_MIN

/**
 * @def VI_SSIZE_T_MAX
 * @brief Максимальное значение для типа `vi_ssize_t`, синоним для `VI_S8_T_MAX`.
 */
#    define VI_SSIZE_T_MAX VI_S8_T_MAX

/**
 * @def VI_SSIZE_T_SIZE
 * @brief Размер типа `vi_ssize_t` в байтах, синоним для `VI_S8_T_SIZE`.
 */
#    define VI_SSIZE_T_SIZE VI_S8_T_SIZE

/**
 * @typedef vi_ssize_t
 * @brief Тип для знаковых значений размера, синоним для `vi_s8_t`.
 *
 * Этот тип используется для представления размера в байтах
 * с поддержкой отрицательных значений на 8-битных архитектурах.
 */
typedef vi_s8_t vi_ssize_t;

/**
 * @def VI_USIZE_T_MIN
 * @brief Минимальное значение для типа `vi_usize_t`, синоним для `VI_U8_T_MIN`.
 */
#    define VI_USIZE_T_MIN VI_U8_T_MIN

/**
 * @def VI_USIZE_T_MAX
 * @brief Максимальное значение для типа `vi_usize_t`, синоним для `VI_U8_T_MAX`.
 */
#    define VI_USIZE_T_MAX VI_U8_T_MAX

/**
 * @def VI_USIZE_T_SIZE
 * @brief Размер типа `vi_usize_t` в байтах, синоним для `VI_U8_T_SIZE`.
 */
#    define VI_USIZE_T_SIZE VI_U8_T_SIZE

/**
 * @typedef vi_usize_t
 * @brief Тип для беззнаковых значений размера, синоним для `vi_u8_t`.
 *
 * Этот тип используется для представления размера в байтах
 * на 8-битных архитектурах с поддержкой только положительных значений.
 */
typedef vi_u8_t vi_usize_t;
#else
#    error "VI_OPTION_SEGMENTED_ARCH contains an unsupported architecture value"

#endif // VI_OPTION_SEGMENTED_ARCH

#endif // VI_SIZE_H
