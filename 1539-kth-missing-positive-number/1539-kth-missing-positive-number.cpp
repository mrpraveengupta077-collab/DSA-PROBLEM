class Solution {
public:
    int check(int value, int n, vector<int>& arr) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                return 1;
            }
        }
        return 0;
    }

    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> temp;

        int i = 1;

        while (temp.size() < k) {
            if (check(i, n, arr) == 0) {
                temp.push_back(i);
            }
            i++;
        }

        return temp[k - 1];
    }
};