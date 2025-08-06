# Overview
This is a problem that is tagged as easy however is regarded as having the difficulty of medium 
level of leetcode question.

find the gcd of the two strings and return the greatest substring between the two that acts as a
common multiple

## Solution so far
```{C++}
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    //like finding the greatest common substring for both strings
    //find the shortest substring between the two and check if it could be a multiple of either string
    //check if length of string is divisible by length of the longest possible substring, then iterate downwards
    //
    string ans = "";
    string base = str1;
    if(str1 % base != 0 || str2 % base != 0) {

    }
    return base;
        }
};
```



