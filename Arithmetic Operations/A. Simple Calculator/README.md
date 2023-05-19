# [A. Simple Calculator](https://codeforces.com/group/6uhngucRCe/contest/429626/problem/A)
> *This problem prompts you to print the sum, product, and the difference of two given numbers X and Y.

+ Print the result of each operation on a single line
+ Use the same exact spacing as in the statement:
  + ```X + Y = Sum```
  + ```X * Y = Product```
  + ```X - Y = Difference```
+ Store the values X and Y in ```long long``` variables.
> Although the values X and Y will fit in the 32-bit datatype ```int```, their product won't, because at X = 10<sup>5</sup>, Y = 10<sup>5</sup> - The values of X and Y at maximum given constraints -, their product will be equal to 10<sup>5</sup> * 10<sup>5</sup> = 10<sup>10</sup>, which is greater than the maximum value that can be stored in an int variable (Roughly around 2 * 10<sup>9</sup>)
// We need to use long long because although the value of a and b is
    // within the boundaries of the datatype int, the value of their
    // product can reach 10^10, which can't be stored in a variable of type int