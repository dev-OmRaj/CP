class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        s = s+s
        if goal in s:
            return True
        return False
        