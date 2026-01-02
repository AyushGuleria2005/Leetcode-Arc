class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1;
        vector<int> res;
        int carry = 0;
        while(i>=0 || k>0 || carry){
            int sum = carry;
            if(i>=0){
                sum = sum + num[i--];
            }
            if(k>0){
                sum = sum + (k%10);
                k = k/10;
            }
            res.push_back(sum%10);
            carry=sum/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};