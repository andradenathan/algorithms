class Solution:
  def reverseString(self, s) -> None:
    """
    Do not return anything, modify s in-place instead.
    """
    temp = s[::-1]
    for i in range(len(s)):
      s[i] = temp[i]

example = Solution()
example.reverseString(["h", "e", "l", "l", "o"])