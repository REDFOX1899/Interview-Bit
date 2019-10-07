/*
Find the intersection of two sorted arrays.
OR in other words,
Given 2 sorted arrays, find all the elements which occur in both the arrays.

Example :

Input : 
    A : [1 2 3 3 4 5 6]
    B : [3 3 5]

Output : [3 3 5]

Input : 
    A : [1 2 3 3 4 5 6]
    B : [3 5]

Output : [3 5]
*/

int chq(int a, int b){
    if(a<b)
        return 0;
    else if(a ==b)
        return 1;
    return 2;

}
vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i =0, j=0;
    vector<int> ans;
    int c;
    while(i< A.size() && j<B.size()){
        c = chq(A[i], B[j]);
        if(c==1){
            ans.push_back(A[i]);
            i++;
            j++;
        }
        else if(c==0){
            i++;
        }
        else if(c==2){
            j++;
        }
        
            
    }
    return ans;
}
