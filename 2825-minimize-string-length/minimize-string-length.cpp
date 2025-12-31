class Solution {
public:
    int minimizedStringLength(string s) {
        int n = s.length();
        set<char> unique; 
        for(int i=0;i<n;i++){
            unique.insert(s[i]);
        }
        return unique.size();
    }
};