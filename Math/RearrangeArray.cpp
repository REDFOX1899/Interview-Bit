/*
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:

Input : [1, 0]
Return : [0, 1]

The important thing is, after the increment operation
of first step, every element holds both old values and new values. 
Old value can be obtained by arr[i]%n and new value can be obtained
by arr[i]/n.

% operator helps us in getting the old values back IMP
*/

void Solution::arrange(vector<int> &A) {
    for(int i = 0; i < A.size(); i++){
        A[i] = A[i] + ( A[A[i]] %(A.size()) ) *A.size();
                         // helps in getting back the old values
    }
    
    for(int i = 0; i < A.size(); i++){
        A[i] = A[i]/A.size();
    }
    
}
