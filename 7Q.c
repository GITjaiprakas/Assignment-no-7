#include<stdio.h>
int main(){
    int pri[100],i,j,e,n;
    printf("Enter the starting and end of prime numbers: ");
    scanf("%d %d",&n,&e);
    for(i=2;i*i<e+1;i++){
        for(j=2*i;j<e+1;j+=i){
            pri[j]=0;
        }
    }
    for(i=n;i<e+1;i++){
        if(pri[i]){
            printf("%d ",i);
        }
    }
    return 0;
}
