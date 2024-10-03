#include<stdio.h>
void main(){
    char ch;
    int a,b,c;
    printf("Enter the operator to perform operation: ");
    scanf("%c",&ch);
    switch(ch){
        case '+': printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Addition=%d",c);
        break;
        case '-': printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("Substraction=%d",c);
        break;
        case '*':printf("Enter two numbers:\n");
         scanf("%d%d",&a,&b);
        c=a*b;
        printf("Multiplication=%d",c);
        break;
        case '/':printf("Enter two numbers:\n");
         scanf("%d%d",&a,&b);
        c=a/b;
        printf("Division=%d",c);
        break;
        
    }
}
