# Using malloc to Create a One-Dimensional Array
If we allocate memory from the heap and assign the address to a pointer, there is no
reason we cannot use array subscripts with the pointer and treat this memory as an
array. In the following sequence, we duplicate the contents of the vector array used
earlier:

# Program
![image](https://user-images.githubusercontent.com/84629235/138732640-68cb9355-fa69-4b40-8ae5-23560a3c9a0f.png)

# Memory Allocation
![image](https://user-images.githubusercontent.com/84629235/138732686-90fa636c-5046-4835-a44e-906fe706ca15.png)

This technique creates a region of memory and treats it as an array. Its size is determined
at runtime. However, we need to remember to deallocate the memory when we are
through with it.

