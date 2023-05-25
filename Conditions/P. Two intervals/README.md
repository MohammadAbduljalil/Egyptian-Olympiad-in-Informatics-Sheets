# [P. Two intervals](https://codeforces.com/group/6uhngucRCe/contest/429334/problem/P)
> *This problem prompts you to print the intersection between two intervals or state that it does not exist.*

+ First, make sure that interval 1 has a smaller start than interval 2, as it's not guranteed in the statement, that is, swap l<sub>1</sub> and l<sub>2</sub> and swap r<sub>1</sub> and r<sub>2</sub> if interval 2 starts at a smaller point, ie if l<sub>2</sub> is less than l<sub>1</sub>
+ You can use the ```swap()``` function in header ```<algorithm>``` to swap the starts and ends of the intervals if needed
After ensuring that interval 1 starts before interval 2:
+ If interval 2 starts after interval 1 ends, there is no intersection and you should print -1
+ If the intervals have an intersection, it will must start at l<sub>2</sub> and it will either end at r<sub>1</sub> or r<sub>2</sub>
> The intersection can't start before l<sub>2</sub> because it won't be included in interval 2
+ The end of the intersection must be the minimum between r<sub>1</sub> and r<sub>2</sub>
+ You can use the function ```min()``` in the same header ```<algorithm>``` to calculate the end of the intersection