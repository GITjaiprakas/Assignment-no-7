#include<stdio.h>
int main(){
    int pri[100],i,j;
    for(i=2;i*i<100;i++){
        for(j=2*i;j<100;j+=i){
            pri[j]=0;
        }
    }
    for(i=2;i<100;i++){
        if(pri[i]){
            printf("%d ",i);
        }
    }
    return 0;
}
