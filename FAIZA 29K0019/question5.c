#include<stdio.h>
void printsensordata(void *data, char datatype){
    if(datatype=='f'){
        float *temp =(float*)data;
        printf("%f celsius\n", *temp);
    }
    else if(datatype=='i'){
        int *motion=(int*)data;
        if(*motion==1){
            printf("motion detected\n");
        }
        else{
            printf("no motion\n");
        }
    }
    else if(datatype=='c'){
        char *door =(char*)data;
        if(*door=='o'){
            printf("door opened\n");
        }
        else if(*door== 'c'){
            printf(" door closed");
        }
    }
}
int main(){
    float temperature=2504;
    int motionstatus=1;
    char doorstatus='o';
    printf("smart home iot sensor reading:\n");
    printsensordata(&temperature,'f');
    printsensordata(&motionstatus,'i');
    printsensordata( & doorstatus, 'c');
    return 0;
}