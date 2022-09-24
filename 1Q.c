#include<stdio.h>
int main(){
    int j=1,i=0,k,n;
    printf("Enter the nth term of fibonacci series: ");
    scanf("%d",&n);
    if(n==1){
        printf("%d",i);
    }
    else{
        while(n>1){
            k=i+j;
            j=i;
            i=k;
            n--;
        }
        printf("%d",k);
    }
    return 0;
}
