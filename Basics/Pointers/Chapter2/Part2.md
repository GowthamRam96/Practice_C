# Memory Leaks
A memory leak occurs when allocated memory is never used again but is not freed. This
can happen when:
- The memory’s address is lost
- The free function is never invoked though it should be (sometimes called a hidden leak)

A problem with memory leaks is that the memory cannot be reclaimed and used later.
The amount of memory available to the heap manager is decreased. If memory is repeatedly
allocated and then lost, then the program may terminate when more memory
is needed but malloc cannot allocate it because it ran out of memory. In extreme cases,
the operating system may crash.

![image](https://user-images.githubusercontent.com/84629235/134447486-80b040b4-ee2c-412c-a077-e98cb8face97.png)

The variable chunk is assigned memory from the heap. However, this memory is not freed before another block of memory is assigned to it.
At minimum, memory is not being used efficiently.
