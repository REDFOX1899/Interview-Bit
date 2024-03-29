/*
Given a set of digits (A) in sorted order, find how many numbers of length B are possible whose value is less than number C
 NOTE: All numbers can only have digits from the given set. 
	Input:
	  0 1 2 5  
	  2  
	  21  
	Output:
	  5 (10, 11, 12, 15, 20 are possible)
*/
#define MAX 10 
vector<int> numToVec(int N){
    vector<int> digit;
    while(N!=0){
        digit.push_back(N%10);
        N = N/10;
    }
    if(digit.size() == 0)
        digit.push_back(0);
    reverse(digit.begin(), digit.end());
    
    return digit;
}
int Solution::solve(vector<int> &A, int B, int C) {
    vector<int> digit;
    int d, d2;
    digit = numToVec(C);
    d = A.size();
    
    if(B > digit.size() || d ==0)
        return 0;
    
    else if( B < digit.size()){
        if(A[0] == 0 && B!= 1)
            return (d-1)* pow(d,B-1);
        else
            return pow(d,B);
    }
    
    else{
        vector<int> dp(B+1,0); 
        vector<int> lower(MAX+1,0); 
        for (int i = 0; i < d; i++) 
            lower[A[i] + 1] = 1; 
        for (int i = 1; i <= MAX; i++) 
            lower[i] = lower[i - 1] + lower[i]; 
  
        bool flag = true; 
        dp[0] = 0; 
        for (int i = 1; i <= B; i++) { 
            d2 = lower[digit[i - 1]]; 
            dp[i] = dp[i - 1] * d; 
  
            if (i == 1 && A[0] == 0 && B != 1) 
                d2 = d2 - 1; 
 
            if (flag) 
                dp[i] += d2; 

            flag = (flag & (lower[digit[i - 1] + 1] 
                            == lower[digit[i - 1]] + 1)); 
        } 
        return dp[B]; 
    }
    
}
    
