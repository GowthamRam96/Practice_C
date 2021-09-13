# Predefined Pointer-Related Types
Four predefined types are frequently used when working with pointers. They include:
- **size_t** - Created to provide a safe type for sizes
-  **ptrdiff_t** - Created to handle pointer arithmetic
-  **intptr_t** and **uintprt_t** - Used for storing pointer addresses

# Understanding size_t
The size_t type is used as the return type for the sizeof operator and as the argument to many functions, including _malloc_ and _strlen_, among others.

The declaration of _size_t_ is implementation-specific. It is found in one or more standard headers, such as _stdio.h_ and _stdlib.h_, and it is typically defined as follows:
```c
#ifndef __SIZE_T
#define __SIZE_T
typedef unsigned int size_t;
#endif
```

Normally, the maximum possible value for size_t is SIZE_MAX.(depending on the system config size - could be 32 or 64 bits)
The recommended format specifier is _**%zu**_.

![image](https://user-images.githubusercontent.com/84629235/133126102-812b2b23-77b9-4b9f-80ff-ae43e2ea3eb3.png)

![image](https://user-images.githubusercontent.com/84629235/133126203-1d1a96e8-b680-4f27-9ac3-39112ec3a9c1.png)

# Using intptr_t and uintptr_t
The types _intptr_t_ and _uintptr_t_ are used for storing pointer addresses.
They provide
a portable and safe way of declaring pointers, and will be the same size as the underlying
pointer used on the system. They are useful for converting pointers to their integer
representation.
The type uintptr_t is the unsigned version of intptr_t. For most operations intptr_t
is preferred. The type uintptr_t is not as flexible as intptr_t. The following illustrates
how to use intptr_t:
```c
int num;
intptr_t *pi = &num;
```
If we try to assign the address of an integer to a pointer of type uintptr_t as follows,
we will get a syntax error:
```c
uintptr_t *pu = &num;
```
- The error follows: error: invalid conversion from 'int*' to
'uintptr_t* {aka unsigned int*}' [-fpermissive]
However, performing the assignment using a cast will work:
```c
intptr_t *pi = &num;
uintptr_t *pu = (uintptr_t*)&num;
```
We cannot use uintptr_t with other data types without casting:
```c
char c;
uintptr_t *pc = (uintptr_t*)&c;
```
These types should be used when portability and safety are an issue.

ptrdiff_t will be covered later with examples.
