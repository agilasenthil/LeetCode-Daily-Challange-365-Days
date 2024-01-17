//Day 16 of LeetCode Daily Challenge
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> mp;
        unordered_set <int> st;
        for(auto a:arr)
        {
            mp[a]++;
        }
        for(auto m:mp)
        {
            st.insert(m.second);
        }
        if(st.size()==mp.size()) return true;
        return false;
    }
};