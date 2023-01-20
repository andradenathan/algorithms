def sortedSquares(nums):
  return sorted(nums[i] ** 2 for i in range(len(nums)))

print(sortedSquares([-4,-1,0,3,10]))