class Solution:
    def minSubarray(self, nums: list[int], p: int) -> int:
        total = sum(nums) % p
        if total == 0:
            return 0

        seen = {0: -1}      # prefix_mod -> latest index
        pref = 0
        best = len(nums) + 1

        for i, x in enumerate(nums):
            pref = (pref + x) % p
            need = (pref - total) % p
            if need in seen:
                length = i - seen[need]
                if length < best:
                    best = length
            # store latest index for this prefix mod
            seen[pref] = i

        return best if best <= len(nums) - 1 else -1
