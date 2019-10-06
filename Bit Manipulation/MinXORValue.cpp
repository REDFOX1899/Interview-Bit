/*
Given an array of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.

Examples :
Input
0 2 5 7
Output
2 (0 XOR 2)
Input
0 4 7 9
Output
3 (4 XOR 7)

Constraints:
2 <= N <= 100 000
0 <= A[i] <= 1 0
*/

// TIME LIMIT EXCEDED 

int Solution::findMinXor(vector<int> &A) {
    int n = A.size();
    int chq , min =INT_MAX;
    for(int i =0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            chq = A[i] ^ A[j];
            if(chq< min){
                min = chq;
            }
        }
    }
    return min;
}

// OPTIMAL

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int minXor = INT_MAX; 
    int val = 0; 
    int n = A.size();
    for (int i = 0; i < n -1 ; i++) { 
        val = A[i] ^ A[i + 1]; 
        minXor = min(minXor, val); 
    } 
    return minXor;
}
