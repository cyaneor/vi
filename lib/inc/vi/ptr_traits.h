/**
 * @file ptr_util.h
 * @brief Заголовочный файл для работы с указателями и их преобразованиями.
 *
 * Этот файл содержит макросы для безопасной и удобной работы с указателями,
 * включая их преобразование, арифметику, проверку выравнивания и перекрытия
 * диапазонов указателей. Макросы помогают избежать распространенных ошибок,
 * связанных с манипуляциями с адресами в памяти.
 *
 * Основные макросы:
 * - vi_addr_to_ptr: Преобразует адрес в указатель заданного типа.
 * - vi_ptr_to: Преобразует указатель в указатель на другой тип.
 * - vi_ptr_to_addr: Преобразует указатель в адрес.
 * - vi_ptr_to_diff: Преобразует указатель в тип vi_ptrdiff_t.
 * - vi_ptr_diff: Вычисляет разницу между двумя указателями.
 * - vi_ptr_add_offset: Прибавляет смещение к указателю.
 * - vi_ptr_sub_offset: Вычитает смещение из указателя.
 * - vi_ptr_is_aligned: Проверяет выравнивание указателя по заданному значению.
 * - vi_ptr_range_is_aligned: Проверяет выравнивание двух указателей.
 * - vi_ptr_range_overlap_check: Проверяет перекрытие двух диапазонов указателей.
 *
 * @warning Пользователи должны быть осторожны при использовании макросов,
 *          так как неверные преобразования или операции с неинициализированными
 *          указателями могут привести к неопределенному поведению.
 */

#ifndef VI_PTR_TRAITS_H
#define VI_PTR_TRAITS_H

#include "addr.h"
#include "nullptr.h"
#include "ptrdiff.h"
#include "static_cast.h"
#include "numeric_traits.h"
#include "interval_traits.h"
#include "reinterpret_cast.h"

/**
 * @def vi_addr_to_ptr
 * @brief Преобразует адрес в указатель заданного типа.
 *
 * Этот макрос принимает адрес и возвращает указатель на значение
 * заданного типа. Он позволяет безопасно преобразовывать адреса
 * в соответствующие указатели.
 *
 * @param T Тип, к которому следует привести адрес.
 * @param addr Адрес, который необходимо преобразовать в указатель.
 *
 * @return Указатель на значение типа `T`,
 *         соответствующее указанному адресу.
 */
#define vi_addr_to_ptr(T, addr) vi_reinterpret_cast(T *, addr)

/**
 * @def vi_ptr_cast
 * @brief Преобразует указатель одного типа в указатель другого типа.
 *
 * Этот макрос выполняет преобразование указателя одного типа в указатель
 * на другой тип. Он полезен при необходимости привести указатель к
 * другому типу, например, для работы с типами в низкоуровневых операциях
 * или для реализации обобщенных алгоритмов.
 *
 * @param T Тип, к которому следует привести указатель.
 * @param ptr Указатель, который необходимо преобразовать.
 *
 * @return Указатель на значение типа `T`,
 *         соответствующее исходному указателю.
 */
#define vi_ptr_cast(T, ptr) vi_static_cast(T *, ptr)

/**
 * @def vi_ptr_to_addr
 * @brief Преобразует указатель в адрес.
 *
 * Этот макрос принимает указатель и возвращает его значение
 * в виде целого числа (адреса) типа `vi_uaddr_t`.
 * Он позволяет легко работать с адресами в виде целых чисел.
 *
 * @param ptr Указатель, который необходимо преобразовать в адрес.
 *
 * @return Адрес, соответствующий указанному указателю в виде
 *         значения типа `vi_uaddr_t`.
 */
#define vi_ptr_to_addr(ptr) vi_reinterpret_cast(vi_uaddr_t, ptr)

/**
 * @def vi_ptr_to_diff
 * @brief Преобразует указатель в тип vi_ptrdiff_t.
 *
 * Этот макрос преобразует переданный указатель в тип vi_ptrdiff_t,
 * который обычно используется для хранения разницы между адресами памяти.
 *
 * @param ptr Указатель, который необходимо преобразовать.
 * @return Значение типа vi_ptrdiff_t, представляющее преобразованный указатель.
 */
