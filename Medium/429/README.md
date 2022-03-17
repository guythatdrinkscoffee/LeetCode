# 429. N-ary Tree Level Order Traversal

# Problem Description

Given an n-ary tree, return the level order traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).

# Test Cases

- Input: root = [1,null,3,2,4,null,5,6]
- Output: [[1],[3,2,4],[5,6]]

## Solution

Pattern used: Breadth-First Search, Level-Order Traversal