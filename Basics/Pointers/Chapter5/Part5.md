# Concatenating Strings
String concatenation involves the merging of two strings. The strcat function is fre‐
quently used for this operation. This function takes pointers to the two strings to be
concatenated and returns a pointer to the concatenated results. The prototype for the
function follows:

```c
char *strcat(char *s1, const char *s2);
```
The function concatenates the second string to the end of the first string. The second
string is passed as a pointer to a constant char. The function does not allocate memory.
This means the first string must be large enough to hold the concatenated results or it
may write past the end of the string, resulting in unpredictable behavior. The return
value of the function is the same address as its first argument. This can be convenient
in some situations such as when the function is used as an argument of the printf
function.

To illustrate the use of this function, we will combine two error message strings. The
first one is a prefix and the second one is a specific error message. As shown below, we
first need to allocate enough memory for both strings in a buffer, then copy the first
string to the buffer, and finally concatenate the second string with the buffer:

```c
char* error = "ERROR: ";
 char* errorMessage = "Not enough memory";
 char* buffer = (char*)malloc(strlen(error)+strlen(errorMessage)+1);
 strcpy(buffer,error);
 strcat(buffer, errorMessage);
 
 printf("%s\n", buffer);
 printf("%s\n", error);
 printf("%s\n", errorMessage);
```

![image](https://user-images.githubusercontent.com/84629235/147378293-1c9de546-9b69-443a-b8ff-cce0bdf2d2bc.png)

![image](https://user-images.githubusercontent.com/84629235/147378296-3f1fd6bd-198f-4586-9e93-d6dd9ad98ff4.png)

![image](https://user-images.githubusercontent.com/84629235/147378304-0001f677-aeaf-4534-bcc2-5333f0079809.png)

![image](https://user-images.githubusercontent.com/84629235/147378309-1e9d5d5f-ef87-4fd1-a771-722efcbcdc0d.png)

**Output**
ERROR: Not enough memory
ERROR: 
Not enough memory


