class Solution:
    def isPalindrome(self, x: int) -> bool:
        string = str(x)
        return all(string[i]== string[-(i+1)] for i in range(len(string)))
