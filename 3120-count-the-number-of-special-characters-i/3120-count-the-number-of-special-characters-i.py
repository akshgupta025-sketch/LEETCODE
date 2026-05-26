class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        n = len(word)
        mp = {}
        for i in range(n):
            if word[i] in mp:
                mp[word[i]]+=1
            else:
                mp[word[i]]=1    

        cnt = 0
        for key in mp:
            x = key.upper()
            if x in mp and key.islower():
                cnt+=1    

        return cnt        