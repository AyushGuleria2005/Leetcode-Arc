class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // For scanning through array
        int j = 0; // Puts the element at correct posn
        while (i < n) {
            if (nums[i] != nums[j]) {
                nums[++j] = nums[i];
            }
            i++;
        }
        return j+1;
    }
};