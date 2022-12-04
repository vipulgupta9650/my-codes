//print the factorial of a number n
#include <stdio.h>
int main() {
int n;
printf("enter the value of n");
scanf("%d",&n);
int factorial = 1;
for (int i=1;i<=n;i++){

    factorial=factorial*i;
}
printf("%d",factorial);



    return 0;
}
//this is one of the most important question of this topic