/**
 * @file ascii_map.h
 * @brief Заголовочный файл, содержащий определения символов ASCII.
 *
 * Этот файл определяет макросы для всех символов ASCII от 0 до 127,
 * включая управляющие символы, пробелы, цифры, буквы и специальные символы.
 * Каждый макрос представляет собой символ, соответствующий его коду ASCII,
 * что позволяет легко использовать их в коде.
 */

#ifndef VI_ASCII_MAP_H
#define VI_ASCII_MAP_H

/**
 * @def VI_ASCII_MAP_NULL_TERMINATOR
 * @brief Символ завершения строки (NULL).
 */
#define VI_ASCII_MAP_NULL_TERMINATOR '\0'

/**
 * @def VI_ASCII_MAP_CONTROL_1
 * @brief Управляющий символ 1 (ASCII 0x01).
 */
#define VI_ASCII_MAP_CONTROL_1 '\x01'

/**
 * @def VI_ASCII_MAP_CONTROL_2
 * @brief Управляющий символ 2 (ASCII 0x02).
 */
#define VI_ASCII_MAP_CONTROL_2 '\x02'

/**
 * @def VI_ASCII_MAP_CONTROL_3
 * @brief Управляющий символ 3 (ASCII 0x03).
 */
#define VI_ASCII_MAP_CONTROL_3 '\x03'

/**
 * @def VI_ASCII_MAP_CONTROL_4
 * @brief Управляющий символ 4 (ASCII 0x04).
 */
#define VI_ASCII_MAP_CONTROL_4 '\x04'

/**
 * @def VI_ASCII_MAP_CONTROL_5
 * @brief Управляющий символ 5 (ASCII 0x05).
 */
#define VI_ASCII_MAP_CONTROL_5 '\x05'

/**
 * @def VI_ASCII_MAP_CONTROL_6
 * @brief Управляющий символ 6 (ASCII 0x06).
 */
#define VI_ASCII_MAP_CONTROL_6 '\x06'

/**
 * @def VI_ASCII_MAP_BELL
 * @brief Символ "звонок" (ASCII 0x07).
 */
#define VI_ASCII_MAP_BELL '\x07'

/**
 * @def VI_ASCII_MAP_BACKSPACE
 * @brief Символ "удаление" (ASCII 0x08).
 */
#define VI_ASCII_MAP_BACKSPACE '\x08'

/**
 * @def VI_ASCII_MAP_TAB
 * @brief Символ табуляции (ASCII 0x09).
 */
#define VI_ASCII_MAP_TAB '\t'

/**
 * @def VI_ASCII_MAP_NEWLINE
 * @brief Символ новой строки (ASCII 0x0A).
 */
#define VI_ASCII_MAP_NEWLINE '\n'

/**
 * @def VI_ASCII_MAP_VERTICAL_TAB
 * @brief Символ вертикальной табуляции (ASCII 0x0B).
 */
#define VI_ASCII_MAP_VERTICAL_TAB '\x0B'

/**
 * @def VI_ASCII_MAP_FORM_FEED
 * @brief Символ перевода страницы (ASCII 0x0C).
 */
#define VI_ASCII_MAP_FORM_FEED '\x0C'

/**
 * @def VI_ASCII_MAP_CARRIAGE_RETURN
 * @brief Символ возврата каретки (ASCII 0x0D).
 */
#define VI_ASCII_MAP_CARRIAGE_RETURN '\r'

/**
 * @def VI_ASCII_MAP_SHIFT_OUT
 * @brief Символ "выход из сдвига" (ASCII 0x0E).
 */
#define VI_ASCII_MAP_SHIFT_OUT '\x0E'

/**
 * @def VI_ASCII_MAP_SHIFT_IN
 * @brief Символ "вход в сдвиг" (ASCII 0x0F).
 */
#define VI_ASCII_MAP_SHIFT_IN '\x0F'

/**
 * @def VI_ASCII_MAP_DATA_LINK_ESCAPE
 * @brief Символ "ссылка на данные" (ASCII 0x10).
 */
#define VI_ASCII_MAP_DATA_LINK_ESCAPE '\x10'

