class Solution {
public:
    int getvalue(char ch) {
        switch (ch) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (getvalue(s[i]) < getvalue(s[i + 1]))
                ans -= getvalue(s[i]);
            else
                ans += getvalue(s[i]);
        }

        ans += getvalue(s[s.length() - 1]);
        return ans;
    }
};