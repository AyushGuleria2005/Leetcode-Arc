class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_set<int> visited;
        int n = nums.size();
        int majority = INT_MIN;
        int majority_num = -1;
        for (int i = 0; i < n; i++) {
            int current = nums[i];
            int count = 0;
            // First check whether element is visited or not
            if (visited.count(current)) {
                continue;
            }
            for (int j = i; j < n; j++) {
                if (nums[j] == current) {
                    count++;
                }
            }
            visited.insert(current);
            if (count > majority && count > n / 2) {
                majority = count;
                majority_num = current;
            }
        }
        return majority_num;
    };
};