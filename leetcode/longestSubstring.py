class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) < 2: return len(s)
        left, count = 0,0
        right = left+1
        hashmap = {s[left]: left}
        while right < len(s):
            if s[right] in hashmap:
                left = max(hashmap[s[right]]+1, left)
            hashmap[s[right]] = right
            count = max(count, right - left + 1)
            right += 1
  
        return count