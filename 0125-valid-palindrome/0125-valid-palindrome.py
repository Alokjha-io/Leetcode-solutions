class Solution(object):
    def isPalindrome(self, s):
        words = s.split()
        sen = "".join(words)
        sen1 = []
        for x in sen:
            if x.isalnum():
               sen1.append(x)
        sen2 = "".join(sen1)
        sen3 = sen2.lower()
        rev = sen3[::-1]
        if rev == sen3:
            return True
        else:
            return False
        
        
        
        