# [F. Char](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/F)
> *This problem prompts you to toggle the given letter's character.*

Just like the previous problem, we will make use of the ASCII table:
+ Given that the difference between the characters 'a' and 'A' is 32, we know that the difference between any lowercase letter and it's uppercase value is 32.
+ To change an uppercase letter to it's lowercase letter you increase the value of the character by 32, and decrease the value by 32 to do the opposite.
+ Check if the character is uppercase, increase the value by 32 to toggle it to lowercase, otherwise decrease the value by 32 to toggle it to uppercase.
> Refer to the last problem ```E. Capital or Small or Digit``` to remember how to check if a letter is lowercase or uppercase.