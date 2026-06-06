#include<stdio.h>
int main(){
    int n,c,s=0;
    printf("enter number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
   {
    c=n%10;
    s=c+(s*10);
    n=n/10;
   }
   if(c==s){
    printf("number is palindrome number");

   }
   else{
    printf("not");
   }
   return 0; 
}