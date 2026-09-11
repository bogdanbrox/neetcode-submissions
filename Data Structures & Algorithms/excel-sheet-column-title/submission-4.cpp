class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while (columnNumber) {
            int x = (columnNumber - 1) % 26;
            res.push_back((char)(65 + x));
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};