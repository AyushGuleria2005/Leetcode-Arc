class Solution {
public:
    bool isPalindrome(string s) {
        int count = 0;
        int n = s.length();
        // Clean this string
        string clean = "";
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                // If it is alpha numeric we form the word
                clean += char(tolower(s[i]));
            } else {
                continue;
            }
        }
        int m = clean.length();
        bool isPali = true;
        for (int i = 0; i < m / 2; i++) {
            if (clean[i] == clean[m - i - 1]) {
                isPali = true;
            } else {
                isPali = false;
                break;
            }
        }
        return isPali;
    }
};