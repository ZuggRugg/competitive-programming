// This solution uses a stack and checks to see if what you're pushing is a valid character
// I created a check to make sure it is an even numbered string (everything should be closed in pairs of 2, so odd numbered would be invalid)
// then checks if the stack is not empty and that the top of the stack is equal to a closing character like '}', ')'
// using ASCII code characters to ensure.
class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0) { return false; }

        stack<char> sk;

        for(size_t i=0; i<s.length(); i++) {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
                sk.push(s[i]);
            } else if(!(sk.empty()) && (sk.top() == s[i]-1 || sk.top() == s[i]-2)) {
                sk.pop();
            } else { return false; }
        }

        if(sk.empty()) {
            return true;
        } else { return false; }

    }
};

// another way to do the boundary check (without ASCII values)
else if(!sk.empty() && 
        ((s[i] == ')' && sk.top() == '(') || 
         (s[i] == ']' && sk.top() == '[') || 
         (s[i] == '}' && sk.top() == '{'))) {
    sk.pop();
}

// This is the simplified version of the logic with no abstractions, you are comparing the current char with the top of the stack to make sure they match
