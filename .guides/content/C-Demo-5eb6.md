----------

## Iterating Over an Array

C allows you to iterate over a list. That means starting with the first element and progressing through to the end of the array. Using a for loop is the easiest way to iterate over an array list.

![Iterating Over an Array](.guides/img/array-iterate.png)

<details><summary>**numbers, numbers[n], and loop termination**</summary>In the example below, the iteration variable is `n` and the list is named `numbers`. This means that `numbers[n]` represents the current element being accessed by the loop. The loop continues as long as `n` is less than 4 because we begin the loop at 0.</details>
  
```c
#include <stdio.h>

int numbers[4] = {1, 2, 3, 4};

int main () {
  for ( int n=0 ; n<4 ; ++n ) {
    printf("%d\n", numbers[n]); 
  }
  return 0;
}
```

[Code Visualizer](open_tutor c_demo.c)

{Compile code}(gcc -o c_demo c_demo.c)
{Run Code}(./c_demo)

|||challenge
## What happens if you:
* Change the [printf statement](open_file c_demo.c panel=0 ref="printf" count=1) to 
`printf("%d ", numbers[n]);`?

[Remove highlighting](open_file c_demo.c panel=0)

|||

[Code Visualizer](open_tutor c_demo.c)
{Compile code}(gcc -o c_demo2 c_demo.c)
{Run Code}(./c_demo2)

{Check It!|assessment}(parsons-puzzle-2650837085)
