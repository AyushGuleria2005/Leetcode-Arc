class Solution {
public:
    int firstUniqChar(string s) {
        bool visited[256] = {false}; // All alphabets are unvisited initially
        int n = s.length();
        for (int i = 0; i < n; i++) {
            char current = s[i];
            int current_int = (int)current;
            // What is my element is unvisited
            // No need to do anything just move to
            // next number
            if (visited[current_int]) {
                continue;
            }

            int count = 0;
            for (int j = i; j < n; j++) {
                if (current == s[j]) {
                    count++;
                }
            }
            visited[current_int] = true;
            if (count == 1) {
                return i;
            }
        }
        return -1;
    }
};