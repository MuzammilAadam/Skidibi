#include<stdio.h>
void main(){
int n;
int m=1;
printf("Enter any number:\n");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    m*=i;
}
printf("Factorial:%d\n",m);
}