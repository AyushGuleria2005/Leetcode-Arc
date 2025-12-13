/**
 * @param {number} target
 * @param {number[]} nums
 * @return {number}
 */
var minSubArrayLen = function(target, nums) {
    const n = nums.length;
    let min_length = Infinity;
    let result = 0;
    let low = 0;
    let high = 0;
    let sum = 0;
    sum = sum + nums[high];
    // console.log(n)
    while(high<=n){
        if(!(sum >= target)){
            high++;
            sum = sum + nums[high];
        }
        else{
            min_length = Math.min(min_length,high-low+1);
            result = min_length;
            low++;
            sum = sum - nums[low-1]
        }
    }
    return result
};