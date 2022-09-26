#include<stdio.h>
int power(int,int);
int main(){
    int n,x,rem,ans=0,c=0,s;
    printf("Enter any number : ");
    scanf("%d",&n);
    x=n;
    while(n){
        c++;
        n=n/10;
    }
    n=x;
    while(x){
        rem=x%10;
        s=power(rem,c);
        ans=s+ans;
        x=x/10;
    }
    if(ans==n){
        printf("the number is an armstrong number");
    }
    else{
        printf("the nubmer is not an armstrong number");
    }
    return 0;
}
int power(int rem,int c){
    int pro=1;
    while(c){
        pro=rem*pro;
        c--;
    }
    return pro;
}
