/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.*/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        
        map<int,int> mp;
        for(int i=0;i<arr.size();++i)
        {
            mp[arr[i]]++;
        }
        set<int> s;
        for(auto x:mp)
        {
            s.insert(x.second);
        }
        return mp.size()==s.size();
    }
};
