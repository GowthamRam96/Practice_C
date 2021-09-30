# Realloc
The realloc function will reallocate memory. Its prototype follows:
```c
void *realloc(void *ptr, size_t size);
```

The function realloc returns a pointer to a block of memory. The function takes two
arguments. The first is a pointer to the original block, and the second is the requested
size. The reallocated block’s size will be different from the size of the block referenced
by the first argument. The return value is a pointer to the reallocated memory.

The requested size may be smaller or larger than the currently allocated amount. If the
size is less than what is currently allocated, then the excess memory is returned to the
heap. There is no guarantee that the excess memory will be cleared. If the size is greater
than what is currently allocated, then if possible, the memory will be allocated from the
region immediately following the current allocation. Otherwise, memory is allocated
from a different region of the heap and the old memory is copied to the new region.
If the size is zero and the pointer is not null, then the pointer will be freed. If space
cannot be allocated, then the original block of memory is retained and is not changed.
However, the pointer returned is a null pointer and the errno is set to ENOMEM.

![image](https://user-images.githubusercontent.com/84629235/135492548-ae2a8d89-4442-4712-98da-2a12f3c5aab2.png)
