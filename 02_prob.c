#include<stdio.h>
void main(){
float income;
printf("Enter your income:\n");
scanf("%f",&income);
if(income>=250000 && income<=500000){
    printf("You have to pay 5 percent tax");
}
else if(income >=500000 && income<=1000000){
    printf("You have to pay 20 percent tax");
}
else if (income>=1000000){
    printf("You have to pay 30 percent tax");
}
else {
    printf("No Tax for you");
}
}