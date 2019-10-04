/*
Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

If there is no solution possible, return -1.

Example :

A : [3 5 4 2]

Output : 2 
for the pair (3, 4)

My not optimal approach 

int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int, int>> vec;
    for(int i =0; i<A.size(); i++){
        vec.push_back(make_pair(A[i], i));
    }
    
    sort(vec.begin(), vec.end());
    int max =0;
    for(int i =0; i<vec.size(); i++){
        for(int j =vec.size()-1; j>i; j--){
            if(vec[j].second - vec[i].second > max){
                max = vec[j].second - vec[i].second;
            }
        }
    }
    return max;
}
*/
int Solution::maximumGap(const vector<int> &num) {
            if (num.size() == 0) return -1;
            if (num.size() == 1) return 0;
            vector<pair<int, int> > toSort; 
            for (int i = 0; i < num.size(); i++) {
                toSort.push_back(make_pair(num[i], i));
            }
            sort(toSort.begin(), toSort.end());
            int len = toSort.size();
            int maxIndex = toSort[len - 1].second;
            int ans = 0;
            for (int i = len - 2; i >= 0; i--) {
                ans = max(ans, maxIndex - toSort[i].second);
                maxIndex = max(maxIndex, toSort[i].second);
            }
            return ans;
}
