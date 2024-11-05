/*     Scroll below to see JAVA code also    */
/*
    MY YOUTUBE VIDEO ON THIS Qn : 
    Company Tags                : will update soon
    Leetcode Link               : https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful
*/


/**************************************************************** C++ ****************************************************************/
//Approach-1 (Simple iterate and count and keep track)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int minChanges(string s) {
        char curr = s[0];

        int count = 0;
        int changes = 0;
        int n = s.length();

        // Iterate through each character in the string
        for (int i = 0; i < n; i++) {
            // If current character matches the previous sequence
            if (s[i] == curr) {
                count++;
                continue;
            }

            // If we have even count of characters, start new sequence
            if (count % 2 == 0) {
                count = 1;
            }
            // If odd count, we need to change current character
            // to match previous sequence
            else {
                count = 0;
                changes++;
            }

            // Update current character for next iteration
            curr = s[i];
        }

        return changes;
    }
};


//Approach-2 (Simple iterate and count and keep track)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int minChanges(string s) {
        int changes = 0;
        int n = s.length();

        for (int i = 0; i < n; i += 2) {

            if (s[i] != s[i + 1]) {
                changes++;
            }
        }

        return changes;
    }
};



/**************************************************************** JAVA ****************************************************************/
//Approach-1 (Simple iterate and count and keep track)
//T.C : O(n)
//S.C : O(1)
class Solution {
    public int minChanges(String s) {
        char curr = s.charAt(0);

        int count = 0;
        int changes = 0;
        int n = s.length();

        // Iterate through each character in the string
        for (int i = 0; i < n; i++) {
            // If current character matches the previous sequence
            if (s.charAt(i) == curr) {
                count++;
                continue;
            }

            // If we have even count of characters, start new sequence
            if (count % 2 == 0) {
                count = 1;
            }
            // If odd count, we need to change current character
            // to match previous sequence
            else {
                count = 0;
                changes++;
            }

            // Update current character for next iteration
            curr = s.charAt(i);
        }

        return changes;
    }
}


//Approach-2 (Simple iterate and count and keep track)
//T.C : O(n)
//S.C : O(1)
class Solution {
    public int minChanges(String s) {
        int changes = 0;
        int n = s.length();

        for (int i = 0; i < n - 1; i += 2) {
            if (s.charAt(i) != s.charAt(i + 1)) {
                changes++;
            }
        }

        return changes;
    }
}