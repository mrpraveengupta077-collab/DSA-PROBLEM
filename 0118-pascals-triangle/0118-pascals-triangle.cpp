class Solution {
public:
    vector<int> buildRow(int row) {

        if (row == 1) {
            return {1};
        }

        vector<int> prev = buildRow(row - 1);
        vector<int> curr;

        curr.push_back(1);

        int i = 0;
        int j = 1;

        while (j < prev.size()) {
            curr.push_back(prev[i] + prev[j]);
            i++;
            j++;
        }

        curr.push_back(1);

        return curr;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++) {
            ans.push_back(buildRow(i));
        }

        return ans;
    }
};