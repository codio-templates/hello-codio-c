----------

## Standard Code Test

Write a program that accepts a number and then multiplies that number by three. Here are some examples of input and expected output.

|Example Input|Expected Output|
|:-----------:|:-------------:|
|-5           |-15            |
|0            |0              |
|3            |9              |

{Compile code}(gcc -o code/code_test code/code_test.c)
{Test Code with -5}(code/code_test -5)
{Test Code with 0}(code/code_test 0)
{Test Code with 3}(code/code_test 3)

<details><summary>**Adding the Terminal**</summary>You can add the terminal to the `TEST CODE` button by changing the markdown code to `{test code|terminal}(code/code_test)`. To add a terminal to the UI, click on the gear icon, and select "3 Panels without tree" as the layout. Then click on "Open tabs" and add a tab. Select "Terminal" as the type, and set the panel to 1. If you do not add a terminal to the UI, Codio will open one automatically in the same panel as the C code. The terminal will be in a separate tab from the code.</details>

<table><tbody ><tr><td><details><summary>
<strong>Solution</strong>
</summary>

Here is one solution to the problem. You can copy/paste it into the IDE if you would like.

```c
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv) 
{ 
  int num = atoi(argv[1]); // typecast the string to an int
      
  printf("%d\n", num * 3); // print the int multiplied by 3
  return 0; 
} 
```

	
</details></td></tr></tbody>
</table>

{Check It!|assessment}(code-output-compare-3274365764)
