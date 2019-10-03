/*
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.
Q : Can the input have 0’s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0’s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

*/

vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size()-1;
    int sum=A[n]+1;
    A[n]=sum%10;
    int carry=sum/10;
    for(int i=n-1;i>=0;i--)
    {
        int sum=A[i]+carry;
        A[i]=sum%10;
        carry=sum/10;
    }
    vector<int> B;
    if(carry==1)
    {
        B.push_back(1);
        for(int i=0;i<A.size();i++)
            B.push_back(A[i]);
        return B;
    }
    else 
    {
        bool done=false;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]!=0)
                done=true;
            if(done)
                B.push_back(A[i]);
        }
        return B;
    }
}
