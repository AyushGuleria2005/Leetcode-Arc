class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int count = 0;
        while (i < n - count) {
            if (nums[i] == 0) {

                // Left shift
                int j = i + 1;
                while (j < n - count) {
                    nums[j - 1] = nums[j];
                    j++;
                }
                count++; // 1
                nums[n - count] = 0;
            } else {
                i++;
            }
        }
    }
};