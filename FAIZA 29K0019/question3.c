#include<stdio.h>
int main (){
int image[3][3];
int (*ptr)[3]=image;
printf("enter 9 pixel values for 3x3 image:\n");
for(int i=0;i<3;i++){
    for(int j=0; j<3; j++){
        printf("pixel [%d][%d]: ",i,j);
        scanf("%d", (*(ptr + i) + j));
    }

}
for(int i=0;i<3;i++){
    for(int j=0;j<3; j++){
        *(*(ptr+i)+j) = *(*(ptr+i)+j)*2;
    
    }
}
printf("updated image (brightness x2):\n");
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d\t",*(*(ptr + i)+ j));
    }
    printf("\n");
}
return 0;

}
