#include<stdio.h>
void withdraw(int *balance,int amount){
    if(*balance>=amount){
        *balance=*balance-amount;
        printf("transaction successful\n");}
        else{
            printf("transaction invalid\n");
        }
    }

void deposit(int *balance, int amount){
 *balance=*balance + amount;
 printf("updated balance %d", *balance);}
int main(){
    int amount,total_amount;
    char type;
    printf("enter total amount\n");
    scanf("%d",&total_amount);
    printf("enter transaction type(crdit or debit)\n");
    scanf(" %c",&type);
   
    printf("enter amount \n");
    scanf("%d",&amount);
    
    if(type=='d'){
        withdraw(&total_amount,amount);
    }
    else if(type=='c'){
        deposit(&total_amount,amount);
    }
    else{
        printf("invalid transaction\n");

    }
    printf("%c is transaction", type);
    printf("final account balance is %d", total_amount);
    return 0;
    

    
}
