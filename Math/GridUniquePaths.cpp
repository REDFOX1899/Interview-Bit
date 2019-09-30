/*
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.
Input : A = 2, B = 2
Output : 2

2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
              OR  : (0, 0) -> (1, 0) -> (1, 1)
*/

int backtrack(int A, int B, int i, int j){
    if(i==A-1|| j==B-1)
        return 1;
   
    return backtrack(A,B,i+1,j) + backtrack(A,B,i,j+1);
    
   
        
}
int Solution::uniquePaths(int A, int B) {
    
    return backtrack(A, B, 0,0);
 
}
