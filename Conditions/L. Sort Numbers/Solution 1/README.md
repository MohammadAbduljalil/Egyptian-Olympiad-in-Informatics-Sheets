# [L. Sort Numbers](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/L)
> *This problem prompts you to print the given numbers a, b, and c in ascending order and in the order they were donated in the input respectively.*

+ Use three variables to store the minimum, maximum and middle values.
> + Remember that: if the number a is smaller than or equal to b, and also smaller than or equal to c, then a is the minimum.
> + Similarly, if a is greater than or equal to b and also greater than or equal to c, then a is the maxmimum.

+ Use ```if``` conditions to determine the minimum and maximum values
+ Notice that the since the three number a, b, and c, should be the same as the three numbers minimum, maximum, and middle, only rearranged, therefore their sum must be equal, which we can utilize to determine the value of the middle number by knowing the minimum and maximum as follows:

minimum + maximum + middle = a + b + c
middle = a + b + c - maximum - minimum 

+ Therefore the middle number will always be equal to the sum of the three numbers minus the minimum and the maximum ```a + b + c - minimum - maximum```
+ After knowing the three values print the minimum, middle, and maximum respectively, then print the numbers a, b, and c
+ Use the same spacing as the statement