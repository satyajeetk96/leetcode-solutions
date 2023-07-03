#A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        newStr = ""
        for c in s:
            if((c >= 'a' and c <= 'z') or (c>='0' and c<='9')):
                newStr = newStr+c

        n = len(newStr)
        for i in range(n):
            if(i<=n-1-i):
                if(newStr[i]!=newStr[n-1-i]):
                    return False
        return True
