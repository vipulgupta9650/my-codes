//sum of all odd numbers between 5 and 50 both inclusive
#include <stdio.h>
int main() {
    int sum=0;
for(int i>=5;i<=50;i++){

    if(i%2==0){continue;}
    sum=sum+i;
}
printf("your sum is %d",sum);

    return 0;
}
//why this code is wrong answer is below
//i ko jab for loop mai use kare to i = something se shuru hota hai naa ki i> bagera se