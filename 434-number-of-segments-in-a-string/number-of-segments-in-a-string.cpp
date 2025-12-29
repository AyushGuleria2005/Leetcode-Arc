class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        string word="";
        int n = s.length();
        for(int i=0;i<n;i++){
            //Ignore whitespace
            if(isspace(s[i])){
                if(word==""){
                    continue;
                }
                count++;
                word=""; //Reset
            }
            else{
                //Not a whitespace => form the word
                word = word + s[i];
                if(i==n-1){
                    count++;
                }
            }
        }
        return count;
    }
};