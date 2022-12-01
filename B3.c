#include <stdio.h>
int main(void) {
char day;
// m- monday t-tuesday w-wednesday T-thursday f-friday s-saturday S-sunday
printf("enter day");
scanf("%s",&day);
switch(day){
    case 'm' : printf("monday");
    break;
    case 't': printf("tuesday");
    break;
    case 'w' : printf("wednesday");
    break;
    case 'T' : printf("thursday");
    break;
    case 'f' : printf("friday");
    break;
    case 's' : printf("saturday");
    break;
    case 'S' : printf("sunday");
    break;
    default : printf("not a valid day");
}
// when we write character on place of 1,2 and 3.. in case 1 case 2 case 3 etc.. then it has to be in inverted commas
    return 0;
}