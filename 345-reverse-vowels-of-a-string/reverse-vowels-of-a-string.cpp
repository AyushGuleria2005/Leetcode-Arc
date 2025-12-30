class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        stack<char> st;
        // Put vowels into the queue as we iterate through s
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                st.push(s[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                // Vowel hai toh replace with value at top of stack
                s[i] = st.top();
                st.pop();
            }
        }
        return s;
    }
};