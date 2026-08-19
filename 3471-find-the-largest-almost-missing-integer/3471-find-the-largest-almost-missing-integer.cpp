class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = -1;

        // Count frequency of every number
        vector<int> count(51, 0);

        for (int x : nums) {
            count[x]++;
        }

        // Case 1: k = 1
        if (k == 1) {

            for (int x : nums) {
                if (count[x] == 1) {
                    ans = max(ans, x);
                }
            }

            return ans;
        }

        // Case 2: k = n
        if (k == n) {
            for (int x : nums) {
                ans = max(ans, x);
            }

            return ans;
        }

        // Case 3: 1 < k < n
        if (count[nums[0]] == 1) {
            ans = max(ans, nums[0]);
        }

        if (count[nums[n - 1]] == 1) {
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};