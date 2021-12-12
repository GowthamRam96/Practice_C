# String Comparision
String comparisons can be an integral part of an application. We will examine the details
of how string comparisons are made, as incorrect comparisons can result in misleading
or invalid results. Understanding how comparisons are made will help you avoid incorrect
operations. This understanding will transfer to similar situations.
The standard way to compare strings is to use the **strcmp** function. Its prototype follows:

```c
int strcmp(const char *s1, const char *s2);
```
Both of the strings being compared are passed as pointers to constant chars. This allows
us to use the function without fear of it modifying the strings passed. This function
returns one of three values:

Negative: If s1 precedes s2 lexicographically (alphabetically)
Zero: If the two strings are equal
Positive: If s1 follows s2 lexicographically

The use of this function to test equality is illustrated below. The user’s entry will
be stored in command. This is then compared to the literal string:

```c
char command[16];
printf("Enter a Command: ");
scanf("%s", command);
if (strcmp(command, "Quit") == 0) {
printf("The command was Quit");
} else {
printf("The command was not Quit");
}
```

![image](https://user-images.githubusercontent.com/84629235/145719224-7eb2aff0-6907-4db7-a02b-54ceb162539e.png)
