class Solution {
  public:
    bool stringStack(string &pat, string &tar) {
        int n = pat.size(), m = tar.size();
        int i = n - 1, j = m - 1; // Start from the end of both strings
        
        while (i >= 0 && j >= 0) {
            if (pat[i] == tar[j]) {
                // Characters match: simulate a valid append operation
                --i;
                --j;
            } else {
                // Mismatch: simulate a delete operation by skipping two characters in pat
                // (one for the character to delete and one for the delete operation itself)
                i -= 2;
            }
        }
        
        // If we successfully matched all characters in tar, j will be -1
        return (j == -1);
    }
};