/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
  let profit = 0;
  for (let i = 0; i < prices.length; i++) {
    if (prices[i] < prices[i + 1]) {
      const dif = prices[i + 1] - prices[i];
      profit += dif;
    }
  }
  return profit;
};

const prices = [7, 1, 5, 3, 6, 4];
const prices1 = [1, 2, 3, 4, 5];
const prices2 = [7, 6, 4, 3, 1];

console.log(maxProfit(prices2));
