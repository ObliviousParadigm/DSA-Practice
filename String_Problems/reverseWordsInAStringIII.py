class Solution:
    def reverseWords(self, s: str) -> str:
        l = [word[::-1] for word in s.split()]
        return ' '.join(l)