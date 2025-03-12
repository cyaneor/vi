/**
 * @file static_assert.h
 * @brief Определение макроса для выполнения компилируемых проверок условий.
 *
 * Этот файл предоставляет макрос `vi_static_assert`,
 * позволяющий выполнять статические проверки условий на этапе компиляции.
 *
 * Макрос используется для генерации ошибок компиляции,
 * если заданное логическое выражение `expr` оказывается ложным,
 * что позволяет выявлять потенциальные ошибки на ранних этапах разработки.
 *
 * @note Файл полезен при создании кода, требующего строгих проверок предположений
 *       о размерах данных, совместимости типов или других компилируемых условий.
 */

#ifndef VI_STATIC_ASSERT_H
#define VI_STATIC_ASSERT_H

/**
 * @def vi_static_assert
 * @brief Компилируемая проверка условия во время компиляции.
 *
 * Этот макрос реализует статическое утверждение,
 * проверяя условие `expr` во время компиляции.
 *
 * Если выражение `expr` ложно,
 * компилятор выдаёт сообщение об ошибке,
 * используя текст `msg` для описания причины.
 *
 * @param expr Логическое выражение, которое должно быть истинным.
 * @param msg Сообщение об ошибке, выводимое компилятором, если `expr` ложно.
 *
 * @note Макрос полезен для выявления ошибок на этапе компиляции,
 *       предотвращая выполнение кода с потенциально неверными допущениями.
 *
 * Пример использования:
 * @code
 * vi_static_assert(sizeof(int) == 4, "Размер типа int должен быть 4 байта");
 * @endcode
 */
#ifdef __cplusplus
#    define vi_static_assert(expr, msg) static_assert(expr, msg)
#else
#    define vi_static_assert(expr, msg) _Static_assert(expr, msg)
#endif

#endif // VI_STATIC_ASSERT_H
