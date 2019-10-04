/*
Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:

The first and the only argument contains an integer array, A.
Output Format:

Return an integer representing the maximum possible sum of the contiguous subarray.

Input 2:
    A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

Output 2:
    6

Explanation 2:
    The subarray [4,-1,2,1] has the maximum possible sum of 6.
    
 */
 
 int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
    int curSum = 0, maxSum = -1000000000;
    for (int i = 0; i < n; i++) {
            curSum += A[i];
            maxSum = max(maxSum, curSum);
            if (curSum < 0) curSum = 0;
    }
    return maxSum;
}
