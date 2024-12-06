#include <stdio.h>


int main() {

    char word[] = "Holberton";
    int length;
    
    length = sizeof(word) / sizeof(char);

    for (int i = 0; i < length - 1; i++) {
        printf("%c\n", word[i]);
    }

    return 0;
}