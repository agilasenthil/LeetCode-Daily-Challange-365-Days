class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i=i+3)
        {
            vector <int> arr;
            int num1 = nums[i];
            int num2 = nums[i+1];
            int num3 = nums[i+2];
            if((num2 - num1)<=k && (num3 - num2)<=k && (num3-num1)<=k)
            {
                arr.push_back(num1);
                arr.push_back(num2);
                arr.push_back(num3);
            }
            else return {};
            result.push_back(arr);
        }
        return result;
    }
};