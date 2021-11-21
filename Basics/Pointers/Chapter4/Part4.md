# Jagged Pointers
A jagged array is a two-dimensional array possessing a different number of columns for each row.

![image](https://user-images.githubusercontent.com/84629235/142767211-eb4b7b4b-cb72-47bc-9a05-77a4cd74f013.png)

Before we learn how to create such an array, let’s examine a two-dimensional array
created using compound literals. A compound literal is a C construct that consists of
what appears to be a cast operator followed by an initializer list enclosed in braces. An
example of a compound literal follows for both a constant integer and an array of integers.
These would be used as part of a declaration:
```c
(const int) {100}
(int[3]) {10, 20, 30}
```

In the following declaration, we create the array arr1 by declaring it as an array of
pointers to an integer and using a block statement of compound literals to initialize it:
```c
int (*(arr1[])) = {
(int[]) {0, 1, 2},
(int[]) {3, 4, 5},
(int[]) {6, 7, 8}};
```
This array has three rows and three columns. The array’s elements are initialized with
the value 0 through 8 in row column order.

![image](https://user-images.githubusercontent.com/84629235/142767449-f123e2fc-1d43-4a64-9c10-f9063e118545.png)

![image](https://user-images.githubusercontent.com/84629235/142767658-cffe916d-7c60-4e96-86a3-c7e62f12a575.png)

This declaration can be modified slightly to create a jagged array:
```c
int (*(arr2[])) = {
(int[]) {0, 1, 2, 3},
(int[]) {4, 5},
(int[]) {6, 7, 8}};
int row = 0;
for(int i=0; i<4; i++) {
printf("layer1[%d][%d] Address: %p Value: %d\n",
row, i, &arr2[row][i], arr2[row][i]);
}
printf("\n");
row = 1;
for(int i=0; i<2; i++) {
printf("layer1[%d][%d] Address: %p Value: %d\n",
row, i, &arr2[row][i], arr2[row][i]);
}
printf("\n");
row = 2;
for(int i=0; i<3; i++) {
printf("layer1[%d][%d] Address: %p Value: %d\n",
row, i, &arr2[row][i], arr2[row][i]);
}
printf("\n");

```
We used three compound literals to declare the jagged array. The array’s elements are
initialized in row-column order starting with a value of zero. The next sequence will
display the array to verify its creation. The sequence required three for loops because
each row had a different number of columns.

![image](https://user-images.githubusercontent.com/84629235/142767718-63484783-22dc-4e66-be8f-47867f31b6dd.png)

![image](https://user-images.githubusercontent.com/84629235/142767746-bd5e1b6e-4517-4e3a-932a-6c44884e07ff.png)
