class Solution {
public:
    int maxPower(string s) {
        int n = s.length();
        int i = 0;
        int max_count = 0;
        while (i < n) {
            char current_char = s[i];
            int count = 0;
            while (i < n && s[i] == current_char) {
                count++;
                i++;
            }
            max_count = max(max_count, count);
        }
        return max_count;
    }
};