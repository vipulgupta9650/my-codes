// if else statements
#include <stdio.h>
int main(void){
int age;
printf("enter age");
scanf("%d",&age);
if(age > 18){
    printf("adult\n");
    printf("they can vote\n");
    printf("they can drive\n");
}
else {
    printf("not adult\n");
}
//note that there are no invited commas in condition written of if ie if("age>18") is wrong
printf("thank you");
    return 0;
}
//these curly braces are not necessary if we have only one statement in if and else , lets understand this by next code
// if we have to check condition that age is 18 or not in condition of f so we can write age = 18 and age ==18 both but age ==18 is more recommended
