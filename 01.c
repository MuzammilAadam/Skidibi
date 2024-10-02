#include<stdio.h>
//Function prototype
int sum(int,int);

//Function definition
int sum(int X, int Y){
    printf("Sum is equal %d",X+Y);
    return X+Y;
}
int main(){
    int a=65;
    int b=4;
    sum(a,b);
return 0;
}