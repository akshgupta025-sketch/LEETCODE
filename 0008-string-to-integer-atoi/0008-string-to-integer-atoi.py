class Solution:
    INT_MAX = 2**31 -1
    INT_MIN = -2**31
    def help(self,s , i , num , sign):
        if i>=len(s) or not s[i].isdigit() :
            return sign*num
        num = num*10 + int(s[i])
        if sign*num >=self.INT_MAX : return self.INT_MAX
        if sign*num <=self.INT_MIN : return self.INT_MIN

        return self.help(s,i+1,num,sign)    
    def myAtoi(self, s: str) -> int:
        i = 0
        while i<len(s) and s[i] == ' ':
            i+=1
        sign = 1
        if i<len(s) and  (s[i]=='+' or s[i]=='-'):
            if s[i]=='-':
                sign = -1
            else:
                sign = 1    
            i+=1
        return self.help(s,i,0,sign)    