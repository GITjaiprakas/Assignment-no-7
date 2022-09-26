#include<stdio.h>
#include<math.h>
int main(){
    int n,k,s;
    printf("Enter any number : ");
    scanf("%d",&n);
    k=n+1;
    while(n){
        s=sqrt(k);
        n=2;
        while(n<=s){
            if(k%n==0){
                break;
            }
            n++;
        }
        if(n>s){
            printf("%d",k);
            break;
        }
        k++;
        }
    return 0;
}
