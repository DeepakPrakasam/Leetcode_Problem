class Solution:
    def orderlyQueue(self, string: str, k: int) -> str:
        # If k is equal to 1, we can only rotate the string.
        if k == 1:
            # Initialize the answer with the original string.
            answer = string
            # Iterate over the string, excluding the last character,
            # since the last rotation would return the string to the original state.
            for _ in range(len(string) - 1):
                # Rotate the string by moving the first character to the end.
                string = string[1:] + string[0]
                # Update the answer if the new string is lexicographically smaller.
                answer = min(answer, string)
            # Return the lexicographically smallest string after all rotations.
            return answer
        # If k is greater than 1, we can sort the string to get the smallest possible string.
        else:
            # Convert the string into a sorted list of characters and join them back into a string.
            return "".join(sorted(string))