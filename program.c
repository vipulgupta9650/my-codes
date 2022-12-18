#include <stdio.h>
int main()
{
 int a,b,c;
 printf("enter three numbers");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 {
  if (a>c)
  {
    printf("a is largest of all three");

  }
  else if (a==c)
  {
    printf("a and c both are equal and also largest of all");
  }
  else
  {
    printf("c is largest of all three");
  }
  
 }
 else if(b>a)
 {
  if(b>c)
  {
    printf("b is largest of all");
  }
  else if(b==c)
  {
    printf(" b and c both are equal and also largest of all three");
  }
  else
  {
    printf("c is largest of all three");
  } 
 }
 else if(a==b)
 {
  if(a>c)
  {
    printf("a and b both are equal and also largest of all");
  }
  else if(a==c)
  {
    printf("a , b , c all three are equal");
  }
  else
  {
    printf("c is largest of all ");
  }
 }
  return 0;
}