class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int i = digits.size() - 1;
        int carry = 1;
        while (i >= 0 || carry) {
            int sum = carry; // 1
            if (i >= 0) {
                sum = sum + digits[i--];
            }
            result.push_back(sum % 10);
            carry = sum / 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};