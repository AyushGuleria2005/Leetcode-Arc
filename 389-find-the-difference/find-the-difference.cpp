class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length();
        int m = t.length();
        //Iterating through string s and calculate sum of ascii
        //of each character
        int sum_s = 0;
        for(int i = 0; i < n; i++){
            sum_s+=(int)s[i];
        }

        //Now same for string t
        int sum_t = 0;
        for(int i = 0; i<m; i++){
            sum_t+=(int)t[i];
        }

        return (char)sum_t-sum_s;
    }
};