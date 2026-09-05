# 141. Linked List Cycle

## cpp — v3 (2026-09-05)

- Problem: https://leetcode.com/problems/linked-list-cycle/
- Time complexity: O(N)
- Space complexity: O(1)
- Solution file: [`cpp_v3.cpp`](./cpp_v3.cpp)

The algorithm uses Floyd's Cycle-Finding Algorithm (two pointers: fast and slow). The slow pointer moves one step at a time while the fast pointer moves two steps at a time. If there is a cycle, the fast pointer will eventually catch up to the slow pointer; otherwise, fast reaches the end of the list.

---
## cpp — v2 (2026-09-05)

- Problem: https://leetcode.com/problems/linked-list-cycle/
- Time complexity: _not specified_
- Space complexity: _not specified_
- Solution file: [`cpp_v2.cpp`](./cpp_v2.cpp)

Floyd's cycle detection algorithm

---
## cpp — v1 (2026-09-05)

- Problem: https://leetcode.com/problems/linked-list-cycle/
- Time complexity: _not specified_
- Space complexity: _not specified_
- Solution file: [`cpp_v1.cpp`](./cpp_v1.cpp)

hashmap, keep checking if previous node was present

---
