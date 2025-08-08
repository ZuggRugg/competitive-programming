// example Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

// uses two pointers
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 1) { return s; }

        int one, two;

        one = 0;
        two = s.length();

	// for later (figure out whether you need to actually do all these test cases or find better solution)
        for(size_t i=0; i<s.length(); ++i) {
	  if(s[one] == s[two]) { ++one; --two; }
	  else if((s[one] != s[two]) && one==0 ) { --two; }

	  if((one == two) && (s[one] == s[two])) { return s; }
        }
        
    }
};
