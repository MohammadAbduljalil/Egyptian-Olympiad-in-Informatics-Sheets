# [K. Interval](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/K)
> *This problem prompts you to determine the interval that a given number X belongs to, or state the it doesn't belong to any interval donated in the statement.*

+ Use an ```if``` condition to check whether X belongs to each interval
+ For the number X to belong to the interval ```(a, b]```, X has to be greater than a and less than or equal to b
+ Use the ```&&``` operator when validating multiple conditions is needed
+ If the number X doesn't satify any of the conditions ie doesn't belong to any interval, print ```Out of Intervals```