#define vi_ptr_to_diff(ptr) vi_static_cast(vi_ptrdiff_t, ptr)

/**
 * @def vi_ptr_diff
 * @brief Вычисляет разницу между двумя указателями.
 *
 * Этот макрос принимает два указателя
 * и возвращает разницу между их адресами в виде целого числа.
 * Он позволяет определить, сколько байтов разделяет два указателя.
 *
 * @param ptr1 Первый указатель.
 * @param ptr2 Второй указатель.
 *
 * @return Разница между адресами `ptr1` и `ptr2` в байтах.
 */
#define vi_ptr_diff(ptr1, ptr2) (vi_ptr_to_diff(ptr1) - vi_ptr_to_diff(ptr2))

/**
 * @def vi_addr_diff
 * @brief Вычисляет разницу между двумя указателями в виде адресов.
 *
 * Этот макрос вычисляет разницу между двумя указателями, преобразуя
 * их сначала в адреса с помощью макроса `vi_ptr_to_address`, а затем
 * вычитая один адрес из другого. Это может быть полезно для вычисления
 * смещения между двумя указателями.
 *
 * @param ptr1 Первый указатель, разницу с которым нужно вычислить.
 * @param ptr2 Второй указатель, от которого вычитается первый указатель.
 *
 * @return Разницу между адресами, соответствующими указателям `ptr1` и `ptr2`,
 *         в виде целого числа типа `vi_intptr_t`, которое представляет собой
 *         разницу между двумя адресами.
 */
#define vi_addr_diff(ptr1, ptr2) (vi_ptr_to_addr(ptr1) - vi_ptr_to_addr(ptr2))

/**
 * @def vi_ptr_add_offset_unsafe
 * @brief Прибавляет смещение к указателю без проверки на NULL.
 *
 * Этот макрос выполняет арифметику указателей, прибавляя целочисленное смещение
 * в байтах к адресу указателя, и возвращает новый указатель. Тип указателя задается
 * параметром `T`. Используется для операций с указателями, но не выполняет проверку на NULL.
 *
 * @param T Тип данных, на которые указывает указатель `ptr`.
 * @param ptr Указатель, к которому будет добавлено смещение.
 * @param offset Смещение в байтах, которое будет добавлено к указателю.
 *
 * @return Новый указатель, полученный после прибавления смещения к адресу указателя `ptr`.
 *         Используется без предварительной проверки на NULL, что может привести к ошибкам.
 */
#define vi_ptr_add_offset_unsafe(T, ptr, offset) vi_addr_to_ptr(T, (vi_ptr_to_addr(ptr) + offset))

/**
 * @def vi_ptr_add_offset
 * @brief Прибавляет смещение к указателю с проверкой на NULL.
 *
 * Этот макрос проверяет, является ли указатель `ptr` ненулевым, и если это так,
 * прибавляет указанное смещение в байтах к адресу указателя. Тип указателя задается
 * параметром `T`. В случае, если указатель равен NULL, возвращает NULL, что предотвращает
 * доступ к памяти по нулевому указателю.
 *
 * @param T Тип данных, на которые указывает указатель `ptr`.
 * @param ptr Указатель, к которому будет добавлено смещение.
 * @param offset Смещение в байтах, которое будет добавлено к указателю.
 *
 * @return Новый указатель, полученный путем прибавления смещения к адресу указателя `ptr`.
 *         Если указатель `ptr` равен NULL, возвращается NULL.
 */
#define vi_ptr_add_offset(T, ptr, offset) (ptr ? vi_ptr_add_offset_unsafe(T, ptr, offset) : nullptr)
/**
 * @def vi_ptr_sub_offset_unsafe
 * @brief Вычитает смещение из указателя без проверки на NULL.
 *
 * Этот макрос выполняет арифметику указателей, вычитая целочисленное смещение
 * в байтах из адреса указателя и возвращает новый указатель. Тип указателя задается
 * параметром `T`. Используется для операций с указателями, но не выполняет проверку на NULL.
 *
 * @param T Тип данных, на которые указывает указатель `ptr`.
 * @param ptr Указатель, из которого будет вычитаться смещение.
 * @param offset Смещение в байтах, которое будет вычтено из указателя.
 *
 * @return Новый указатель, полученный после вычитания смещения из адреса указателя `ptr`.
 *         Используется без предварительной проверки на NULL, что может привести к ошибкам.
 */
