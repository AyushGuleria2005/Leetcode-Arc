class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();

        int m = t.length();

        map<char, int> s_map;
        map<char, int> t_map;

        // Inserting the freq of char of s in its map
        for (int i = 0; i < n; i++) {
            s_map[s[i]]++;
        }

        // Inserting the freq of char of t in its map
        for (int i = 0; i < m; i++) {
            t_map[t[i]]++;
        }

        // Checking if both the maps are equal or not
        if (s_map == t_map) {
            return true;
        }
        return false;
    }
};