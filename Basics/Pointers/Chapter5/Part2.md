# String Initialization
When we initialize a string, the approach we use depends on whether the variable is
declared as an array of characters or as a pointer to a character. The memory used for
a string will be either an array or a memory pointed to by a pointer. When a string is
initialized, we can use a string literal or a series of characters, or obtain the characters
from a different source such as standard input.

# Initializing an array of char
An array of char can be initialized using the initialization operator. In the following
example, a header array is initialized to the character contained in a string literal:

```c
char header[] = "Media Player";
```

Since the literal “Media Player” is 12 characters in length, 13 bytes are required to represent
the literal. The array is allocated 13 bytes to hold the string. The initialization will
copy these characters to the array terminated by the NUL character.

![image](https://user-images.githubusercontent.com/84629235/145610756-3ffa766b-4a88-4089-bfea-72b1d4c4167a.png)


# Initializing a pointer to a char
Using dynamic memory allocation provides flexibility and potentially allows the
memory to stay around longer. The following declaration will be used to illustrate this
technique:

```c
 char *header;
```

A common way to initialize this string is to use the malloc and strcpy functions to
allocate and copy a literal to the string, as illustrated below:

```c
char *header = (char*) malloc(strlen("Media Player")+1);
strcpy(header,"Media Player");
```

Assuming that the code is located in the main function, Below figure shows the state of
the program stack.

![image](https://user-images.githubusercontent.com/84629235/145611018-0e0b38ae-f2b0-452f-9958-a90b8b5c96c3.png)

The address of a string literal can be assigned directly to a character pointer as shown
below. However, this does not create a new copy of the string

```c
char *header = "Media Player";
```

![image](https://user-images.githubusercontent.com/84629235/145611318-c8025026-60ae-48fa-bf86-77a8b13d39bd.png)


# Initializing a string from standard input
A string can also be initialized from some external source such as standard input. However,
potential initialization errors can occur when reading in a string from standard
input, as shown below. The problem exists because we have not assigned memory to
the command variable before attempting to use it:

```c
char *command;
printf("Enter a Command: ");
scanf("%s",command);
```

To address this problem, we should first allocate memory for the pointer or use a fixed
size array instead of a pointer. However, the user may enter more data than can be held
by these approaches.
