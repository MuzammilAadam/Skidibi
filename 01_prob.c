//programm for finding tables of any numbers
#include<stdio.h>
void main(){
int n,m;
printf("Enter a number:");
scanf("%d",&n);

for(int i=1; i<=10; i++)
{
    m= i*n;
    printf("%d X %d  = %d \n",i,n,m);
}
}