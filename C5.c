#include <stdio.h>
int main(void) 
{
    //increment operator
    //++i i++
    int i=1;
    printf("%d\n",i++);// use then increase
    printf("%d\n",i);

    int j=1;
    printf("%d\n",++j);//increase then use
    printf("%d\n",j);

    int k=10;
    printf("%d",k--);//use then decrease
    printf("%d",k);

int m=10;
printf("%d",--m);
printf("%d",m);
    return 0;
}
//i++ (pre increment)
//++i (post increment
//similarly i-- (pre decrement)
//--i (post decrement)