//write a program to check if a number is prime or not
#include <stdio.h>
int main() {
    int n;
printf("enter a number n");
scanf("%d",&n);
for(int i=2;i<n;i++){
    if(n%i==0){
        printf("a composite number");
    
    }
    else{
        printf("a prime number");
    }
}
prinf("thank you");

    return 0;

}

//why this program is wrong
