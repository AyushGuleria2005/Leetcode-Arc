class Solution {
public:
    bool checkIfPangram(string sentence) {
        // We will cal sum of all alphabets from a to z
        int total = 0;
        for (int i = 97; i < 123; i++) {
            total += i;
        }

        // We inserted all the unique alphabets of the given string into a set
        set<int> char_set;
        for (char c : sentence) {
            char_set.insert((int)c);
        }

        int char_sum = 0;
        auto it = char_set.begin();
        while (it != char_set.end()) {
            char_sum += *it;
            it++;
        }

        // Checking
        if (total == char_sum) {
            return true;
        }
        return false;
    }
};