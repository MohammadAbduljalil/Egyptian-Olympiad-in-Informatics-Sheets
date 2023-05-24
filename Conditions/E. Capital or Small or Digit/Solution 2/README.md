# [E. Capital or Small or Digit](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/E)
> *This problem prompts you to check if a given character is a digit, a lowercase letter, or an uppercase letter.*

After implementing the intended conditions solution, I want to introduce you to some very important builtin functions in C++
+ Include the header ```<cctype>``` that contains the functions:
 - ```isdigit()```
 - ```isalpha()```
 - ```isupper()```
 - ```islower()```
+ Call the function ```isdigit()``` with the given character as a parameter, use the boolean value that it will return to know whether the given character is a digit or not.

--> ```isdigit(c)```
+ Use the rest of the functions similarly
