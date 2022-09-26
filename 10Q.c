#include <stdio.h> 
int main(){
    int temp, digit1, digit2, digit3;
    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for(int n=1;n<=1000;n++){
        if(n<=9){
            printf("%d ",n);
        }
        else{
            digit1 = n % 10;   
            digit2 = (n % 100)/10;       
            digit3 = (n % 1000)/100; 
            temp = (digit1*digit1*digit1) + (digit2*digit2*digit2) + (digit3*digit3*digit3); 
	    if (temp == n){
                printf("%d ", temp);
            }
        }
    }
    return 0;
}
