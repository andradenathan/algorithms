def merge(nums1, m, nums2, n) -> None:
  temp = nums1[:m] + nums2[:n]
  nums1 = sorted(temp)
  
merge([0,0,1,2,4],5,[1],1)
