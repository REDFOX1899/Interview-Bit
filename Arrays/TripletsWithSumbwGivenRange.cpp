/*
Given an array of real numbers greater than zero in form of strings.
Find if there exists a triplet (a,b,c) such that 1 < a+b+c < 2 .
Return 1 for true or 0 for false.

Example:

Given [0.6, 0.7, 0.8, 1.2, 0.4] ,

You should return 1

as

0.6+0.7+0.4=1.7

1<1.7<2

Hence, the output is 1.

O(n) solution is expected.
solution the smallest number will always accur continiously 

*/

int Solution::solve(vector<string> &A) {
    int n = A.size();
    vector<float>B;
    for(int i =0; i<n; i++){
        B.push_back(stof(A[i]));
    }
    sort(B.begin(), B.end());
    double sum =0;
    int l =0, r = n-1;
    while(l<r-1){
        sum = B[l] + B[l+1] + B[r];
        if(sum >= 2)
            r--;
        else if(sum <=1)
            l++;
        else
            return 1;
        
    }
    return 0;
    
    
    
}
