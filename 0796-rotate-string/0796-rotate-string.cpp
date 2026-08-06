class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length())
            return false;

        vector<string> rotations;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            rotations.push_back(s);

            char first = s[0];
            s.erase(0, 1);
            s.push_back(first);
        }
        for (int i = 0; i <n; i++) {
            if (rotations[i] == goal)
                return true;
        }

        return false;
    }
};