class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        string result = "";
        string word = "";
        for (int i = 0; i < n; i++) {
            // Ignore white spaces
            if (isalpha(s[i])) {
                // Consider this word
                word = word + s[i];
                if (i == n - 1) {
                    string result = word;
                    return result.length();
                }
            } else if (isspace(s[i])) {
                if (word == "") {
                    continue;
                }
                // Ignore the space
                result = word;
                word = "";
            }
        }
        return result.length();
    }
};