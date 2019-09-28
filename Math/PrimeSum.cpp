/*
Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE A solution will always exist. read Goldbach’s conjecture
*/

bool chqPrime(int n){
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
}
vector<int> Solution::primesum(int A) {
    int a, b;
    vector<int> ans;
    for(int i =2; i<A; i++){
        if(chqPrime(i) && chqPrime(A-i))
        {
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
    return ans;
}
