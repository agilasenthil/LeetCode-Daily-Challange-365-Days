class Solution {
public:
    bool closeStrings(string word1, string word2) {
        set <char> st1;
        set <char> st2;
        if(word1.length()!=word2.length()) return false;
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        if(word1 == word2) return true;
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        for(auto w:word1)
        {
            mp1[w]++;
            st1.insert(w);
        }
        for(auto w:word2)
        {
            mp2[w]++;
            st2.insert(w);
        }
        for(auto s:st1)
        {
            if(st2.find(s)==st2.end()) return false;
        }
        vector <int> result1;
        vector <int> result2;
        for(auto m:mp1)
        {
            result1.push_back(m.second);
        }
        for(auto m:mp2)
        {
            result2.push_back(m.second);
        }
        sort(result1.begin(),result1.end());
        sort(result2.begin(),result2.end());
        if(result1 == result2) return true;
        return false;

    }
};