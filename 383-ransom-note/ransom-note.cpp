class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();
        int m = magazine.length();

        map<char, int> ransom_map;
        map<char, int> magazine_map;

        // First i will save counts of all the characters of ransomNote
        for (int i = 0; i < n; i++) {
            ransom_map[ransomNote[i]]++;
        }

        // Now we will save counts of all char of magazine
        for (int i = 0; i < m; i++) {
            magazine_map[magazine[i]]++;
        }

        for (const auto& [key, value] : ransom_map) {
            if (magazine_map.find(key) == magazine_map.end())
                return false;
            if (value > magazine_map[key])
                return false;
        }
        return true;
    }
};