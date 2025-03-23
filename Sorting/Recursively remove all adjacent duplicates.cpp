// https://www.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // This function recursively removes adjacent duplicate characters from the string
      // `s`.
      string removeUtil(string &s) {
          int len = s.length(); // Get the length of the input string.
          int n = len;          // Store the original length for reference.
          int k =
              0; // Pointer to track the position of characters in the modified string.
  
          // Traverse the string using a loop.
          for (int i = 0; i < n; i++) {
              // Check if the current character and the next character are the same.
              if (i < n - 1 && s[i] == s[i + 1]) {
                  // Skip all consecutive duplicate characters.
                  while (i < n - 1 && s[i] == s[i + 1]) {
                      i++; // Move to the last duplicate character.
                  }
              } else {
                  // If no duplicates are found, add the current character to the modified
                  // string.
                  s[k++] = s[i];
              }
          }
          cout << s << "---\n";
  
          // Erase all characters from position `k` to the end of the string.
          s.erase(k);
          cout << s << "******\n";
          // If the length of the modified string has changed (duplicates were removed),
          // recursively call the function to check for more adjacent duplicates.
          if (k != n)
              removeUtil(s);
  
          // Return the final string with no adjacent duplicates.
          return s;
      }
};

int main() {

}