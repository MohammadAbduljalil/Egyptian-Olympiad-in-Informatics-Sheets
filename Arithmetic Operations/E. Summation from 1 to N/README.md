# [E. Summation from 1 to N](https://codeforces.com/group/6uhngucRCe/contest/429626/problem/E)
> *This problem prompts you to print the summation of all the numbers from 1 to a given numbers N.*

+ Use the formula ```(N ⋅ (N + 1)) / 2``` to calculate the sum
+ Use a variable of type ```long long``` to store the number N, as the value of the intermediate result of the calculation may exceed the maximum value of the integer datatype, causing it to overflow.

> To deduce this formula, you may assume the value of the sum to be S, then do as follows:
Start by arranging the numbers from 1 to N ascendingly, and make their sum equal to S, as follows:

1 + 2 + 3 + ... + (N - 2) + (N - 1) + N = S
Then arrange them descendingly, and also make their sum equal to S, as follows:
N + (N - 1) + (N - 2) + ... + 3 + 2 + 1 = S
Proceed by adding the two equations:

  *1 + 2 + 3 + ... + (N - 2) + (N - 1) + N     = S*
*\+ N + (N - 1) + (N - 2) + ... + 3 + 2 + 1     = S*
*-----------------------------------------------------*
  *(N + 1) + (N + 1) + (N + 1) + (N + 1) + ... = 2 ⋅ S*
Since there are n numbers in the left hand side, you may rewrite the equation as:

*N ⋅ (N + 1) = 2 ⋅ S*
And by rearranging the equation:

```*S = (N ⋅ (N + 1)) / 2*```
