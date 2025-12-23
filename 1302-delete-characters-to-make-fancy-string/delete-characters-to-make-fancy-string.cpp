class Solution {
public:
    string makeFancyString(string s) {
        vector<char> ans;
        int n = s.length();
        int i = 0;
        while (i < n) {
            char current_char = s[i];
            int count = 0;
            while (i < n && s[i] == current_char) {
                count++;
                i++;
            }
            if (count >= 2) {
                for (int i = 0; i < 2; i++) {
                    ans.push_back(current_char);
                }
            } else if (count == 1) {
                ans.push_back(current_char);
            }
        }
        string result = string(ans.begin(), ans.end());
        return result;
    }
};