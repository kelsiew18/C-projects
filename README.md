# A simple palindrome check
a palindrome is a number which when reversed still reads the same 
it uses a for loop 
it uses 2 operations ie. %10 and /10 carried out on integer n
%10 removes the last digit of the number (decimal no. sysytem)

## Building the reverse of the number 
eg. int n = 123 
int digit = n%10 the last digit / remainder, after dividing n by 10
if initially reverse was equal to zero; reverse = (reverse * 10) + digit
pass1= (0 * 10) + 3 = 3
reverse' = 3 ; digit' = 2
pass2= (3 * 10) + 2 =32
reverse''= 32 ; digit''= 1
pass3= (32 * 10) + 1 = 321

## Use if statements
use if statements to display whether the number they input is a palindrome or not!!!
