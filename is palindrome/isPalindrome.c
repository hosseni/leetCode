/* Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
*/

bool isPalindrome(int n){
long long r = 0, sum = 0, temp = n;
    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}   
    if (temp == sum) return true;
    else return false;

}