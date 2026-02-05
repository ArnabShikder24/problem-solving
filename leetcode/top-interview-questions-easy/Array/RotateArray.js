/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
  const n = nums.length;
  const newArr = new Array(n);
  
  for (let i = 0; i < n; i++) {
    newArr[(i + k) % n] = nums[i];
  }

  for (let i = 0; i < n; i++) {
    nums[i] = newArr[i];
  }
};
//  O(1) extra space
var rotate1 = function (nums, k) {
  k %= nums.length;
  let l = 0;
  let r = nums.length - 1;

  while (l < r) {
    [nums[l], nums[r]] = [nums[r], nums[l]]
    l++;
    r--;
  }

  l = 0;
  r = k - 1;
  while (l < r) {
    [nums[l], nums[r]] = [nums[r], nums[l]]
    l++;
    r--;
  }

  l = k;
  r = nums.length - 1;
  while (l < r) {
    [nums[l], nums[r]] = [nums[r], nums[l]]
    l++;
    r--;
  }

};



const nums = [1, 2, 3, 4, 5, 6, 7], k = 3;
const nums2 = [-1, -100, 3, 99], k2 = 2;

rotate(nums);
