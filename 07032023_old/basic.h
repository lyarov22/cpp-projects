// Начнем с директив препроцессора. ADD_H – это произвольное уникальное имя (обычно используется имя заголовочного файла)
#ifndef BASIC_H
#define BASIC_H

// А это уже содержимое заголовочного файла
float add(float a, float b);
float sub(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

// Заканчиваем директивой препроцессора
#endif