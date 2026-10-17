# Pushed: 2026-10-17 21:11:10 UTC
# Difficulty: Easy
# Runtime: 54 ms
# Memory: 37 MB

class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        myMap = defaultdict(int)

        for n in nums:
            myMap[n] += 1
            if myMap[n] > 1:
                return True
        return False

        