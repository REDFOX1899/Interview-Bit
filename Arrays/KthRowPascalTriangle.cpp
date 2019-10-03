/*
Given an index k, return the kth row of the Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Input : k = 3

Return : [1,3,3,1]

better approach : 

notice that for a row, you only need the value in the previous rows.

The values in i-2 row do not matter.

As such, all you need is to maintain 2 vectors and alternate between them.
*/


vector<int> Solution::getRow(int A) {
   int n  = 1;
   vector<int>temp;
        for( int col = 0; col <= A ; col++){// nth row will have n + 1 elements in pascal triangle
            temp.push_back(n);
            n = n * (A - col)/(col + 1);
        }
    return temp; 
}
