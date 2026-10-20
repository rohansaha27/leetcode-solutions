# 853. Car Fleet

## cpp — v1 (2026-10-20)

- Problem: https://leetcode.com/problems/car-fleet/
- Time complexity: O(n log n)
- Space complexity: O(n)
- Solution file: [`cpp_v1.cpp`](./cpp_v1.cpp)

The problem in one line. Cars on a one-lane road, all heading to target. A faster car that catches a slower one gets stuck behind it and they become a fleet. Count how many fleets arrive.

ignore trying to find out where cars meet. For each car, compute its solo arrival time, (target - position) / speed. 

A car behind merges into the fleet ahead if its solo time is less than or equal to that fleet’s arrival time. 

Reason: it starts behind, and if it would arrive first or tied, the order would have to flip, which means it caught up at some point and got stuck. If its time is greater, it never catches up and forms its own fleet.

Algorithm.

Pair each position with its solo time, using doubles.
Sort by position, closest to the target first. (rbegin, rend)
Walk the cars in that order, tracking T, the arrival time of the fleet directly ahead (starts at 0).
If a car’s time > T, it’s a new fleet: increment the count and set T to its time. Otherwise it merges, so do nothing.
Return the count.

O(n log n) time for the sort, O(n) space.

---
