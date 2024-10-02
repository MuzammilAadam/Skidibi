#include<stdio.h>
int mul(int, int);
int mul(int x, int y){
    printf("Multiplication is %d\n",x*y);
    return x*y;
}
int main(){
    int a=2;
    int b=3;
    mul(a,b);
    int c=12;
    int d=4;
    int e= mul(c,d);
    return 0; 
}