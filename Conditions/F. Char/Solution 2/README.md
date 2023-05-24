# [F. Char](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/F)
> *This problem prompts you to toggle the given letter's character.*

After implementing the intended conditions solution, I want to introduce you to two very important builtin functions in C++
+ Include the header ```<cctype>``` that contains the functions:
  + ```tolower()```
  + ```toupper()```
+ After checking whether the letter is lower or upper case, use the function ```tolower()``` to convert it to lowercase if it's uppercase amd ```toupper()``` to do the opposite
