/*
Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0.

Note: This will be evaluated on the extra memory used. Try to minimize the space and time complexity.
*/
void Solution::setZeroes(vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
    
    vector<int>c(n,1);
    int flag = 0;
    for(int i=0; i<m; i++){
        flag = 0;
        for(int j=0; j<n; j++){
            if(A[i][j]==0){
                flag = 1;
                c[j] = 0;
            }
        }
        if(flag){
            for(int j=0; j<n; j++){
                A[i][j] = 0;
            }
        } 
    }
    for(int j=0; j<n; j++){
        if(c[j]==0){
            for(int i=0; i<m; i++){
                A[i][j]=0;
            }
        }
    }
    
    
}
