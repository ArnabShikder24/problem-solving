/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */

var intersect1 = function(nums1, nums2) {
  let m = new Map();
  const arr = new Array();

  if (nums1.length <= nums2.length) {
    for (let num of nums1) {
      m.set(num, (m.get(num) || 0) + 1);
    }
  } else {
    for (let num of nums2) {
      m.set(num, (m.get(num) || 0) + 1);
    }
  }

  if (nums1.length <= nums2.length) {
    for (let num of nums2) {
      if (m.get(num) > 0) {
        arr.push(num);
        m.set(num, m.get(num) - 1);
      }
    }
  } else {
    for (let num of nums1) {
      if (m.get(num) > 0) {
        arr.push(num);
        m.set(num, m.get(num) - 1);
      }
    }
  }

  return arr;
};
// simplefied 
var intersect = function (nums1, nums2) {
  
  if (nums1.length > nums2.length) {
    [nums1, nums2] = [nums2, nums1];
  }

  let m = new Map();
  const arr = new Array();

  for (let num of nums1) {
    m.set(num, (m.get(num) || 0) + 1);
  }

  for (let num of nums2) {
    if (m.get(num) > 0) {
      arr.push(num);
      m.set(num, m.get(num) - 1);
    }
  }

  return arr;
};

// Simplified

let nums1 = [4, 9, 5], nums2 = [9, 4, 9, 8, 4];

console.log(intersect(nums1, nums2));