#define vi_ptr_sub_offset_unsafe(T, ptr, offset) vi_addr_to_ptr(T, (vi_ptr_to_addr(ptr) - offset))

/**
 * @def vi_ptr_sub_offset
 * @brief Вычитает смещение из указателя с проверкой на NULL.
 *
 * Этот макрос проверяет, является ли указатель `ptr` ненулевым, и если это так,
 * вычитает указанное смещение в байтах из адреса указателя. Тип указателя задается
 * параметром `T`. В случае, если указатель равен NULL, возвращает NULL, что предотвращает
 * доступ к памяти по нулевому указателю.
 *
 * @param T Тип данных, на которые указывает указатель `ptr`.
 * @param ptr Указатель, из которого будет вычитаться смещение.
 * @param offset Смещение в байтах, которое будет вычтено из указателя.
 *
 * @return Новый указатель, полученный путем вычитания смещения из адреса указателя `ptr`.
 *         Если указатель `ptr` равен NULL, возвращается NULL.
 */
#define vi_ptr_sub_offset(T, ptr, offset) (ptr ? vi_ptr_sub_offset_unsafe(T, ptr, offset) : nullptr)

/**
 * @def vi_ptr_is_valid_range
 * @brief Проверяет, является ли указатель действительным в пределах заданного интервала.
 *
 * Этот макрос проверяет два условия:
 * 1. Указатель `begin` не является NULL.
 * 2. Интервал, определяемый значениями `begin` и `end`, является валидным,
 *    что проверяется с помощью макроса `vi_interval_is_valid_closed`.
 *
 * Таким образом, данный макрос используется для проверки, что указатель
 * не равен NULL и что интервал, в который он попадает, является валидным.
 *
 * @param begin Начало интервала.
 * @param end Конец интервала.
 *
 * @return Возвращает значение выражения `begin && vi_interval_is_valid_closed(begin, end)`,
 *         что истинно, если указатель `begin` не равен NULL и интервал
 *         с замкнутыми границами валиден.
 *
 * @see vi_interval_is_valid_closed
 */
#define vi_ptr_is_valid_range(begin, end) (begin && vi_interval_is_valid_closed(begin, end))

/**
 * @def vi_ptr_is_valid_ranges
 * @brief Проверяет, что два диапазона указателей являются замкнутыми.
 *
 * Этот макрос использует два диапазона указателей и проверяет,
 * что оба диапазона являются замкнутыми.
 *
 * Это достигается путем проверки того, что оба диапазона являются действительными
 * замкнутыми диапазонами, с помощью макроса `vi_ptr_is_valid_range`.
 *
 * Каждый из диапазонов должен быть замкнутым, что означает,
 * что указатели не равны нулю и что указатель `begin` не больше указателя `end`.
 *
 * @param r1_begin Указатель на начало первого диапазона.
 * @param r1_end Указатель на конец первого диапазона.
 * @param r2_begin Указатель на начало второго диапазона.
 * @param r2_end Указатель на конец второго диапазона.
 *
 * @return Возвращает 1 (истина), если оба диапазона являются замкнутыми
 *         (проверяются с помощью макроса `vi_ptr_is_valid_closed_range`), иначе 0 (ложь).
 */
#define vi_ptr_is_valid_ranges(r1_begin, r1_end, r2_begin, r2_end)                                 \
    (vi_ptr_is_valid_range(r1_begin, r1_end) && vi_ptr_is_valid_range(r2_begin, r2_end))

