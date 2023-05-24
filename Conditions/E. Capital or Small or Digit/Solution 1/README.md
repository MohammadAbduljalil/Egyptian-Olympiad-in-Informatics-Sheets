# [E. Capital or Small or Digit](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/E)
> *This problem prompts you to check if a given character is a digit, a lowercase letter, or an uppercase letter.*

+ Determine the boundaries of the digit characters, the small letter characters, and the capital letter characters usingthe ASCII table.
> The ASCII table is a table that maps every character to a number, for example the character '0' is mapped to the number 48, you can make use of this table by checking if the character is in the boundaries of the digit characters, the small letter characters, or the capital letter characters.
Refer to the ASCII Table at: https://upload.wikimedia.org/wikipedia/commons/d/dd/ASCII-Table.svg

+ Digit characters are between the numbers 48 and 57.
+ If the character is greater than or equal to 48 and smaller than or equal to 57, it's a digit.
+ You can treat small and capital letters similarly.
+ Use an ```if``` condition to check the character's type.
+ Use the operator ```&&``` to combine two condition if verifying both of them is needed.