# Copying strings
Copying strings is a common operation and is normally accomplished using the strcpy
function whose prototype follows:

```c
char* strcpy(char *s1, const char *s2);
```

A common application is to read in a series of strings and store each of them in an
array using a minimum amount of memory. This can be accomplished by creating an
array sized to handle the largest string that the user might enter and then reading it into
this array. On the basis of the string read in, we can then allocate just the right amount
of memory. The basic approach is to:
1. Read in the string using a large array of char
2. Use malloc to allocate just the right amount of memory
3. Use strcpy to copy the string into the dynamically allocated memory

```c
 char name[32];
 char *names[30];
 size_t count = 0;
 
 printf("Enter a name: ");
 scanf("%s",name);
 names[count] = (char*)malloc(strlen(name)+1);
 strcpy(names[count],name);
 count++;
 ```
 
 ![image](https://user-images.githubusercontent.com/84629235/147123449-27def845-0e41-4990-8562-0a552a1f8ca2.png)
