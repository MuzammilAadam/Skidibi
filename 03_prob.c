#include<stdio.h>
void main(){
int n;
printf("Enter any number:");
scanf("%d",&n);
for(int i=10; i; i--){
  
    printf("%d X %d = %d\n",i,n,i*n );
}
}