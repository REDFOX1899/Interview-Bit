/*
In mathematics, the greatest common divisor (gcd) of two or more integers, which are not all zero,
is the largest positive integer that divides each of the integers. For example, the gcd of 8 and 12 is 4.

Given 2 non negative integers m and n, find gcd(m, n)

GCD of 2 integers m and n is defined as the greatest integer g such that g is a divisor of both m and n.
Both m and n fit in a 32 bit signed integer

my approach 

int Solution::gcd(int A, int B) {
    int min;
    if(A<B)
        min = A;
    else 
        min = B;
        
    if(min ==0)
        return (A+B);
    
    for(int i =min; i>0; i--){
        if(A%i ==0 && B%i ==0)
            return i;
    }
    
    return 1;
        
}
*/

int Solution::gcd(int A, int B) {
    while(A != 0){
        int temp = B;
        B = A;
        A = temp%A;
    }
    
    return B;
}


// Better for understanding 

 int Solution::gcd(int m, int n) {
         
        if(m < n)
               swap(m, n);
        
        if(n == 0)
               return m;
         

        return gcd(m % n, n);
  }

//gcd(a,b)=gcd(b,a mod b),
