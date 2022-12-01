//to check number is positive or negative and even or odd
#include <stdio.h>
int main() {
int number;
printf("enter number");
scanf("%d",&number);
if(number >= 0){
    printf("positive\n");
    if (number % 2 ==0){
        printf("even\n");
    }
    else {printf("odd\n");
    }
}
else {printf("negative");
}


    return 0;
}