//program to find if a character is upper case or not
#include <stdio.h>
int main() {
char character;
printf("enter character");
scanf("%c",&character);
if (character >= 'a' && character <='z'){
    printf("a lower case letter");
}
else if (character >= 'A' && character <= 'Z'){

    printf("an upper case letter");
}
else {
    printf("not an english number");
}
    return 0;
}