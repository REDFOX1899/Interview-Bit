/*
Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer
*/


int Solution::reverse(int A) {
    long long int rev=0,rem;
   
    while(A)
    {
        rem=(A%10);
        rev=rev*10+rem;
        A=A/10;
        if(rev>INT_MAX || rev<INT_MIN)
        return 0;
    }
    return (int)rev;
}
