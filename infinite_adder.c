#include<stdio.h>
int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    while(a){
        printf("\n%d",a);
        a=a+a;
    }
 return 0;
}