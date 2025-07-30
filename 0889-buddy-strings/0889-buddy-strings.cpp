class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        if (s == goal) {
            unordered_map<char, int> mp;
            for (char c : s) {
                mp[c]++;
                if (mp[c] >= 2) return true;
            }
            return false;
        }

        vector<int> diff;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) diff.push_back(i);
        }

        if (diff.size() != 2) return false;

        return s[diff[0]] == goal[diff[1]] && s[diff[1]] == goal[diff[0]];
    }
};
