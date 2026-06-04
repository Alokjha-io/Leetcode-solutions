class Solution(object):
    def plusOne(self, digits):
        z = []
        for x in digits:
            z.append(str(x))
        a = "".join(z)
        b = int(a) + 1
        c = str(b)
        d = [int(char) for char in c]
        return d




        
        
            
        
        
        
        
        
        