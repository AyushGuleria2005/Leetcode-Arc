class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int max_count = 0;
        while (i < n) {
            int count = 0;
            while (i < n && nums[i] == 1) {
                count++;
                i++;
            }
            i++;
            max_count = max(max_count, count);
        }
        return max_count;
    }
};