/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
    const n = nums.length;
    let min_diff = Infinity;
    let best_sum = Infinity
    nums.sort((a,b)=>a-b)

    for(let k = 0; k < n-2; k++){
        let i = k+1;
        let j = n-1;
        while(i<j){
            let sum = nums[k]+nums[i]+nums[j];
            let diff = Math.abs(sum - target);
            
            if(diff < min_diff){
                min_diff = diff;
                best_sum = sum
            }
            
            if(sum === target){
                return sum
            }
            else if(sum < target){
                i++;
            }
            else if(sum > target){
                j--;
            }

        }
    }
    return best_sum;
};

console.log(threeSumClosest([0,0,0],1))