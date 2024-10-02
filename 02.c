#include<stdio.h>
int sub(int, int);
int sub(int X, int Y){
    printf("The Sub is %d",X-Y);
    return X-Y;
}
int main(){
    int a=72;
    int b=3;
    sub(a,b);
    return 0;

}