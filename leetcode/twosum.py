from typing import List

def two_sum(nums: List[int], target: int) -> List[int]:
    solution = []
    for index in range(1, len(nums)):
        elem = nums[index]
        print(nums[:index])
        if target - elem in nums[:index]:
            solution.append(nums.index(target - elem))
            solution.append(index)
    return solution