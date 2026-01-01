class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        string result = "";
        int carry = 0; // 1
        while (i >= 0 || j >= 0 || carry != 0) {
            int sum_of_two = 0;
            if (j < 0 && i >= 0) {
                sum_of_two = (num1[i] - '0') + carry;
            } else if (i < 0 && j >= 0) {
                sum_of_two = (num2[j] - '0') + carry;
            } else if (i < 0 && j < 0 && carry != 0) {
                sum_of_two = carry;
            } else {
                sum_of_two = (num1[i] - '0') + (num2[j] - '0') + carry;
            }
            carry = 0; // Because we used it
            i--;
            j--;

            if (sum_of_two > 9) {
                // Not to send complete number
                // Ones place => will be added
                // Twos place => carried
                carry = sum_of_two / 10;
                result = char(((sum_of_two) % 10) + '0') + result;
                continue;
            }
            result = char(sum_of_two + '0') + result;
        }
        return result;
    }
};