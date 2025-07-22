class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        unordered_set<int> s;

        int i = 0, j = 0;

        while (j < n) {
            if (s.find(nums[j]) == s.end()) {
                s.insert(nums[j]);
                sum += nums[j];
                ans = max(ans, sum);
                j++;
            } else {
                while (nums[i] != nums[j]) {
                    s.erase(nums[i]);
                    sum -= nums[i];
                    i++;
                }
                s.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
        }

        return ans;
    }
};
