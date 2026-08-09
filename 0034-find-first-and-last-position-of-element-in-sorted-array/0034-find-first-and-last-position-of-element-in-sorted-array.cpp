class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = -1;
        int j = -1;

        int low = 0;
        int high = nums.size() - 1;

        
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] >= target) {
                i = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        low = 0;
        high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] <= target) {
                j = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (i == -1 || nums[i] != target) {
            return {-1, -1};
        }

        return {i, j};
    }
};