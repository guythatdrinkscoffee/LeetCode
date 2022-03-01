# 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

# Problem Description

Given an array of integers arr and two integers k and threshold, return the number of sub-arrays of size k and average greater than or equal to threshold.

# Test Cases

- Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
- Output: 3

Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).

## Solution

Pattern used: Sliding Window