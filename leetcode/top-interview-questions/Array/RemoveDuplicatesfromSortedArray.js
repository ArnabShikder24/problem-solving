/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let k = 1;
  for (let i = 1; i < nums.length; i++) {
    if (nums[k - 1] !== nums[i]) {
      nums[k] = nums[i];
      k++;
    }
  }
  return k; 
};

const nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
const nums1 = [1, 1, 2];



console.log(removeDuplicates(nums));
console.log(nums);
