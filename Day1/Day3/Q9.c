#include<stdio.h>
int main(){
    int n,i,k=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(n%i==0){
            k++;
        }
        if(k==2)
        printf("The number is prime");
        else
        printf("The number is not prime");

   
   return 0; 
}