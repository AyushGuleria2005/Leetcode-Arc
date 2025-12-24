class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length(); // 8
        int i = 0;          // 2
        int ans = 0;
        while (i < n) {
            int current_num = s[i]; // 0
            int count = 0;          // 2
            while (i < n && s[i] == current_num) {
                count++;
                i++;
            }
            int j = i;
            int comp_count = 0;
            while (j < n && s[j] != current_num) {
                comp_count++;
                j++;
            }
            ans = ans + min(comp_count, count);
        }

        return ans;
    }
};