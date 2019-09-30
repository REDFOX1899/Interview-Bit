/*
You are given two positive numbers A and B. You need to find the maximum valued integer X such that:

X divides A i.e. A % X = 0
X and B are co-prime i.e. gcd(X, B) = 1
For example,

A = 30
B = 12
We return
X = 5

Input : x = 15
        y = 3 
Output : a = 5
Explanation: 5 is the max integer 
which satisfies both the conditions.
             15 % 5 =0
             gcd(5, 3) = 1
Hence, output is 5. 

Input : x = 14
        y = 28
Output : a = 1
Explanation: 14 % 1 =0
             gcd(1, 28) = 1
Hence, output is 1. 

 Here, first we will remove the common factors of x and y from x by finding 
 the greatest common divisor (gcd) of x and y and dividing x with that gcd.
*/

int Solution::cpFact(int A, int B) {
     while (__gcd(A, B) != 1) {
        A = A / __gcd(A, B);
    }
    return A;
}
