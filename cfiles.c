#include <stdio.h>
int main()
{
 char ch;
 printf("enter a character");
 ch = getchar();
 if(ch >=65 && ch<=90)
 {
    printf("entered character is an upper case alphabet");
 }
 else if(ch >=97 && ch <=122)
 {
    printf("entered character is a lower case alphabet");
 }
 else if (ch==48)
 {
    printf("enter character is zero");
 }
 else if (ch >48 && ch<=57)
 {
    printf("entered character is a single digit number");
 }
 else 
 {
    printf("not able to recognise character");
 }


 return 0;
}