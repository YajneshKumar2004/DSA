class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pair = 0;
        int rem = 0;
        vector<int> vec;
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for(auto i : mpp)
        {
            if(i.second%2 == 1)
            {
                rem++;
            }
            pair += i.second/2;
        }
        
        vec.push_back(pair);
        vec.push_back(rem);
        return vec;
    }
};
