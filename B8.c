/*will this code
int x = 2;
if (x=1){
    printf("x is equal to 1");}
    else {
        printf("x is not equal to 1");
    }

    option A :
    give error

    option B : print x is equal to 1

    option c : print x is not equal to 1
*/
#include <stdio.h>
int main(void){
int x = 2;
if (x=1){
    printf("x is equal to 1");}
    else {
        printf("x is not equal to 1");
    }
    return 0;
}
/*
so isme seekhne kaa yeh thaa ki agar if ki condition mai 
only ek equal to lagana ho to double equal to lagane padenge nhi to woh x ko 2 ki jagah 1 se replace kar dega jaise iss question mai hua hai*/