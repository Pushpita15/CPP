/*Given an array of intervals intervals where intervals[i] = [starti, endi], 
return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.*/
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int left=0,right=1,cnt=0;
        while(right<n)
        {
            if(intervals[left][1]<=intervals[right][0])
            {
                left=right;
                right++;
            }
            else if(intervals[left][1]<=intervals[right][1])
            {
                cnt++;
                right++;
            }
            else if(intervals[left][1]>intervals[right][1])
            {
                cnt++;
                left=right;
                right++;
            }
        }
        return cnt;
        
    }
};