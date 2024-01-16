// Day 15 of LeetCode Daily Challenge
class RandomizedSet {
public:
    set <int> st;
    vector <int> result;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(st.size() == 0)
        {
            st.insert(val);
            result.push_back(val);
            return true;
        }
        else
        {
            if(st.find(val)!=st.end())
            {
                return false;
            }
            else
            {
                st.insert(val);
                result.push_back(val);
                return true;
            }
        }
    }
    
    bool remove(int val) {
        if(st.find(val)!=st.end())
        {
            st.erase(val);
            result.erase(find(result.begin(),result.end(),val));
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return result[rand()%result.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */