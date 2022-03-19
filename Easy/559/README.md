# 559. Maximum Depth of N-ary Tree

# Problem Description

Given a n-ary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value.

# Test Cases

Input: root = [1,null,3,2,4,null,5,6]
Output: 3

## Solution

Pattern used: Breadth-First Search, Level-Order Traversal