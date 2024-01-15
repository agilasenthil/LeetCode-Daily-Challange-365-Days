//Day 14 of LeetCode Daily Challenge
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector <vector <int>> result;
        map <int,int> win;
        map <int,int> lost;
        for(auto m:matches)
        {
            win[m[0]]++;
            lost[m[1]]++;
        }
        vector<int> resultWin;
        for(auto w:win)
        {
            if(lost[w.first] == 0)
            {
                resultWin.push_back(w.first);
            }
        }
        result.push_back(resultWin);
        
        vector<int> resultLost;
        for(auto l:lost)
        {
            if(l.second == 1)
            {
                resultLost.push_back(l.first);
            }
        }
        result.push_back(resultLost);
        return result;
    }
};