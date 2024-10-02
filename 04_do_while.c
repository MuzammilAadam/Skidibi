#include<stdio.h>
void main(){
int n;
printf("Enter eny number:\n");
scanf("%d",&n);
int i=1;
do{
    printf("%d\n",i);
    i++;
}
while(i<=n);
}