/**
 * @file compiler_bit_depth.h
 * @brief Определение макроса для определения разрядности компилятора.
 *
 * Этот файл предоставляет макрос `VI_COMPILER_BIT_DEPTH`,
 * который задает разрядность компилятора (32 или 64 бита)
 * на основе целевой платформы и архитектуры.
 *
 * Макрос используется для условной компиляции в зависимости от разрядности системы,
 * что позволяет поддерживать архитектурно-зависимые функциональности.
 *
 * Поддерживаемые платформы и архитектуры:
 * - Windows (32- и 64-битная)
 * - Apple (x86 и x86-64)
 * - Linux (x86 и x86-64, AMD64)
 *
 * @note На неподдерживаемых платформах выводится
 *       предупреждение о неизвестной разрядности.
 */

#ifndef VI_COMPILER_BIT_DEPTH_H
#define VI_COMPILER_BIT_DEPTH_H

#if defined(_WIN64)
/**
 * @def VI_COMPILER_BIT_DEPTH
 * @brief Макрос, определяющий разрядность компилятора
 *        как 64-битную на 64-битных системах Windows.
 */
#    define VI_COMPILER_BIT_DEPTH 64
#elif defined(_WIN32)
/**
 * @def VI_COMPILER_BIT_DEPTH
 * @brief Макрос, определяющий разрядность компилятора
 *        как 32-битную на 32-битных системах Windows.
 */
#    define VI_COMPILER_BIT_DEPTH 32
#elif defined(__APPLE__)
#    include <TargetConditionals.h>
#    if TARGET_CPU_X86_64
/**
 * @def VI_COMPILER_BIT_DEPTH
 * @brief Макрос, определяющий разрядность компилятора
 *        как 64-битную на устройствах Apple с архитектурой x86-64.
 */
#        define VI_COMPILER_BIT_DEPTH 64
#    elif TARGET_CPU_X86
/**
 * @def VI_COMPILER_BIT_DEPTH
 * @brief Макрос, определяющий разрядность компилятора
 *        как 32-битную на устройствах Apple с архитектурой x86.
 */
#        define VI_COMPILER_BIT_DEPTH 32
#    endif
#elif defined(__linux__)
#    if defined(__x86_64__) || defined(__x86_64) || defined(__amd64__) || defined(__amd64)
/**
 * @def VI_COMPILER_BIT_DEPTH
 * @brief Макрос, определяющий разрядность компилятора
 *        как 64-битную на системах Linux с архитектурой x86-64 или AMD64.
 */
#        define VI_COMPILER_BIT_DEPTH 64
#    elif defined(__i386__) || defined(__i386)
/**
 * @def VI_COMPILER_BIT_DEPTH
 * @brief Макрос, определяющий разрядность компилятора
 *        как 32-битную на системах Linux с архитектурой x86.
 */
#        define VI_COMPILER_BIT_DEPTH 32
#    endif
#else
#    pragma message("Warning: Unknown compiler bit depth")
#endif

#endif // VI_COMPILER_BIT_DEPTH_H
