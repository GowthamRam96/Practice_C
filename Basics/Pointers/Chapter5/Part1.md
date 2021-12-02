# String Fundamentals
A string is a sequence of characters terminated with the ASCII NUL character
There are two types of strings in C:
  1. Byte string - Consists of a sequence of _char_ data type
  2. Wide string - Consists of a sequence of _wchar_t_ data type 

The wchar_t data type is used for wide characters and may be either 16 or 32 bits in
width. Both of these strings are terminated by the NUL character. Byte string functions
are found in the string.h file. Wide string functions are found in the wchar.h file. Unless
otherwise noted, we will be using byte strings in this chapter. Wide chars were created
to support non-Latin character sets and are useful in applications that support foreign
languages.

# String Declaration
String declarations are supported in one of three ways: either as a literal, as an array of
characters, or using a pointer to a character. The string literal is a sequence of characters
enclosed in double quotes. String literals are frequently used for initialization purposes.

String literals are not to be confused with characters enclosed in single quotes—these
are character literals.

```c
// General Allocation - Array of characters
char header[32];

// Pointer to a character
char *header;

// String literal Type
char *tabHeader = "Sound";
*tabHeader = 'L';
printf("%s\n",tabHeader); // Displays "Lound"

```
