/*
Given a collection of intervals, merge all overlapping intervals.

For example:

Given [1,3],[2,6],[8,10],[15,18],

return [1,6],[8,10],[15,18].

Make sure the returned intervals are sorted.
*/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
 bool mycomp(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),mycomp);
    vector<Interval> ans;
    int n=A.size();
    ans.push_back(A[0]);
    for(int i=1;i<n;i++){
        if(A[i].start<=ans[ans.size()-1].end)
         ans[ans.size()-1].end=max(ans[ans.size()-1].end,A[i].end);
        else
         ans.push_back(A[i]);
    }
    return ans;
    
}
