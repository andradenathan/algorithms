def diagonalDifference(arr):
  left = 0
  right = 0
  dim = len(arr)
  for i in range(dim):
    left += arr[i][i]
    right += arr[i][dim-i-1]

  return abs(left - right)