/**
 * @def VI_ASCII_MAP_DEVICE_CONTROL_1
 * @brief Управляющий символ 1 для устройства (ASCII 0x11).
 */
#define VI_ASCII_MAP_DEVICE_CONTROL_1 '\x11'

/**
 * @def VI_ASCII_MAP_DEVICE_CONTROL_2
 * @brief Управляющий символ 2 для устройства (ASCII 0x12).
 */
#define VI_ASCII_MAP_DEVICE_CONTROL_2 '\x12'

/**
 * @def VI_ASCII_MAP_DEVICE_CONTROL_3
 * @brief Управляющий символ 3 для устройства (ASCII 0x13).
 */
#define VI_ASCII_MAP_DEVICE_CONTROL_3 '\x13'

/**
 * @def VI_ASCII_MAP_DEVICE_CONTROL_4
 * @brief Управляющий символ 4 для устройства (ASCII 0x14).
 */
#define VI_ASCII_MAP_DEVICE_CONTROL_4 '\x14'

/**
 * @def VI_ASCII_MAP_NEGATIVE_ACKNOWLEDGE
 * @brief Символ отрицательного подтверждения (ASCII 0x15).
 */
#define VI_ASCII_MAP_NEGATIVE_ACKNOWLEDGE '\x15'

/**
 * @def VI_ASCII_MAP_SYNCHRONOUS_IDLE
 * @brief Символ синхронного простоя (ASCII 0x16).
 */
#define VI_ASCII_MAP_SYNCHRONOUS_IDLE '\x16'

/**
 * @def VI_ASCII_MAP_END_OF_TRANSMISSION_BLOCK
 * @brief Символ конца блока передачи (ASCII 0x17).
 */
#define VI_ASCII_MAP_END_OF_TRANSMISSION_BLOCK '\x17'

/**
 * @def VI_ASCII_MAP_CANCEL
 * @brief Символ отмены (ASCII 0x18).
 */
#define VI_ASCII_MAP_CANCEL '\x18'

/**
 * @def VI_ASCII_MAP_END_OF_MEDIUM
 * @brief Символ конца носителя (ASCII 0x19).
 */
#define VI_ASCII_MAP_END_OF_MEDIUM '\x19'

/**
 * @def VI_ASCII_MAP_SUBSTITUTE
 * @brief Символ замены (ASCII 0x1A).
 */
#define VI_ASCII_MAP_SUBSTITUTE '\x1A'

/**
 * @def VI_ASCII_MAP_ESCAPE
 * @brief Символ экранирования (ASCII 0x1B).
 */
#define VI_ASCII_MAP_ESCAPE '\x1B'

/**
 * @def VI_ASCII_MAP_FILE_SEPARATOR
 * @brief Символ разделителя файлов (ASCII 0x1C).
 */
#define VI_ASCII_MAP_FILE_SEPARATOR '\x1C'

/**
 * @def VI_ASCII_MAP_GROUP_SEPARATOR
 * @brief Символ разделителя групп (ASCII 0x1D).
 */
#define VI_ASCII_MAP_GROUP_SEPARATOR '\x1D'

/**
 * @def VI_ASCII_MAP_RECORD_SEPARATOR
 * @brief Символ разделителя записей (ASCII 0x1E).
 */
#define VI_ASCII_MAP_RECORD_SEPARATOR '\x1E'

/**
 * @def VI_ASCII_MAP_UNIT_SEPARATOR
 * @brief Символ разделителя единиц (ASCII 0x1F).
 */
#define VI_ASCII_MAP_UNIT_SEPARATOR '\x1F'

/**
 * @def VI_ASCII_MAP_SPACE
 * @brief Символ пробела (ASCII 0x20).
 */
#define VI_ASCII_MAP_SPACE ' '

/**
 * @def VI_ASCII_MAP_EXCLAMATION_MARK
 * @brief Символ восклицательного знака (ASCII 0x21).
 */
#define VI_ASCII_MAP_EXCLAMATION_MARK '!'

/**
 * @def VI_ASCII_MAP_QUOTE
 * @brief Символ кавычки (ASCII 0x22).
 */
