/*
Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
    
    AB -> 28 
*/

int Solution::titleToNumber(string A) {
    int n = A.size();
    char ch; int sum =0;
    for(int i =0; i<n; i++){
        ch = A[i];
        sum = sum*26 + ((int)ch -64);
    }
    return sum;
}
