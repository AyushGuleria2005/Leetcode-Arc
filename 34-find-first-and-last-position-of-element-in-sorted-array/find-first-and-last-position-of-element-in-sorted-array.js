/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    const findLeftMost = (nums,target) => {
        let left = 0;
        let right = nums.length-1;
        let left_most = -1;
        while(left <= right){
            let mid = Math.floor((left+right)/2)
            if(nums[mid] === target){
                left_most = mid //possible left_most
                right = mid - 1;
            }
            else if (nums[mid]>target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return left_most;
    }
    const findRightMost = (nums,target) => {
        let left = 0, right = nums.length-1;
        let right_most = -1;
        while(left<=right){
            let mid = Math.floor((left+right)/2);
            if(nums[mid] === target){
                right_most = mid //possible right_most;
                left = mid+1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return right_most;
    }

    let left_most = findLeftMost(nums,target);
    let right_most = findRightMost(nums,target);

    return [left_most,right_most];
};