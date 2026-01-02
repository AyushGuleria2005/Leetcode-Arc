class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        string res = "";
        int carry = 0; // 1
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum = sum + num1[i--] - '0'; // 1
            }
            if (j >= 0) {
                sum = sum + num2[j--] - '0';
            }
            res.push_back((sum % 10) + '0');
            carry = sum / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};