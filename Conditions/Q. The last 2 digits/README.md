# [Q. The last 2 digits](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/Q)
> *This problem prompts you to print the last two digits of the product of four given numbers.*

In this problem we will need to use some mathematical knowledge of modular arithmetic:
+ First, the last two digits of any number ```n``` can be calculated as ```n % 100```, because it will always be the remainder of the integer division by 100
+ The result that we want is now given by the formula ```(a ⋅ b ⋅ c ⋅ d) % 100```
+ At maximum constraints: a, b, c, and d can all be equal to 10<sup>9</sup>, so the product of the numbers might reach 10<sup>9</sup> ⋅ 10<sup>9</sup> ⋅ 10<sup>9</sup> ⋅ 10<sup>9</sup> = 10<sup>36</sup>, which is too big to store in any datatype.
+ For this we need to modify the formula based on the following identity:
```(a ⋅ b) % m = ((a % m) ⋅ (b % m)) % m```
So the formula will now be:
```((a % 100) ⋅ (b % 100) ⋅ (c % 100) ⋅ (d % 100)) % 100```
+ Now the result of the multiplication will always fit in the datatype ```int```, as all the numbers are guranteed to be less than 100, because the value ```n % m``` is always in the range ```(0, m - 1)``` inclusive by defination.
+ Finally, if the result is less than 10 (ie one digit), we need to print a zero before the result as the digit before it must have been zero.