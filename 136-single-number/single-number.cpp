class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> visited;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int current = nums[i];
            int count = 0;
            if (visited.count(current)) {
                continue;
            }
            for (int j = i; j < n; j++) {
                if (nums[j] == current) {
                    count++;
                }
            }
            // Insert current in set
            visited.insert(current);

            if (count == 1) {
                return current;
            }
        }
        return -1;
    }
};