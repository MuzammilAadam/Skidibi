#include<stdio.h>
void main(){
int a;
printf("Enter number:");
scanf("%d",&a);

switch(a){
    case 1:
    printf("You entered 1");
    break;
    case 2:
    printf("You entered 2");
    break;
    case 3:
    printf("You entered");
    default :
    printf("nothing matched");
}
}