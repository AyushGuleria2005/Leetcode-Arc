class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int length = nums.size();
        int n = length / 2;
        map<int, int> freq;
        for (int i = 0; i < length; i++) {
            freq[nums[i]]++;
        }
        for (auto [key, value] : freq) {
            if (value == n) {
                return key;
            }
        }
        return -1;
    }
};