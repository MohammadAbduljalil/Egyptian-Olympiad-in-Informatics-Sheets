# [R. Hard Compare](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/R)
> *This problem prompts you to check whether the inequality **A<sup>B</sup> > C<sup>D</sup>** is correct, given the four numbers A, B, C, and D.*

+ Inititally this problem looks almost impossible to solve as the values A<sup>B</sup> and C<sup>D</sup> can be too huge to calculate or store, but the trick is to use logarithms.
+ When applying the log function on both sides of the inequality, it holds if it was initially correct.
+ After applying the logarithm simplify the inequality using the logarithms' properties as follows:
log(A<sup>B</sup>) > log(C<sup>D</sup>)
B ⋅ log(A) > D ⋅ log(C)
+ Therefore you can validate the inequality **A<sup>B</sup> > C<sup>D</sup>** by validating the inequality **B ⋅ log(A) > D ⋅ log(C)**, as the correctness of the second inequality implies the correctness of the first one.
+ To calculate ```log(A)``` and ```log(C)```, you can use the builtin ```log()``` function found in the header ```<cmath>``` which calculates the natural logarithm of the number ln(n) or log<sub>e</sub>(n)
> Notice that the base of the logarithm doesn't matter as long as you use the same base for both sides or the inequality
