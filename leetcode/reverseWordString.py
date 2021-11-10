class Solution:
    def reverseWords(self, s: str) -> str:
      s = s.split(" ")
      temp = list()
      for i in s:
        temp.append(i[::-1])
      temp = " ".join(temp)
      return temp

example = Solution()
print(example.reverseWords("Let's take LeetCode contest"))