/**
 * @def vi_ptr_has_range
 * @brief Проверяет, находится ли указатель в пределах заданного интервала.
 *
 * Этот макрос проверяет, находится ли значение указателя `ptr`
 * в пределах интервала, определяемого значениями `begin` и `end`.
 *
 * Для выполнения проверки используется макрос `vi_interval_has_closed`,
 * который проверяет, что указатель лежит внутри интервала
 * с замкнутыми границами (включая обе границы).
 *
 * @param begin Начало интервала.
 * @param end Конец интервала.
 * @param ptr Указатель, значение которого проверяется на принадлежность интервалу.
 *
 * @return Возвращает значение выражения `vi_interval_has_closed(begin, end, ptr)`,
 *         что истинно, если указатель `ptr` лежит в интервале [begin, end], включая границы.
 *
 * @see vi_interval_has_closed
 */
#define vi_ptr_has_range(begin, end, ptr) vi_interval_has_closed(begin, end, ptr)

/**
 * @def vi_ptr_is_aligned
 * @brief Проверяет, выровнен ли указатель по заданному выравниванию.
 *
 * Этот макрос принимает указатель и значение выравнивания,
 * а затем проверяет, выровнен ли адрес, на который указывает
 * указатель, по указанному значению выравнивания.
 *
 * @param ptr Указатель, адрес которого необходимо проверить.
 * @param align Значение выравнивания, с которым нужно сравнить адрес.
 *
 * @return `true`, если адрес, на который указывает `ptr`,
 *         выровнен по `align`; `false` в противном случае.
 *
 * @note Делитель (выравнивание) не должен быть равен нулю,
 *       так как это приведет к неопределенному поведению.
 */
#define vi_ptr_is_aligned(ptr, align) vi_numeric_has_zero_remainder(vi_ptr_to_addr(ptr), align)

/**
 * @def vi_ptr_range_is_aligned
 * @brief Проверяет, выровнены ли оба указателя по заданному выравниванию.
 *
 * Этот макрос принимает два указателя и значение выравнивания,
 * а затем проверяет, выровнены ли адреса, на которые указывают
 * оба указателя, по указанному значению выравнивания.
 *
 * @param ptr1 Первый указатель, адрес которого необходимо проверить.
 * @param ptr2 Второй указатель, адрес которого необходимо проверить.
 * @param align Значение выравнивания, с которым нужно сравнить адреса.
 *
 * @return `true`, если оба адреса, на которые указывают `ptr1` и
 *         `ptr2`, выровнены по `align`; `false` в противном случае.
 *
 * @note Делитель (выравнивание) не должен быть равен нулю,
 *       так как это приведет к неопределенному поведению.
 */
#define vi_ptr_range_is_aligned(ptr1, ptr2, align)                                                 \
    (vi_ptr_is_aligned(ptr1, align) && vi_ptr_is_aligned(ptr2, align))

/**
 * @def vi_ptr_range_is_aligned_both
 * @brief Проверяет, выровнены ли два диапазона указателей по заданному выравниванию.
 *
 * Этот макрос проверяет, выровнены ли оба диапазона указателей по указанному значению выравнивания.
 * Он использует два других макроса: `vi_ptr_range_is_aligned`, чтобы убедиться,
 * что оба диапазона указателей (`lhs` и `rhs`) выровнены по заданному выравниванию.
 *
 * @param lhs Начало первого диапазона указателей.
 * @param lhs_end Конец первого диапазона указателей.
 * @param rhs Начало второго диапазона указателей.
 * @param rhs_end Конец второго диапазона указателей.
 * @param align Значение выравнивания, с которым нужно сравнить адреса.
 *
 * @return `true`, если оба диапазона указателей выровнены по значению `align`;
 *         `false`, если хотя бы один из диапазонов не выровнен.
 *
 * @note Делитель (выравнивание) не должен быть равен нулю,
 *       так как это приведет к неопределенному поведению.
 */
#define vi_ptr_range_is_aligned_both(lhs, lhs_end, rhs, rhs_end, align)                            \
    (vi_ptr_range_is_aligned(lhs, lhs_end, align) && vi_ptr_range_is_aligned(rhs, rhs_end, align))

