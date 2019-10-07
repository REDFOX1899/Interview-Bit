/*
Given two sorted integer arrays A and B, merge B into A as one sorted array.

 Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.
TIP: C users, please malloc the result into a new array and return the result. 
If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

Example :

Input : 
         A : [1 5 8]
         B : [6 9]

Modified A : [1 5 6 8 9]

*/

bool checkGreater(int A, int B){
    if(A > B){
        return true;
    }
    return false;
}

void Solution::merge(vector<int> &A, vector<int> &B) {
    int i = 0, j = 0;
    while((i < A.size()) && (j < B.size())){
        bool a = checkGreater(A[i], B[j]);
        if(a){
            A.insert(A.begin()+i, B[j]);
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    while(j != B.size()){
        A.push_back(B[j]);
        j++;
    }
}
