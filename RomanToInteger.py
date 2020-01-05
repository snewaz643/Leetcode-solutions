class Solution:
    def romanToInt(self, s: str) -> int:
        mapping = {}
        mapping["I"] = 1
        mapping["V"] = 5
        mapping["X"] = 10 
        mapping["L"] = 50
        mapping["C"] = 100
        mapping["D"] = 500
        mapping["M"] = 1000
        
    
        ans = 0
        for i in range(len(s)):  
            curr = mapping[s[i]]
            if (i+1 < len(s) and mapping[s[i+1]] > curr):    
                ans -= curr
            else:
                ans += curr        
            
        return ans
