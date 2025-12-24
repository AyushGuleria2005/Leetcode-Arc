class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int index = 0;
        while(i<n){
            char current_char = chars[i];
            int count = 0;
            while(i<n && chars[i]==current_char){
                count++;
                i++;
            }
            if(count==1){
                chars[index]=current_char;
                index++;
            }
            else if(count>1 && count <10){
                chars[index]=current_char;
                index++;
                chars[index]=count+'0';
                index++;
            }
            else if(count>=10){
                chars[index]=current_char;
                index++;
                string count_string = to_string(count);
                for(char c:count_string){
                    chars[index]=c;
                    index++;
                }
            }
        }
        return index;
    }
};