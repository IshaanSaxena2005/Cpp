class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long windowSum = 0;
        long long maxSum = 0;

        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++) {
            
            windowSum += nums[i];
            freq[nums[i]]++;

            // Window size > k
            if(i >= k) {
                windowSum -= nums[i-k];
                freq[nums[i-k]]--;
                
                if(freq[nums[i-k]] == 0) {
                    freq.erase(nums[i-k]);
                }
            }

            // Window size = k AND all elements distinct
            if(i >= k-1 && freq.size() == k) {
                maxSum = max(maxSum, windowSum);
            }
        }

        return maxSum;
    }
};