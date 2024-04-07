class Solution(object):
    def reverseWords(self, s):
   
        s = s.strip()
        words = s.split()
        words.reverse()    #returns none so cannto equate
        string = ' '.join(words)
        return string
