class Solution {
public:
    int characterReplacement(string s, int k) {

        // A-Z characters ki frequency store karne ke liye
        vector<int> count(26, 0);

        // Sliding window ka left pointer
        int left = 0;

        // maxFreq = Window ke andar kisi bhi character ki maximum frequency
        // maxLen = Final answer
        int maxFreq = 0, maxLen = 0;

        // Right pointer se window ko expand karo
        for (int right = 0; right < s.length(); right++) {

            // Current character ki frequency increase karo
            count[s[right] - 'A']++;

            // Window ke andar sabse zyada baar aane wale character ki frequency update karo
            maxFreq = max(maxFreq, count[s[right] - 'A']);

            // Agar replace karne wale characters k se zyada ho jaye
            // to window ko left se shrink karo
            while ((right - left + 1) - maxFreq > k) {

                // Left character ko window se hatao
                count[s[left] - 'A']--;

                // Left pointer ko aage badhao
                left++;
            }

            // Abhi tak ki sabse badi valid window ka size store karo
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};