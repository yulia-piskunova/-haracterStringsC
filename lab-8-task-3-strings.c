#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    int i, id, min, count, len;

    printf("\n");
    printf("Enter string: ");
    gets(s);
    len = strlen(s);
    min = strlen(s);
    id = 0;
    count = 0;

    for (i = 0 ; i < len ; i++)
        if (s[i] != ' ') count += 1;
        else {
            if (count < min) {
                min = count;
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
        putchar(s[i]);
    printf("\n");
}