#include<stdio.h>
void main(){
    float n;
    float dis;
    float f;
    
    
    printf("Enter price:");
    scanf("%f",&n);
    
    if(n>0){
        if(n>=900 && n<1000){
        printf("\t\t=:Eid Special:=");
        printf("\n10 percent Disscount");
        dis=n*0.1;
        printf("\nDisscount Price=%f",dis);
        f=n-dis;
        printf("\nFinal Price:%f",f);
        
     }
     else if(n>=1000 && n<=5000){
         printf("\t\t=:Eid Special:=");
         printf("\n15 percent Disscount");
         dis=n*0.15;
         printf("\nDisscount Price=%f",dis);
         f=n-dis;
        printf("\nFinal Price:%f",f);

     }
     else if(n>5000){
         printf("\t\t=:Eid Special:=");
         printf("\n20 percent Discount");
         dis=n*0.20;
         printf("\nDiscount price=%f",dis);
         f=n-dis;
        printf("\nFinal Price:%f",f);
     }

     else{
         printf("Purchase more");
     }
    }
    else{
        printf("Invalid! Please enter price");
    }
    }
