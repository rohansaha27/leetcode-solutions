# 4. Median of Two Sorted Arrays

## cpp — v1 (2026-08-14)

- Problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
- Time complexity: O(log(min(m,n)))
- Space complexity: O(1)
- Solution file: [`cpp_v1.cpp`](./cpp_v1.cpp)

Binary search on the smaller array to find the correct partition point, avoiding an actual merge. Fixed the partition size on the second array as half - i so the left side always holds exactly half the total elements, then checked the four border values to confirm a valid split. Had to remember to swap arrays first so the binary search always runs on the smaller one, otherwise j can go negative.

---
