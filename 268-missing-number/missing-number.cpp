class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        //Given nums => elements ka sum calculate
        int sum_num = accumulate(nums.begin(),nums.end(),0);
        int total_sum = 0;
        for(int i=0;i<=n;i++){
            //n=3
            // 0,1,2,3
            total_sum+=i;
        }
        return total_sum-sum_num;
    }
};