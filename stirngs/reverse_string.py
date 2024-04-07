#problem :  https://leetcode.com/problems/reverse-words-in-a-string/?envType=study-plan-v2&envId=top-interview-150

class Solution(object):
    def reverseWords(self, s):
   
        s = s.strip()
        words = s.split()
        words.reverse()    #returns none so cannto equate
        string = ' '.join(words)
        return string
