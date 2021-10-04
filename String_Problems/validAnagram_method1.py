class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        
        freq = [0]*256
        
        for i in s:
            freq[ord(i)] += 1
        
        for i in t:
            freq[ord(i)] -= 1
        
        for i in freq:
            if(i):
                return False
        return True