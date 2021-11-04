# Using a One-Dimensional Array of Pointers
We are using two levels of indirection in the second statement. Mastery of this type of
notation will separate you from the less experienced C programmers.

# Code with results
The following sequence declares an array of integer pointers, allocates
memory for each element, and initializes this memory to the array’s index:

![image](https://user-images.githubusercontent.com/84629235/139466324-a594fa0d-2e0e-46f6-a37e-87648d16ee8f.png)

If this array was displayed, the numbers 0 through 4 would be printed. We used **arr[i]**
to reference the pointer and ***arr[i]** to assign a value to the location referenced by the
pointer. Do not let the use of array notation confuse you. Since arr was declared as an
array of pointers, **arr[i]** returns an address. When we dereference a pointer such as
***arr[i]**, we get the contents at that address.

# Sample Memory Allocation
![image](https://user-images.githubusercontent.com/84629235/139467936-a4908392-510b-4871-8afa-8264163fb41b.png)
