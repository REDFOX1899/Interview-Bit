/*
Given an integer n, return the number of trailing zeroes in n!.
n = 5
n! = 120 
Number of trailing zeros = 1
So, return 1


Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....
              
the number of 2s in prime factors is always more than or equal to the number of 5s. 
*/


 int trailingZeroes(int n) {
        int sum = 0;
        while (n / 5 > 0) {
            sum += (n / 5);
            n /= 5;
        }
        return sum;
    }
