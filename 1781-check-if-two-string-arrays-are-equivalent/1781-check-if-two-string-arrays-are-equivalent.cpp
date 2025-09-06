class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0; // word indices
        int m = 0, n = 0; // character indices

        while (i < word1.size() && j < word2.size()) {
            if (word1[i][m] != word2[j][n]) {
                return false; // mismatch
            }

            // move to next character
            m++;
            n++;

            // if end of word1[i], move to next word
            if (m == word1[i].size()) {
                i++;
                m = 0;
            }

            // if end of word2[j], move to next word
            if (n == word2[j].size()) {
                j++;
                n = 0;
            }
        }

        // both arrays should finish at the same time
        return (i == word1.size() && j == word2.size());
    }
};
