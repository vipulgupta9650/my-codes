//skip odd numbers in printing on screen
#include <stdio.h>
int main() {
    int n;
do{
    printf("enter the value of n");
scanf("%d",&n);
if(n%2!=0){
    continue;}
printf("%d\n",n);

}while(n<=20);
printf("thank you");


    return 0;
}