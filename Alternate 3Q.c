#include<stdio.h>
int squareroot(int);
int main(){
    int n,x,y,a,b;
    printf("Enter any number : ");
    scanf("%d",&n);
    x=5*(n*n)-4;
    y=x+8;
    a=squareroot(x);
    b=squareroot(y);
    printf("%d\n",squareroot(x));
    printf("%d\n",squareroot(y));
    if(x==a*a||y==b*b){
        printf("Number is fibonacci number");
    }
    else{
        printf("Number is not a fibonacci number");
    }
    return 0;
}
int squareroot(int n){
    int high=n,low=1,ans;
    while(low<=high){
        int mid=high+low/2;
        int sqr=mid*mid;
        if(sqr==n){
            return mid;
        }
        else if(sqr<n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
