/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
  const s = new Set();

  for (let num of nums) {
    if (s.has(num)) {
      return true;
    }

    s.add(num);
  }

  return false;
};