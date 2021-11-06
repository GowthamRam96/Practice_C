# Allocating Potentially Noncontiguous Memory

The following illustrates one way of allocating a two-dimensional array where the allocated
memory is not guaranteed to be contiguous. First, the “outer” array is allocated
and then each row is allocated using separate malloc statements:

![image](https://user-images.githubusercontent.com/84629235/140613714-08375742-19a6-4037-aa85-ee32f2b38ef2.png)

![image](https://user-images.githubusercontent.com/84629235/140613724-f2e965d2-b934-4406-9bab-a32d7f9c1378.png)

**Note:** The actual allocation depends on the heap manager and the heap’s state. It may well be
contiguous.
