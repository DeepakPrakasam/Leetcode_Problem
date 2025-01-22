from collections import Counter

class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        freq = Counter(s)
        
        values = list(freq.values())
        
        return len(set(values)) == 1
