# Dynamic Memory Allocation

The basic steps used for dynamic memory allocation in C are:
1. Use a **malloc** type function to allocate memory
2. Use this memory to support the application
3. Deallocate the memory using the **free** function

![image](https://user-images.githubusercontent.com/84629235/133955157-5efc862a-f5e3-4a33-a12c-9b87fe0147bd.png)

The malloc function single argument specifies the number of bytes to allocate. If successful, it returns a pointer to memory allocated from the heap. If it fails, it returns a
null pointer.
The **sizeof** operator makes the application more portable and determines the correct number of bytes to allocate for the host system.

**Note:** Each time the malloc function (or similar function) is called, a corresponding
call to the free function must be made when the application
is done with the memory to avoid memory leaks. 
