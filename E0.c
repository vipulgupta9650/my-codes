//print all numbers from 1 to 10 except 6
#include <stdio.h>
int main() {
  for(int n=1;n<=10;n++){

    if (n==6){
        continue;
    }
    printf("%d\n",n);
  }

    return 0;
}