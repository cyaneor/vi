/**
 * @file reinterpret_cast.h
 * @brief Определение макроса для безопасного приведения типов.
 *
 * Этот файл содержит макрос `vi_reinterpret_cast`, который позволяет
 * безопасно выполнять приведение типов в зависимости от того,
 * компилируется ли код с использованием C++ или C.
 */

#ifndef VI_REINTERPRET_CAST_H
#define VI_REINTERPRET_CAST_H

#ifdef __cplusplus
/**
 * @brief Приведение типов в C++.
 *
 * Использует `reinterpret_cast` для приведения типов.
 *
 * @param T Тип, к которому нужно привести значение.
 * @param V Значение, которое нужно привести.
 * @return Приведенное значение типа T.
 */
#    define vi_reinterpret_cast(T, V) reinterpret_cast<T>(V)
#else
/**
 * @brief Приведение типов в C.
 *
 * Использует стандартное приведение типов для C.
 *
 * @param T Тип, к которому нужно привести значение.
 * @param V Значение, которое нужно привести.
 * @return Приведенное значение типа T.
 */
#    define vi_reinterpret_cast(T, V) ((T)V)
#endif // __cplusplus

#endif // VI_REINTERPRET_CAST_H