#define VI_ASCII_MAP_QUOTE '\"'

/**
 * @def VI_ASCII_MAP_HASH
 * @brief Символ решетки (ASCII 0x23).
 */
#define VI_ASCII_MAP_HASH '#'

/**
 * @def VI_ASCII_MAP_DOLLAR
 * @brief Символ доллара (ASCII 0x24).
 */
#define VI_ASCII_MAP_DOLLAR '$'

/**
 * @def VI_ASCII_MAP_PERCENT
 * @brief Символ процента (ASCII 0x25).
 */
#define VI_ASCII_MAP_PERCENT '%'

/**
 * @def VI_ASCII_MAP_AMPERSAND
 * @brief Символ амперсанда (ASCII 0x26).
 */
#define VI_ASCII_MAP_AMPERSAND '&'

/**
 * @def VI_ASCII_MAP_SINGLE_QUOTE
 * @brief Символ одинарной кавычки (ASCII 0x27).
 */
#define VI_ASCII_MAP_SINGLE_QUOTE '\''

/**
 * @def VI_ASCII_MAP_LEFT_PARENTHESIS
 * @brief Символ левой скобки (ASCII 0x28).
 */
#define VI_ASCII_MAP_LEFT_PARENTHESIS '('

/**
 * @def VI_ASCII_MAP_RIGHT_PARENTHESIS
 * @brief Символ правой скобки (ASCII 0x29).
 */
#define VI_ASCII_MAP_RIGHT_PARENTHESIS ')'

/**
 * @def VI_ASCII_MAP_ASTERISK
 * @brief Символ звездочки (ASCII 0x2A).
 */
#define VI_ASCII_MAP_ASTERISK '*'

/**
 * @def VI_ASCII_MAP_PLUS
 * @brief Символ плюса (ASCII 0x2B).
 */
#define VI_ASCII_MAP_PLUS '+'

/**
 * @def VI_ASCII_MAP_COMMA
 * @brief Символ запятой (ASCII 0x2C).
 */
#define VI_ASCII_MAP_COMMA ','

/**
 * @def VI_ASCII_MAP_HYPHEN
 * @brief Символ дефиса (ASCII 0x2D).
 */
#define VI_ASCII_MAP_HYPHEN '-'

/**
 * @def VI_ASCII_MAP_PERIOD
 * @brief Символ точки (ASCII 0x2E).
 */
#define VI_ASCII_MAP_PERIOD '.'

/**
 * @def VI_ASCII_MAP_SLASH
 * @brief Символ косой черты (ASCII 0x2F).
 */
#define VI_ASCII_MAP_SLASH '/'

/**
 * @def VI_ASCII_MAP_DIGIT_0
 * @brief Символ цифры 0 (ASCII 0x30).
 */
#define VI_ASCII_MAP_DIGIT_0 '0'

/**
 * @def VI_ASCII_MAP_DIGIT_1
 * @brief Символ цифры 1 (ASCII 0x31).
 */
#define VI_ASCII_MAP_DIGIT_1 '1'

/**
 * @def VI_ASCII_MAP_DIGIT_2
 * @brief Символ цифры 2 (ASCII 0x32).
 */
#define VI_ASCII_MAP_DIGIT_2 '2'

/**
 * @def VI_ASCII_MAP_DIGIT_3
 * @brief Символ цифры 3 (ASCII 0x33).
 */
#define VI_ASCII_MAP_DIGIT_3 '3'

/**
 * @def VI_ASCII_MAP_DIGIT_4
 * @brief Символ цифры 4 (ASCII 0x34).
 */
#define VI_ASCII_MAP_DIGIT_4 '4'

/**
 * @def VI_ASCII_MAP_DIGIT_5
 * @brief Символ цифры 5 (ASCII 0x35).
 */
#define VI_ASCII_MAP_DIGIT_5 '5'

/**
 * @def VI_ASCII_MAP_DIGIT_6
 * @brief Символ цифры 6 (ASCII 0x36).
 */
#define VI_ASCII_MAP_DIGIT_6 '6'

