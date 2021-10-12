# Passing Data Using a Pointer

One of the primary reasons for passing data using a pointer is to allow the function to
modify the data. The following sequence implements a swap function that will interchange
the values referenced by its parameters. This is a common operation found in
a number of sorting algorithms. Here, we use integer pointers and dereference them to
affect the swap operation:


