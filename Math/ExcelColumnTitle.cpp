/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet
  1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    
    treat like N%10 N/10
    
*/

string Solution::convertToTitle(int n) {
    string ans;
    while (n) {
        ans = char ((n - 1) % 26 + 'A') + ans;
        n = (n - 1) / 26;
    }
    return ans;
    
}
