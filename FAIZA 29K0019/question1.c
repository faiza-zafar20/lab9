#include<stdio.h>
int calculatediscount(char type,int totalshopping)
{ float discount =0;
    
    if(type=='P'){
       discount = 0.2;
    }
    else if (type=='G'){
        discount= 0.1;
    }
    else if(type=='S'){
        discount = 0.05;
    }
    if(totalshopping >10000){
    discount += 0.02;}
    return discount*totalshopping;
}
    float finalbill(float discountamount){
        float tax=(0.15*discountamount);
        float shipping=0;
        if(discountamount<=5000){
            shipping=300;
        }
        else{
            shipping=0;
        }
        return discountamount+tax+shipping;}
    
     int main(){
        char type;
        float discount, totalshopping,discountamount,total_finalbill;
        printf("enter your member typr(P,G,S):\n");
        scanf("%c",&type);
        printf("enter your tatol shopping amount\n");
        scanf("%f",&totalshopping);
        discount = calculatediscount(type,totalshopping);
    discountamount = totalshopping - discount;
    total_finalbill=finalbill(discountamount);
    printf("%f is totalshoppingamount\n", totalshopping);
    printf("discount is %f\n",discount);
    printf("amount after discount is %f\n",discountamount);
    printf("%f payable amount\n",total_finalbill);

    
     
        
       
        return 0;             

     }
