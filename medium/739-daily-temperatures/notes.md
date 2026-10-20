# 739. Daily Temperatures

## cpp — v1 (2026-10-20)

- Problem: https://leetcode.com/problems/daily-temperatures/
- Time complexity: _not specified_
- Space complexity: _not specified_
- Solution file: [`cpp_v1.cpp`](./cpp_v1.cpp)

monotonic stack of unresolved indices, O(n)
Pop while today is warmer than top, recording i - idx as the wait.

---
