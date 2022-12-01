//to check if a student has passed or failed marks > 30 is pass and marks <=30 is fail
#include <stdio.h>
int main(void) {
    float marks;
    printf("enter marks");
    scanf("%f",&marks);
    marks > 30 ? printf("passed") : printf("failed");


    return 0;
}
