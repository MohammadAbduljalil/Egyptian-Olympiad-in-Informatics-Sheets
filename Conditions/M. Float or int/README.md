# [M. Float or int](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/M)
> *This problem prompts you to determine whether the given value is an integer or a floating point.*

+ Since you don't know if the value contains decimals at the beginning, store the value donated in a variable of type ```double```
+ Create another variable of type ```int``` to store the integer value of the number
+ Notice that if the number is a floating point, casting it to an integer will round it to the the bottom regardless of the decimal
+ If the value is equal to the integer value, then the value is an integer, Otherwise it's a floating point and you should print the integer value then the decimal value
+ The decimal value will always be equal to the difference between the floating point and the integer value