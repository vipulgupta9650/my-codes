//print the sum of first n natural numbers and those numbers in reverse order using only one for loop and never using while and do while loop
#include <stdio.h>
int main() {
int n;
printf("enter n");
scanf("%d",&n);
int sum = 0;
for ( int i =1 , j=n; i<=n && j>=1;i++,j--){
printf("%d\n",j);
sum = sum +j;


}
printf("your sum is %d", sum);

    return 0;
}