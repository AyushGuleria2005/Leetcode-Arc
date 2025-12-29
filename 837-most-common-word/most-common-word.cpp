class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n = paragraph.length();
        string word = ""; // hit
        map<string, int> freq;
        for (int i = 0; i < n; i++) {
            // Ignore spaces and punctuations
            if (!isalpha(paragraph[i])) {
                if (word == "") {
                    // To ignore the empty word formed
                    continue;
                }
                // Put words in freq map
                freq[word]++;
                word = ""; // reset the value of word
            } else {
                // We will use thes alpha to form the word
                word = word + char(tolower(paragraph[i]));
                if (i == n - 1) {
                    freq[word]++;
                }
            }
        }

        // Put banned words in a set
        set<string> ban_set;
        for (int i = 0; i < banned.size(); i++) {
            ban_set.insert(banned[i]);
        }

        int max_count = 0;
        string max_word = "";
        for (auto it : freq) {
            if (it.second > max_count && !ban_set.count(it.first)) {
                max_count = it.second;
                max_word = it.first;
            }
        }
        return max_word;
    }
};