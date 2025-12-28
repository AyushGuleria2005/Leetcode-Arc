class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // string words[] = {"hello","world","leetcode"};
        int n = words.size();
        int len = 0;

        // Calculate freq od chars
        // string chars = "welldonehoneyr";
        unordered_map<char, int> freq;
        for (char c : chars) {
            freq[c]++;
        }

        // for(auto it:freq){
        //     cout<<it.first<<" -> "<<it.second<<endl;
        // }

        for (int i = 0; i < n; i++) {
            // We got access to each & every word of "words"
            bool good = false; // Initially its not good
            unordered_map<char, int> temp;
            for (char c : words[i]) {
                temp[c]++;
            }

            for (char c : words[i]) {
                if (temp[c] <= freq[c]) {
                    good = true;
                } else {
                    good = false;
                    break;
                }
            }
            if (good) {
                len += words[i].length();
            }
        }
        return len;
    }
};