/**
 * @def VI_ASCII_MAP_DIGIT_7
 * @brief Символ цифры 7 (ASCII 0x37).
 */
#define VI_ASCII_MAP_DIGIT_7 '7'

/**
 * @def VI_ASCII_MAP_DIGIT_8
 * @brief Символ цифры 8 (ASCII 0x38).
 */
#define VI_ASCII_MAP_DIGIT_8 '8'

/**
 * @def VI_ASCII_MAP_DIGIT_9
 * @brief Символ цифры 9 (ASCII 0x39).
 */
#define VI_ASCII_MAP_DIGIT_9 '9'

/**
 * @def VI_ASCII_MAP_COLON
 * @brief Символ двоеточия (ASCII 0x3A).
 */
#define VI_ASCII_MAP_COLON ':'

/**
 * @def VI_ASCII_MAP_SEMICOLON
 * @brief Символ точки с запятой (ASCII 0x3B).
 */
#define VI_ASCII_MAP_SEMICOLON ';'

/**
 * @def VI_ASCII_MAP_LESS_THAN
 * @brief Символ меньше (ASCII 0x3C).
 */
#define VI_ASCII_MAP_LESS_THAN '<'

/**
 * @def VI_ASCII_MAP_EQUAL
 * @brief Символ равенства (ASCII 0x3D).
 */
#define VI_ASCII_MAP_EQUAL '='

/**
 * @def VI_ASCII_MAP_GREATER_THAN
 * @brief Символ больше (ASCII 0x3E).
 */
#define VI_ASCII_MAP_GREATER_THAN '>'

/**
 * @def VI_ASCII_MAP_QUESTION_MARK
 * @brief Символ вопросительного знака (ASCII 0x3F).
 */
#define VI_ASCII_MAP_QUESTION_MARK '?'

/**
 * @def VI_ASCII_MAP_AT
 * @brief Символ собачки (ASCII 0x40).
 */
#define VI_ASCII_MAP_AT '@'

/**
 * @def VI_ASCII_MAP_UPPERCASE_A
 * @brief Символ заглавной буквы A (ASCII 0x41).
 */
#define VI_ASCII_MAP_UPPERCASE_A 'A'

/**
 * @def VI_ASCII_MAP_UPPERCASE_B
 * @brief Символ заглавной буквы B (ASCII 0x42).
 */
#define VI_ASCII_MAP_UPPERCASE_B 'B'

/**
 * @def VI_ASCII_MAP_UPPERCASE_C
 * @brief Символ заглавной буквы C (ASCII 0x43).
 */
#define VI_ASCII_MAP_UPPERCASE_C 'C'

/**
 * @def VI_ASCII_MAP_UPPERCASE_D
 * @brief Символ заглавной буквы D (ASCII 0x44).
 */
#define VI_ASCII_MAP_UPPERCASE_D 'D'

/**
 * @def VI_ASCII_MAP_UPPERCASE_E
 * @brief Символ заглавной буквы E (ASCII 0x45).
 */
#define VI_ASCII_MAP_UPPERCASE_E 'E'

/**
 * @def VI_ASCII_MAP_UPPERCASE_F
 * @brief Символ заглавной буквы F (ASCII 0x46).
 */
#define VI_ASCII_MAP_UPPERCASE_F 'F'

/**
 * @def VI_ASCII_MAP_UPPERCASE_G
 * @brief Символ заглавной буквы G (ASCII 0x47).
 */
#define VI_ASCII_MAP_UPPERCASE_G 'G'

/**
 * @def VI_ASCII_MAP_UPPERCASE_H
 * @brief Символ заглавной буквы H (ASCII 0x48).
 */
#define VI_ASCII_MAP_UPPERCASE_H 'H'

/**
 * @def VI_ASCII_MAP_UPPERCASE_I
 * @brief Символ заглавной буквы I (ASCII 0x49).
 */
#define VI_ASCII_MAP_UPPERCASE_I 'I'

/**
 * @def VI_ASCII_MAP_UPPERCASE_J
 * @brief Символ заглавной буквы J (ASCII 0x4A).
 */
