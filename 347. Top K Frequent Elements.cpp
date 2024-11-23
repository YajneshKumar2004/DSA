class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mpp;
        vector<int>vec;
        for(int i=0; i<nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        for(auto i : mpp)
        {
            pq.push({i.second, i.first});
        }
        for(int i = 0; i<k ; i++)
        {
            vec.push_back(pq.top().second);
            pq.pop();
        }
        return vec;
    }
};
