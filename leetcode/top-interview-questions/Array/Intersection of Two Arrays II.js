/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function(nums1, nums2) {
  let m = new Map();

  for (let num of nums1) {
    m.set(num, (m.get(num) || 0) + 1);
  }

  for (let num of nums2) {
    
  }

};


let nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4];