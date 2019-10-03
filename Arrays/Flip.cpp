/*
You are given a binary string(i.e. with characters 0 and 1) S consisting of characters S1, S2, …, SN.
In a single operation, you can choose two indices L and R such that 1 ≤ L ≤ R ≤ N and flip the characters 
SL, SL+1, …, SR. By flipping, we mean change character 0 to 1 and vice-versa.

Your aim is to perform ATMOST one operation such that in final string number of 1s is maximised. 
If you don’t want to perform the operation, return an empty array. Else, return an array consisting
of two elements denoting L and R. If there are multiple solutions, return the lexicographically smallest pair of L and R.

Notes:

Pair (a, b) is lexicographically smaller than pair (c, d) if a < c or, if a == c and b < d.
For example,

S = 010

Pair of [L, R] | Final string
_______________|_____________
[1 1]          | 110
[1 2]          | 100
[1 3]          | 101
[2 2]          | 000
[2 3]          | 001


find error 

int ones(string S){
    int sum =0;
    for(int i =0; i<S.size(); i++){
        sum = sum + (int)S[i];
    }
    return sum;
}

int flipbits(string S, int L, int R){
    if( L == R){
    S[L] = (char)(!(int)S[L]);
    }
    for(int i = L+1; i<=R; i++){
        S[i] = (char)(!(int)S[L]);
    }
    
    return ones(S);
}
vector<int> Solution::flip(string A) {
    int n = A.size();
    vector<int> ans;
    
    if(ones(A) == n)
        return ans;
    
    string temp = A;
    int prev1,l, r, max =0;
    for(int L = 0; L<n; L++){
        for(int R = L; R<n; R++){
            prev1 = flipbits(temp, L, R);
            if(prev1 > max){
                l = L;
                r = R;
                max = prev1;
            }
            
        }
    }
    
    ans.push_back(l+1);
    ans.push_back(r+1);
    return ans;
    
}
*/


vector<int> Solution::flip(string A) {
    int l = 0, lmax = -1, rmax = -1;
    int maxi = 0, cmax = 0;
    int len = A.length();
    for(int i=0;i<len;i++) {
        cmax += (A[i]=='0'?1:-1);
        if(cmax>maxi) {
            maxi = cmax;
            lmax = l;
            rmax = i;
        }
        if(cmax<0) {
            l = i+1;
            cmax = 0;
        }
    }
    if(lmax == -1 || rmax == -1) {
        return vector<int>(0, 0);
    }
    vector<int> t(2, 0);
    t[0] = lmax+1;
    t[1] = rmax+1;
    return t;
}
