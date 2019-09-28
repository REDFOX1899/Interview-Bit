/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic
Input : 12121
Output : True

*/
int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    int temp = A, sum =0;
    while(temp != 0){
        sum = sum*10 + temp%10;
        temp = temp/10;
    }
    
    if(sum == A)
        return 1;
    
    return 0;
    
}
