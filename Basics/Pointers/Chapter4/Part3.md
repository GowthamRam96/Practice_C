# Allocating Contiguous Memory
Two methods are explained below:
1. The first technique allocates the “outer” array first and then all of the memory for the rows.
2. The second technique allocates all of the memory at once.

- The first malloc allocates an array of pointers to integers. Each element will be used to hold a pointer to a row.
- The second malloc allocates memory for all of the elements of the array at location

# First method steps

![image](https://user-images.githubusercontent.com/84629235/142712636-aec8b1e9-c2ae-4ffd-976a-cb54041e1ee4.png)

The memory for the first array may be separated from the memory for the array’s “body.” However, a contiguous region of memory is allocated for the body.

# Second method steps

![image](https://user-images.githubusercontent.com/84629235/142712745-505781dd-5f8e-4eb8-a28d-8dc031f363c8.png)

![image](https://user-images.githubusercontent.com/84629235/142712768-42007489-411a-4a52-8f4d-82810fc8da20.png)

Array subscripts cannot be used because we have lost the shape information needed by
the compiler to permit subscripts.The more convenient two-dimensional array notation makes this mapping
transparent and easier to use.
