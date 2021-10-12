# Passing Data Using a Pointer

One of the primary reasons for passing data using a pointer is to allow the function to
modify the data. The following sequence implements a swap function that will interchange
the values referenced by its parameters. This is a common operation found in
a number of sorting algorithms. Here, we use integer pointers and dereference them to
affect the swap operation:

![image](https://user-images.githubusercontent.com/84629235/136957267-49923e02-5c20-4966-8e00-c2d9da1a5c28.png)

![image](https://user-images.githubusercontent.com/84629235/136957355-0f5641e6-576d-407f-8eb7-d0d6a9208aa7.png)

The pointers _pnum1_ and _pnum2_ are dereferenced during the swap operation. This will
result in the values of _n1_ and _n2_ being modified.


# Back end Heap and Stack

Program stack before swap - left

Program stack after swap - right

![image](https://user-images.githubusercontent.com/84629235/136963420-f0358cf9-707a-4902-8310-9e9d97f11e52.png)
