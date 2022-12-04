//print the sum of first n natural numbers using for loop
//this is a very important question
#include <stdio.h>
int main() 
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);

    int sum=0;
   
    for (int i=1;i<=n;i++)
    {
         sum = sum+i;
        
    }
    printf("your sum is %d",sum);
    return 0;
}