/**
 * @file offset.h
 * @brief Заголовочный файл для типов данных смещений.
 *
 * Этот файл содержит определения макросов и типов данных
 * для работы с подписанными и неподписанными смещениями.
 *
 * Типы данных `vi_soffset_t` и `vi_uoffset_t` представляют собой смещения
 * и используются в различных контекстах, где требуется работа
 * с положительными и отрицательными значениями.
 *
 * Также в этом файле определены макросы для минимальных и максимальных значений,
 * а также для размера типов данных, используемых для смещений.
 */

#ifndef VI_OFFSET_H
#define VI_OFFSET_H

#include "size.h"

/**
 * @def VI_SOFFSET_T_MIN
 * @brief Минимальное значение для типа смещения vi_soffset_t.
 *
 * Этот макрос задает минимальное значение для типа данных `vi_soffset_t`.
 * Он является синонимом для значения макроса `VI_SSIZE_T_MIN`.
 */
#define VI_SOFFSET_T_MIN VI_SSIZE_T_MIN

/**
 * @def VI_SOFFSET_T_MAX
 * @brief Максимальное значение для типа смещения vi_soffset_t.
 *
 * Этот макрос задает максимальное значение для типа данных `vi_soffset_t`.
 * Он является синонимом для значения макроса `VI_SSIZE_T_MAX`.
 */
#define VI_SOFFSET_T_MAX VI_SSIZE_T_MAX

/**
 * @def VI_SOFFSET_T_SIZE
 * @brief Размер типа данных vi_soffset_t.
 *
 * Этот макрос задает размер для типа данных `vi_soffset_t`.
 * Он является синонимом для значения макроса `VI_SSIZE_T_SIZE`.
 */
#define VI_SOFFSET_T_SIZE VI_SSIZE_T_SIZE

/**
 * @typedef vi_soffset_t
 * @brief Тип данных для подписанных смещений.
 *
 * Тип `vi_soffset_t` является синонимом для типа данных `vi_ssize_t`,
 * используемого для представления подписанных смещений.
 */
typedef vi_ssize_t vi_soffset_t;

/**
 * @def VI_UOFFSET_T_MIN
 * @brief Минимальное значение для типа смещения vi_uoffset_t.
 *
 * Этот макрос задает минимальное значение для типа данных `vi_uoffset_t`.
 * Он является синонимом для значения макроса `VI_SSIZE_T_MIN`.
 */
#define VI_UOFFSET_T_MIN VI_SSIZE_T_MIN

/**
 * @def VI_UOFFSET_T_MAX
 * @brief Максимальное значение для типа смещения vi_uoffset_t.
 *
 * Этот макрос задает максимальное значение для типа данных `vi_uoffset_t`.
 * Он является синонимом для значения макроса `VI_SSIZE_T_MAX`.
 */
#define VI_UOFFSET_T_MAX VI_SSIZE_T_MAX

/**
 * @def VI_UOFFSET_T_SIZE
 * @brief Размер типа данных vi_uoffset_t.
 *
 * Этот макрос задает размер для типа данных `vi_uoffset_t`.
 * Он является синонимом для значения макроса `VI_SSIZE_T_SIZE`.
 */
#define VI_UOFFSET_T_SIZE VI_SSIZE_T_SIZE

/**
 * @typedef vi_uoffset_t
 * @brief Тип данных для неподписанных смещений.
 *
 * Тип `vi_uoffset_t` является синонимом для типа данных `vi_usize_t`,
 * используемого для представления неподписанных смещений.
 */
typedef vi_usize_t vi_uoffset_t;

#endif // VI_OFFSET_H
