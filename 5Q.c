#include<stdio.h>
    int main(){
        int n1,n2,i,c,count=0;
        printf("Enter any two numbers : ");
        scanf("%d %d",&n1,&n2);
        c=n1>n2?n2:n1;
        for(i=1;i<=c/2;i++){
            if((n1%i==0)&&(n2%i==0)){
                count++;
            }
            if(count>1){
                break;
            }
        }
        if(count==1){
            printf("The numbers are coprime");
        }
        else{
            printf("The numbers are not coprime");
        }
        return 0;
    }
