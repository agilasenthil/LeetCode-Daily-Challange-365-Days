// Day 1 of Daily Challenge
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count = 0;
        int j = 0;
        bool flag = false;
        int k = -1;
        for(int i=0;i<g.size();i++)
        {
            int j=k+1;
            while(j<s.size())
            {
                if(s[j]>=g[i])
                {
                    count++;
                    s[j] = 0;
                    k = j;
                    break;
                }
                j++;
            }
        }
        return count;
    }
};