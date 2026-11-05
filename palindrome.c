/*Palindrome check*/
#include<stdio.h>
int main()
{
    int n, original, reverse=0;
    printf("\n Enter integer value: ");
    scanf(" %d", &n);
    original= n;
    for(; n>0; n/=10){
        int digit= n % 10;
        reverse= reverse * 10 + digit;
    }
    if (original == reverse)
    {
       printf("\n The number is a palindrome!!");
    }
    else{
        printf("\n The number is not a palindrome!!");
    }
    return 0;

}