/**
 * @def vi_ptr_range_is_not_overlapped
 * @brief Проверяет, не перекрываются ли два диапазона.
 *
 * Этот макрос проверяет, не перекрываются ли два диапазона, определяемых
 * указателями. Он использует два диапазона: первый начинается с указателя
 * `lhs_begin`, а второй — с указателя `rhs_begin` и заканчивается на `rhs_end`.
 * Макрос возвращает истинное значение, если диапазоны не пересекаются, и
 * ложное, если они пересекаются.
 *
 * @param lhs_begin Указатель на начало первого диапазона.
 * @param rhs_begin Указатель на начало второго диапазона.
 * @param rhs_end Указатель на конец второго диапазона.
 *
 * @return Возвращает `true`, если диапазоны не перекрываются, иначе — `false`.
 *
 * @note Диапазоны считаются неперекрывающимися, если первый диапазон полностью
 *       идет до второго, либо второй диапазон не пересекается с первым.
 */
#define vi_ptr_range_is_not_overlapped(lhs_begin, rhs_begin, rhs_end)                              \
    ((lhs_begin <= rhs_begin) || (rhs_end <= lhs_begin))

/**
 * @def vi_ptr_range_is_overlapped
 * @brief Проверяет, перекрываются ли два диапазона.
 *
 * Этот макрос проверяет, перекрываются ли два диапазона, определяемых указателями.
 * Он использует два диапазона: первый начинается с указателя `lhs_begin`,
 * а второй — с указателя `rhs_begin` и заканчивается на `rhs_end`.
 *
 * Макрос возвращает истинное значение, если диапазоны перекрываются, и ложное, если они не
 * перекрываются. Макрос использует другой макрос `vi_ptr_range_is_not_overlapped`,
 * который проверяет, что диапазоны не перекрываются.
 *
 * Если результат этого макроса ложный, значит, диапазоны перекрываются,
 * и макрос `vi_ptr_range_is_overlapped` возвращает `true`.
 *
 * @param lhs_begin Указатель на начало первого диапазона.
 * @param rhs_begin Указатель на начало второго диапазона.
 * @param rhs_end Указатель на конец второго диапазона.
 *
 * @return Возвращает `true`, если диапазоны перекрываются,
 *         иначе — `false`.
 */
#define vi_ptr_range_is_overlapped(lhs_begin, rhs_begin, rhs_end)                                  \
    (!vi_ptr_range_is_not_overlapped(lhs_begin, rhs_begin, rhs_end))

/**
 * @def vi_ptr_align_up
 * @brief Выравнивает указатель на ближайший адрес, соответствующий выравниванию типа.
 *
 * Этот макрос выполняет выравнивание указателя на ближайший адрес,
 * который является кратным размеру типа (type_size). Это делается с использованием
 * арифметики указателей и остаточной операции.
 *
 * @param ptr Указатель, который нужно выровнять.
 * @param begin Начало диапазона, относительно которого будет выполняться выравнивание.
 * @param type_size Размер типа для выравнивания.
 *
 * @return Новый указатель, выровненный по указанному размеру типа.
 */
#define vi_ptr_align_up(ptr, begin, type_size)                                                     \
    (vi_ptr_add_offset(ptr, (type_size - (vi_ptr_diff(ptr, begin) % type_size)) % type_size))

/**
 * @def vi_ptr_align_down
 * @brief Выравнивает указатель вниз к ближайшему адресу, который является кратным размеру типа.
 *
 * Этот макрос выполняет выравнивание указателя вниз, то есть к ближайшему адресу,
 * который является кратным размеру типа. Это делается с использованием арифметики указателей
 * и остаточной операции.
 *
 * @param ptr Указатель, который нужно выровнять.
 * @param begin Начало диапазона, относительно которого будет выполняться выравнивание.
 * @param type_size Размер типа для выравнивания.
 *
 * @return Новый указатель, выровненный вниз по указанному размеру типа.
 */
#define vi_ptr_align_down(ptr, begin, type_size)                                                   \
    (vi_ptr_sub_offset(ptr, (vi_ptr_diff(ptr, begin) % type_size)))

#endif // VI_PTR_TRAITS_H
