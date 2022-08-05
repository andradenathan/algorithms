from typing import List

def findMedianSortedArrays(nums1: List[int], nums2: List[int]) -> float:
    result = sorted(nums1 + nums2)
    median = len(result) // 2

    if len(result) % 2 == 0:
        return float((result[median-1] + result[median]) / 2)


    return float(result[median])