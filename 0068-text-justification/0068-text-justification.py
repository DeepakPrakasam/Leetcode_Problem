class Solution(object):
    def fullJustify(self, words, maxWidth):
        res = []
        sentence, temp_length = [], 0
        
        for word in words:
            # len(sentence) gives number of spaces required
            if temp_length + len(word) + len(sentence) > maxWidth:  
                # Justify the line
                for i in range(maxWidth - temp_length):
                    sentence[i % (len(sentence) - 1 or 1)] += ' '
                res.append(''.join(sentence))
                sentence, temp_length = [], 0  # Reset for the next line
            
            sentence.append(word)
            temp_length += len(word)
        
        # Last line
        last_line = ' '.join(sentence)
        
        # Fill in the rest with spaces on the right
        last_line += ' ' * (maxWidth - len(last_line))  
        res.append(last_line)
        
        return res