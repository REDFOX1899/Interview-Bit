/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.
*/

bool checkLarger(int a, int b){
    string aa = to_string(a);
    string bb = to_string(b);
    string st = aa+bb;
    string rev = bb+aa;
    if(st > rev){
        return true;
    }
    return false;
}


string Solution::largestNumber(const vector<int> &A) {
    vector<int> sol = A;
    sort(sol.begin(), sol.end(), checkLarger);
    string ans = "";
    for(int i=0; i<sol.size();i++){
        ans = ans+ to_string(sol[i]);
    }
    
    if(ans[0] == '0')
        return "0";
    return ans;
}

// The algorithm used by sort() is IntroSort. Introsort
//being a hybrid sorting algorithm uses three sorting algorithm to minimise the running time,
//Quicksort, Heapsort and Insertion Sort.
