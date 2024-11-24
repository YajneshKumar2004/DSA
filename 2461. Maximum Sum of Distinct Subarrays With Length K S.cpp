class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long max_sum = 0;
        long long sum = 0;
        unordered_map<int,int>mpp;
        for(int i=0; i<k; i++)
        {
            sum += nums[i];
            mpp[nums[i]]++;
        }
        if(mpp.size() == k) 
        {
            max_sum = sum;
        }
        for(int i=k; i<nums.size(); i++)
        {
            sum += nums[i];
            mpp[nums[i]]++;

            sum -= nums[i-k];
            mpp[nums[i-k]]--;

            if(mpp[nums[i-k]] == 0)
            {
                mpp.erase(nums[i-k]);
            }
            if(mpp.size() == k)
            {
                max_sum = max(sum, max_sum);
            }
        }
        return max_sum;
    }
};