#define VI_ASCII_MAP_UPPERCASE_J 'J'

/**
 * @def VI_ASCII_MAP_UPPERCASE_K
 * @brief Символ заглавной буквы K (ASCII 0x4B).
 */
#define VI_ASCII_MAP_UPPERCASE_K 'K'

/**
 * @def VI_ASCII_MAP_UPPERCASE_L
 * @brief Символ заглавной буквы L (ASCII 0x4C).
 */
#define VI_ASCII_MAP_UPPERCASE_L 'L'

/**
 * @def VI_ASCII_MAP_UPPERCASE_M
 * @brief Символ заглавной буквы M (ASCII 0x4D).
 */
#define VI_ASCII_MAP_UPPERCASE_M 'M'

/**
 * @def VI_ASCII_MAP_UPPERCASE_N
 * @brief Символ заглавной буквы N (ASCII 0x4E).
 */
#define VI_ASCII_MAP_UPPERCASE_N 'N'

/**
 * @def VI_ASCII_MAP_UPPERCASE_O
 * @brief Символ заглавной буквы O (ASCII 0x4F).
 */
#define VI_ASCII_MAP_UPPERCASE_O 'O'

/**
 * @def VI_ASCII_MAP_UPPERCASE_P
 * @brief Символ заглавной буквы P (ASCII 0x50).
 */
#define VI_ASCII_MAP_UPPERCASE_P 'P'

/**
 * @def VI_ASCII_MAP_UPPERCASE_Q
 * @brief Символ заглавной буквы Q (ASCII 0x51).
 */
#define VI_ASCII_MAP_UPPERCASE_Q 'Q'

/**
 * @def VI_ASCII_MAP_UPPERCASE_R
 * @brief Символ заглавной буквы R (ASCII 0x52).
 */
#define VI_ASCII_MAP_UPPERCASE_R 'R'

/**
 * @def VI_ASCII_MAP_UPPERCASE_S
 * @brief Символ заглавной буквы S (ASCII 0x53).
 */
#define VI_ASCII_MAP_UPPERCASE_S 'S'

/**
 * @def VI_ASCII_MAP_UPPERCASE_T
 * @brief Символ заглавной буквы T (ASCII 0x54).
 */
#define VI_ASCII_MAP_UPPERCASE_T 'T'

/**
 * @def VI_ASCII_MAP_UPPERCASE_U
 * @brief Символ заглавной буквы U (ASCII 0x55).
 */
#define VI_ASCII_MAP_UPPERCASE_U 'U'

/**
 * @def VI_ASCII_MAP_UPPERCASE_V
 * @brief Символ заглавной буквы V (ASCII 0x56).
 */
#define VI_ASCII_MAP_UPPERCASE_V 'V'

/**
 * @def VI_ASCII_MAP_UPPERCASE_W
 * @brief Символ заглавной буквы W (ASCII 0x57).
 */
#define VI_ASCII_MAP_UPPERCASE_W 'W'

/**
 * @def VI_ASCII_MAP_UPPERCASE_X
 * @brief Символ заглавной буквы X (ASCII 0x58).
 */
#define VI_ASCII_MAP_UPPERCASE_X 'X'

/**
 * @def VI_ASCII_MAP_UPPERCASE_Y
 * @brief Символ заглавной буквы Y (ASCII 0x59).
 */
#define VI_ASCII_MAP_UPPERCASE_Y 'Y'

/**
 * @def VI_ASCII_MAP_UPPERCASE_Z
 * @brief Символ заглавной буквы Z (ASCII 0x5A).
 */
#define VI_ASCII_MAP_UPPERCASE_Z 'Z'

/**
 * @def VI_ASCII_MAP_LEFT_BRACKET
 * @brief Символ левой квадратной скобки (ASCII 0x5B).
 */
#define VI_ASCII_MAP_LEFT_BRACKET '['

/**
 * @def VI_ASCII_MAP_BACKSLASH
 * @brief Символ обратной косой черты (ASCII 0x5C).
 */
#define VI_ASCII_MAP_BACKSLASH '\\'

