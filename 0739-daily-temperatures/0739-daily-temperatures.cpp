class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int> result;
        stack <int> st;
        map <int, int> mp;
        st.push(0);
        for(int i=1;i<temperatures.size();i++)
        {
            if(st.empty()) st.push(i);
            while(!st.empty() && temperatures[st.top()]<temperatures[i])
            {
                mp[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            mp[st.top()] = 0;
            st.pop();
        }
        for(auto m:mp)
        {
            result.push_back(m.second);
        }
        return result;
        
    }
};