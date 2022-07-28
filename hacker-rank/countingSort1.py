def countingSort(arr):
  result = [0] * 100
  for elem in arr:
    result[elem] += 1
  return result