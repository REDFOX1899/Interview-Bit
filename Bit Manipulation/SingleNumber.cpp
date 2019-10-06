/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example :

Input : [1 2 2 3 1]
Output : 3
*/

int Solution::singleNumber(const vector<int> &A) {
    int n = A.size();
    if(n ==0)
        return 0;
    int number = A[0];
    for(int i =1; i<n; i++){
        number = number ^ A[i];
    }
    return number;
}
