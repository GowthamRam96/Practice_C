# Address of Operator
The address of operator <b> &</b> , will return its operand’s address. Example implementation with memory assignments is shown below.
```c
No = 1;
Val = &No;
```
![image](https://user-images.githubusercontent.com/84629235/132990179-267c8ca6-126f-472b-a639-92e9dc12c2d2.png)

---

***Similarly the following setup causes error: invalid conversion from 'int' to 'int*'***
```c
No = 1;
Val = No;
```
---

# Display pointer values
We can print out the variables to understand the data in it.

```c
int No = 1;
int *Val;
Val = &No;
printf("Address of No: %d Value: %d\n",&No, No);
printf("Address of Val: %d Value: %d\n",&Val, Val);
```
![image](https://user-images.githubusercontent.com/84629235/132990603-429a3e17-f064-45a7-840f-b5c444cea847.png)
![image](https://user-images.githubusercontent.com/84629235/132990612-47c9b5d4-6f03-44bb-b0fe-5df1e1bcbc39.png)


# Field Specifiers implementation in code
We can print out the variables to understand the data in it.
| Specifier | Feature |
| --- | --- |
| %x  | hexadecimal number |
| %o  | octal number |
| %p  | implementation-specific manner |

![image](https://user-images.githubusercontent.com/84629235/132990566-ff979d95-c817-4d4b-a13d-99230b315d86.png)
![image](https://user-images.githubusercontent.com/84629235/132990573-a99c6c90-0c48-46e0-9533-904ceaa08033.png)
