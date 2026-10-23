#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int multiply(int a,int b){
    return a*b;
}

int findmax(int a,int b){
        if(a>b){
       return a;
    }
    else{
        return b;
    }
    }

int compute(int a,int b,int(*operation)(int, int)){
    return operation(a,b);
}
    
    
int main(){
    int a,b;
    int sum,product, max;
    printf("enter the numbers (a and b)\n");
    scanf("%d %d", &a,&b);
    sum=compute(a,b,add);
    product=compute(a,b,multiply);
    max= compute(a,b,findmax);
    printf("%d %d %d",sum,product,max);
    return 0;
    
}