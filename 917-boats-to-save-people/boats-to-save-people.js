/**
 * @param {number[]} people
 * @param {number} limit
 * @return {number}
 */
var numRescueBoats = function(people, limit) {
    const n = people.length;
    people.sort((a,b)=>a-b);
    let i = 0;
    let j = n-1;
    let count = 0;
    while(i<=j){
        //We found perfect weight to carry
        if(people[i]+people[j] === limit || i===j){
            count++;
            i++;
            j--;
        }
        else if(people[i]+people[j] > limit){
            count++;
            j--;
        }
        else if(people[i]+people[j] < limit){
            count++;
            i++;
            j--;
        }
        
    }
    return count;
};