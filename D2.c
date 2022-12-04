//print the sum of first n natural numbers using while loop
// this is also important question
#include <stdio.h>
int main() {
int n;
printf("enter n");
scanf("%d",&n);
int i=1;
int sum = 0;
while(i<=n){
    sum = sum+i;
    i++;
}
printf("your sum is %d",sum);


    return 0;
}