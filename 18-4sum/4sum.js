/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[][]}
 */
var fourSum = function(nums, target) {
    const n = nums.length;
    let result = []
    nums.sort((a,b)=>a-b);
    for(let i = 0; i < n-3; i++){
        //To skip duplicates
        if(i>0 && nums[i]===nums[i-1]) continue;
        for(let k = i+1;k < n-2;k++){
            //To skip duplicates
            if(k>i+1 && nums[k] === nums[k-1]) continue;
            let l = k+1;
            let j = n-1;
            while(l<j){
            let sum = nums[i]+nums[k]+nums[l]+nums[j]
                if(sum === target){
                    result.push([nums[i],nums[k],nums[l],nums[j]]);
                    l++;
                    j--;
                    while(nums[l]===nums[l-1]) l++;
                    while(nums[j]===nums[j+1]) j--;
                }
                else if(sum < target){
                    l++;
                }
                else{
                    j--;
                }
                
            }
            
        }
    }
    return result
};