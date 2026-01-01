class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1; // a
        int j = b.length() - 1; // b
        string res = "";
        int carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            // total=>0,1,2,3
            int total = carry;
            if (i >= 0) {
                total += a[i--] - '0';
            }
            if (j >= 0) {
                total += b[j--] - '0';
            }
            // Getting that sumbit
            int sum_bit = total % 2;
            carry = total / 2;
            res.push_back(sum_bit + '0');
        }
        reverse(res.begin(), res.end());
        return res;
    }
};