/**
 * @def VI_ASCII_MAP_RIGHT_BRACKET
 * @brief Символ правой квадратной скобки (ASCII 0x5D).
 */
#define VI_ASCII_MAP_RIGHT_BRACKET ']'

/**
 * @def VI_ASCII_MAP_CARET
 * @brief Символ каретки (ASCII 0x5E).
 */
#define VI_ASCII_MAP_CARET '^'

/**
 * @def VI_ASCII_MAP_UNDERLINE
 * @brief Символ подчеркивания (ASCII 0x5F).
 */
#define VI_ASCII_MAP_UNDERLINE '_'

/**
 * @def VI_ASCII_MAP_GRAVE
 * @brief Символ грависа (ASCII 0x60).
 */
#define VI_ASCII_MAP_GRAVE '`'

/**
 * @def VI_ASCII_MAP_LOWERCASE_A
 * @brief Символ строчной буквы a (ASCII 0x61).
 */
#define VI_ASCII_MAP_LOWERCASE_A 'a'

/**
 * @def VI_ASCII_MAP_LOWERCASE_B
 * @brief Символ строчной буквы b (ASCII 0x62).
 */
#define VI_ASCII_MAP_LOWERCASE_B 'b'

/**
 * @def VI_ASCII_MAP_LOWERCASE_C
 * @brief Символ строчной буквы c (ASCII 0x63).
 */
#define VI_ASCII_MAP_LOWERCASE_C 'c'

/**
 * @def VI_ASCII_MAP_LOWERCASE_D
 * @brief Символ строчной буквы d (ASCII 0x64).
 */
#define VI_ASCII_MAP_LOWERCASE_D 'd'

/**
 * @def VI_ASCII_MAP_LOWERCASE_E
 * @brief Символ строчной буквы e (ASCII 0x65).
 */
#define VI_ASCII_MAP_LOWERCASE_E 'e'

/**
 * @def VI_ASCII_MAP_LOWERCASE_F
 * @brief Символ строчной буквы f (ASCII 0x66).
 */
#define VI_ASCII_MAP_LOWERCASE_F 'f'

/**
 * @def VI_ASCII_MAP_LOWERCASE_G
 * @brief Символ строчной буквы g (ASCII 0x67).
 */
#define VI_ASCII_MAP_LOWERCASE_G 'g'

/**
 * @def VI_ASCII_MAP_LOWERCASE_H
 * @brief Символ строчной буквы h (ASCII 0x68).
 */
#define VI_ASCII_MAP_LOWERCASE_H 'h'

/**
 * @def VI_ASCII_MAP_LOWERCASE_I
 * @brief Символ строчной буквы i (ASCII 0x69).
 */
#define VI_ASCII_MAP_LOWERCASE_I 'i'

/**
 * @def VI_ASCII_MAP_LOWERCASE_J
 * @brief Символ строчной буквы j (ASCII 0x6A).
 */
#define VI_ASCII_MAP_LOWERCASE_J 'j'

/**
 * @def VI_ASCII_MAP_LOWERCASE_K
 * @brief Символ строчной буквы k (ASCII 0x6B).
 */
#define VI_ASCII_MAP_LOWERCASE_K 'k'

/**
 * @def VI_ASCII_MAP_LOWERCASE_L
 * @brief Символ строчной буквы l (ASCII 0x6C).
 */
#define VI_ASCII_MAP_LOWERCASE_L 'l'

/**
 * @def VI_ASCII_MAP_LOWERCASE_M
 * @brief Символ строчной буквы m (ASCII 0x6D).
 */
#define VI_ASCII_MAP_LOWERCASE_M 'm'

/**
 * @def VI_ASCII_MAP_LOWERCASE_N
 * @brief Символ 'n' (нижний регистр).
 *
 * Символ 'n' соответствует коду ASCII 110.
 */
#define VI_ASCII_MAP_LOWERCASE_N 'n'

/**
 * @def VI_ASCII_MAP_LOWERCASE_O
 * @brief Символ 'o' (нижний регистр).
 *
 * Символ 'o' соответствует коду ASCII 111.
 */
#define VI_ASCII_MAP_LOWERCASE_O 'o'

