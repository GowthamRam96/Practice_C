# Memory used in C
When a C program is compiled, it works with three types of memory:
- Static/Global
- Automatic
- Dynamic

| Memory Type | Feature |
| --- | --- |
| <b>Static</b>      | Scope: Within function; Lifetime: existence is seen until program termination | 
| <b>Global</b>      | Scope: Entire File; Lifetime: existence is seen until program termination     |
| <b>Automatic</b>   | Scope: Within function; Lifetime: While function execution                    |
| <b>Dynamic</b>     | Scope: Pointer reference; Lifetime: Until memory is Freed                     |

# Sample Code Application of Pointers
```C
#include<stdio.h>
int main()
{
	char* names[] = { "Miller","Jones","Anderson" };
	printf("%c       %s\n", *(*(names) + 3), *(names));
	printf("%c       %s\n", names[1][2],names[1]);

}
//Results
//l  <from "Miller">
//n  <from "Jones">
```

# Declaring Pointers
Former is an integer and latter is the pointer to an integer. Pointers are declared using <i>*</i> after the data type and pointer variables name.
```C 
int num;
int *pi;
```
**_NOTE:_** Whitespaces are used based on preferences. All below notations are same.It is an overloaded symbol as it is also
used for multiplication and dereferencing a pointer.

```C
int* pi;
int * pi;
int *pi;
int*pi;
```

# How to Read a Declaration

```C
const int *gold;
```
*Backward Declaration* gold is a pointer variable to a constant integer.
