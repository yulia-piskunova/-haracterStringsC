#include<stdio.h>
#include<string.h>

int main() {
    char s[100]; // инициализация переменных
    int i, id, min, count, len;

    printf("Enter string: "); // вывод текста
    gets(s); // ввод строки
    len = strlen(s); // определение длины строки
    min = strlen(s); // присваивание первоначального значения минимальной длины слова
    id = 0;
    count = 0;

    for (i = 0 ; i < len ; i++) // цикл по каждому элементу(символу) строки
        if (s[i] != ' ') count += 1; // проверка на пробел
        else {
            if (count < min) {
                min = count; // присваивание нового значения минимальной длины слова
                id = i - count;
            }
            count = 0;
        }

    if (count < min) {
        min = count;
        id = i - count;
    }
    min += id;

    for (i = id ; i < min ; i++)
        putchar(s[i]);  // вывод самого короткого слова
    printf("\n");
}