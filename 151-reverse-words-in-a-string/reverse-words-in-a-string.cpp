class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string result = "";
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                // create the word
                word += s[i];
                if (i == n - 1) {
                    result = word + " " + result;
                }
            } else if (isspace(s[i])) {
                if (word == "") {
                    continue;
                }
                // Ignore the space
                result = word + " " + result;
                word = ""; // reset
            }
        }

        // Remove last space
        result.erase(result.length() - 1, 1);

        return result;
    }
};