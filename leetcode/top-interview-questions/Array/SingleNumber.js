/**
 * @param {number[]} nums
 * @return {number}
 */
// var singleNumber = function(nums) {
//   let m = new Map();

//   for (let num of nums) {
//     m.set(num, (m.get(num) || 0) + 1);
//   }

//   for (let [key, value] of m) {
//     if (value === 1) return key;
//   }
// };
// o(1) space soluation and o(n)
var singleNumber = function(nums) {
  let singN = 0;

  for (let num of nums) {
    singN ^= num;
  }

  return singN;
};


let nums = [4, 1, 2, 1, 2];

singleNumber(nums)