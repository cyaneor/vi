/**
 * @file array_size.h
 * @brief Заголовочный файл для получения размера статического массива.
 *
 * Этот файл содержит реализацию функции и макроса
 * для вычисления количества элементов в статическом массиве.
 *
 * В зависимости от того, компилируется ли код с использованием C++ или C,
 * предоставляется либо шаблонная функция, либо макрос.
 *
 * - В C++ используется шаблонная функция `array_size`,
 *   которая принимает массив как параметр и возвращает
 *   его размер как константное выражение.
 *
 * - В C используется макрос `vi_array_size`,
 *   который вычисляет размер массива путем деления
 *   общего размера массива на размер его первого элемента.
 *
 * @note Используйте эти инструменты только с статическими массивами.
 *       Не применяйте их к указателям, так как это приведет
 *       к некорректному вычислению размера.
 */

#ifndef VI_ARRAY_SIZE_H
#define VI_ARRAY_SIZE_H

#ifdef __cplusplus
#    include "size.h"
/**
 * @brief Функция для получения размера массива.
 *
 * Эта функция возвращает количество элементов в статическом массиве.
 * Она использует размер массива, переданный как параметр,
 * и возвращает его как константное выражение.
 *
 * @tparam T Тип элементов массива.
 * @tparam N Размер массива.
 * @param arr Массив, размер которого нужно получить.
 * @return Размер массива.
 *
 * @code
 * int arr[5];
 * constexpr auto size = vi_array_size(arr); // size == 5
 * @endcode
 */
template <typename T, vi_usize_t N>
inline constexpr auto
vi_array_size(const T (&)[N])
{
    return N;
}
#else
/**
 * @def vi_array_size
 * @brief Вычисляет количество элементов в массиве.
 *
 * Этот макрос позволяет получить количество элементов в статическом массиве
 * путем деления общего размера массива на размер его первого элемента.
 *
 * @param x Массив, для которого нужно вычислить размер.
 * @return Количество элементов в массиве.
 *
 * @note Используйте этот макрос только с статическими массивами.
 *       Не применяйте его к указателям, так как это приведет
 *       к некорректному вычислению размера.
 */
#    define vi_array_size(x) (sizeof(x) / sizeof(x[0]))
#endif // __cplusplus

#endif // VI_ARRAY_SIZE_H
