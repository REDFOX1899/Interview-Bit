/*
Given a read only array of n + 1 integers between 1 and n, find one number that repeats in 
linear time using less than O(n) space and traversing the stream sequentially O(1) times.

Sample Input:

[3 4 1 4 1]
Sample Output:

1
If there are multiple possible answers ( like in the sample case above ), output any one.

If there is no duplicate, output -1
*/

int Solution::repeatedNumber(const vector<int> &A) {
   vector<bool>res(A.size(),true);
    for(int i=0;i<A.size();i++){
      if(res[A[i]])
        res[A[i]]=false;
       else
        return A[i];
    }
    return -1;
}
