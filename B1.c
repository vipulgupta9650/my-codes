//switch statements
#include <stdio.h>
int main(void){
int day;
printf("enter day");
scanf("%d",&day);
// 1-monday 2-tuesday 3-wednesday 4-thursday 5-friday 6-saturaday 7-sunday
switch (day) {
case 1: printf("monday");
break;
case 2: printf("tuesday");
break;
case 3: printf("wednesday");
break;
case 4: printf("thursday");
break;
case 5: printf("friday");
break;
case 6: printf("saturday");
break;
case 7 : printf("sunday");
break;
default : printf("not a valid day");



}

    return 0;
}