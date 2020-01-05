class Solution:
    def myAtoi(self, str: str) -> int:
        #get rid of whitespaces
        str = str.strip()
        
        # first check if there exists an empty string return 0
        # 0 signifies invalid sequence provided
        if not str :    
            return 0
        negative = 0
        result = 0
        
        # if first character is negative or not
        if str[0] == "-":
            negative = True
        elif str[0] == "+":
            negative = False
        # if first character is a non numeric
        elif not str[0].isnumeric():
            return 0
        # if first character is numerical -> ord ('45') - ord ('0') = 45
        else:
            result = (ord(str[0]) - ord("0"))
        
        # loop through rest
        for i in range(1, len(str)):
            # 456 -> 4*10 +5 = 45 -> 45*10 + 6 = 456 
            if str[i].isnumeric():
                result = result*10 + (ord(str[i]) - ord("0"))
                #check for integer overflow as mentioned in question
                if negative and result >= 2147483648:
                    return -2147483648
                elif not negative and result >= 2147483647: 
                    return 2147483647
            # if a non numerical character is then encountered after a numerical value
            else:
                break
            
        # take into account of the sign first encountered
        if negative:
            return -result
        else:
            return result
