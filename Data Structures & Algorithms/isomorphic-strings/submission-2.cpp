class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> key1, key2;
        for (int i = 0; i < s.size(); ++i) {
            char x = tolower(s[i]), y = tolower(t[i]);
            if (!key1[x] && !key2[y]) {
                key2[y] = x;
                key1[x] = y;
            } else if (key1[x] != y || key2[y] != x) return false;
        }
        return true;
    }
};