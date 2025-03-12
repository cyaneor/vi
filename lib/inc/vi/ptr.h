/**
 * @file ptr.h
 * @brief Заголовочный файл, определяющий тип указателя и макросы для работы с ним.
 *
 * Этот файл содержит определения макросов для работы с типом указателя на `void`,
 * который может быть использован для хранения указателей на любые типы данных.
 * Включает определения для минимальных и максимальных значений этого указателя,
 * а также для размера указателя.
 *
 * @note Тип указателя `void *` является универсальным
 *       и требует явного приведения типов при доступе к данным,
 *       на которые он указывает.
 *
 * Макросы:
 * - `vi_ptr_t`      — тип указателя на `void`.
 * - `VI_PTR_T_MIN`  — минимальное значение для указателя `vi_ptr_t`,
 *                     эквивалентное нулевому указателю.
 * - `VI_PTR_T_MAX`  — максимальное значение для указателя `vi_ptr_t`,
 *                     эквивалентное наибольшему возможному адресу.
 * - `VI_PTR_T_SIZE` — размер указателя в байтах,
 *                     определяемый через макрос `__SIZEOF_POINTER__`.
 *
 * Этот файл полезен для ситуаций, когда необходимо работать
 * с универсальными указателями на данные без привязки
 * к конкретному типу данных, а также для операций,
 * зависящих от размера указателей.
 */

#ifndef VI_PTR_H
#define VI_PTR_H

/**
 * @def vi_ptr_t
 * @brief Определение макроса для указателя на пустой тип.
 *
 * Этот макрос определяет тип указателя на `void`,
 * который может быть использован для хранения
 * указателей на любые типы данных.
 *
 * Тип `void *` является универсальным указателем,
 * который не имеет привязки к конкретному типу данных.
 *
 * @note Использование указателей на `void`
 *       требует явного приведения типа при доступе к данным.
 */
#define vi_ptr_t void *

/**
 * @def VI_PTR_T_MIN
 * @brief Минимальное значение для указателя на тип `vi_ptr_t`.
 *
 * Этот макрос определяет минимальное значение для указателя,
 * которое используется для обозначения пустого или неинициализированного указателя.
 * Это значение приравнивается к нулевому указателю.
 */
#define VI_PTR_T_MIN ((vi_ptr_t)0)

/**
 * @def VI_PTR_T_MAX
 * @brief Максимальное значение для указателя на тип `vi_ptr_t`.
 *
 * Этот макрос определяет максимальное значение для указателя,
 * которое представляет собой наибольший возможный адрес в памяти.
 *
 * Это значение приравнивается к значению `-1`,
 * что эквивалентно максимальному значению для указателя.
 */
#define VI_PTR_T_MAX ((vi_ptr_t)-1)

/**
 * @def VI_PTR_T_SIZE
 * @brief Определение размера указателя.
 *
 * Этот макрос определяет размер указателя в байтах
 * с использованием встроенной макроса `__SIZEOF_POINTER__`.
 *
 * Он позволяет узнать, сколько байт занимает указатель
 * в текущей платформе и компиляторе.
 *
 * Значение макроса зависит от архитектуры системы и может варьироваться:
 * - На 32-битных системах обычно это 4 байта.
 * - На 64-битных системах обычно это 8 байт.
 *
 * Этот макрос полезен для выполнения операций, зависящих от размера указателей,
 * например, при выделении памяти или при манипуляциях с адресами.
 */
#define VI_PTR_T_SIZE __SIZEOF_POINTER__

#endif // VI_PTR_H
