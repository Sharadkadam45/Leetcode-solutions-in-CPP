class Solution {
public:
    int search(vector<int>& nums, int target) {
         // Initialize two pointers, low and high
        int low = 0, high = nums.size() - 1;

        // Binary search loop
        while (low <= high) {
            // Calculate the middle index
            int mid = (low + high) / 2;

            // Check if the middle element is equal to the target
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] >= nums[low]) {
                // If non-rotated, check if the target is within the range (nums[low] to nums[mid])
                if (nums[mid] < target || target < nums[low]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            } else {
                // If rotated, check if the target is within the range (nums[mid] to nums[high])
                if (target < nums[mid] || target > nums[high]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }

        // If the while loop exits without finding the target, return -1
        return -1;
    }
};