/**
 * @def VI_ASCII_MAP_LOWERCASE_P
 * @brief Символ 'p' (нижний регистр).
 *
 * Символ 'p' соответствует коду ASCII 112.
 */
#define VI_ASCII_MAP_LOWERCASE_P 'p'

/**
 * @def VI_ASCII_MAP_LOWERCASE_Q
 * @brief Символ 'q' (нижний регистр).
 *
 * Символ 'q' соответствует коду ASCII 113.
 */
#define VI_ASCII_MAP_LOWERCASE_Q 'q'

/**
 * @def VI_ASCII_MAP_LOWERCASE_R
 * @brief Символ 'r' (нижний регистр).
 *
 * Символ 'r' соответствует коду ASCII 114.
 */
#define VI_ASCII_MAP_LOWERCASE_R 'r'

/**
 * @def VI_ASCII_MAP_LOWERCASE_S
 * @brief Символ 's' (нижний регистр).
 *
 * Символ 's' соответствует коду ASCII 115.
 */
#define VI_ASCII_MAP_LOWERCASE_S 's'

/**
 * @def VI_ASCII_MAP_LOWERCASE_T
 * @brief Символ 't' (нижний регистр).
 *
 * Символ 't' соответствует коду ASCII 116.
 */
#define VI_ASCII_MAP_LOWERCASE_T 't'

/**
 * @def VI_ASCII_MAP_LOWERCASE_U
 * @brief Символ 'u' (нижний регистр).
 *
 * Символ 'u' соответствует коду ASCII 117.
 */
#define VI_ASCII_MAP_LOWERCASE_U 'u'

/**
 * @def VI_ASCII_MAP_LOWERCASE_V
 * @brief Символ 'v' (нижний регистр).
 *
 * Символ 'v' соответствует коду ASCII 118.
 */
#define VI_ASCII_MAP_LOWERCASE_V 'v'

/**
 * @def VI_ASCII_MAP_LOWERCASE_W
 * @brief Символ 'w' (нижний регистр).
 *
 * Символ 'w' соответствует коду ASCII 119.
 */
#define VI_ASCII_MAP_LOWERCASE_W 'w'

/**
 * @def VI_ASCII_MAP_LOWERCASE_X
 * @brief Символ 'x' (нижний регистр).
 *
 * Символ 'x' соответствует коду ASCII 120.
 */
#define VI_ASCII_MAP_LOWERCASE_X 'x'

/**
 * @def VI_ASCII_MAP_LOWERCASE_Y
 * @brief Символ 'y' (нижний регистр).
 *
 * Символ 'y' соответствует коду ASCII 121.
 */
#define VI_ASCII_MAP_LOWERCASE_Y 'y'

/**
 * @def VI_ASCII_MAP_LOWERCASE_Z
 * @brief Символ 'z' (нижний регистр).
 *
 * Символ 'z' соответствует коду ASCII 122.
 */
#define VI_ASCII_MAP_LOWERCASE_Z 'z'

/**
 * @def VI_ASCII_MAP_LEFT_BRACE
 * @brief Символ '{' (левая фигурная скобка).
 *
 * Символ '{' соответствует коду ASCII 123.
 */
#define VI_ASCII_MAP_LEFT_BRACE '{'

/**
 * @def VI_ASCII_MAP_VERTICAL_BAR
 * @brief Символ '|' (вертикальная черта).
 *
 * Символ '|' соответствует коду ASCII 124.
 */
#define VI_ASCII_MAP_VERTICAL_BAR '|'

/**
 * @def VI_ASCII_MAP_RIGHT_BRACE
 * @brief Символ '}' (правая фигурная скобка).
 */
#define VI_ASCII_MAP_RIGHT_BRACE '}'

/**
 * @def VI_ASCII_MAP_TILDE
 * @brief Символ '~' (тильда).
 */
#define VI_ASCII_MAP_TILDE '~'

/**
 * @def VI_ASCII_MAP_DELETE
 * @brief Символ 'delete' (удаление).
 */
#define VI_ASCII_MAP_DELETE '\x7F'

#endif // VI_ASCII_MAP_H
