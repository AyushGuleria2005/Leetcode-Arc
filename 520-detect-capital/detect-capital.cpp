class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isCapital = true;
        int n = word.length();
        int Upcount = 0;
        int Lowcount = 0;
        bool first = islower(word[0]); // true or false
        for (int i = 1; i < n; i++) {
            if (first && islower(word[i])) {
                Lowcount++;
            }
            if (!first && isupper(word[i])) {
                Upcount++;
            }
            if (!first && islower(word[i])) {
                Lowcount++;
            }
        }
        if (abs(Upcount - Lowcount) != (n - 1)) {
            isCapital = false;
        }
        return isCapital;
    }
};