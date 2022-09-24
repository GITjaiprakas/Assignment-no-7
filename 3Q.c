#include<stdio.h>
int main(){
    int j=1,i=0,k=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==1||n==0){
        printf("the number is a fibonacci number");
    }
    while(k<n){
        k=i+j;
        j=i;
        i=k;
    }
    if(n==k){
        printf("the number is a fibonacci number");
    }
    else{
        printf("the number is not a fibonacci number");
    }
    return 0;
}
