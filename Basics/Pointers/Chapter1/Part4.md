# Multiple levels of indirection
Pointers can use different levels of indirection. It is not uncommon to see a variable
declared as a pointer to a pointer, sometimes called a **double pointer**.

![image](https://user-images.githubusercontent.com/84629235/133475236-4906ce23-bc5a-4d6f-9e1d-fe64cfe33f4c.png)

Memory is allocated as follows:
![image](https://user-images.githubusercontent.com/84629235/133478926-2f5c2cdb-2f41-426f-b266-9174504d48c7.png)

There is not an inherent limit on the number of levels of indirection possible.

# Pointers to a constant
A pointer can be defined to point to a constant. This means the pointer cannot be used
to modify the value it is referencing.
```c
int num = 5;
const int limit = 500;
int *pi; // Pointer to an integer
const int *pci; // Pointer to a constant integer
pi = &num;
pci = &limit;
```

The following sequence will display the address and value of these variables:
```c
printf(" num - Address: %p value: %d\n",&num, num);
printf("limit - Address: %p value: %d\n",&limit, limit);
printf(" pi - Address: %p value: %p\n",&pi, pi);
printf(" pci - Address: %p value: %p\n",&pci, pci);
```

![image](https://user-images.githubusercontent.com/84629235/133653203-1ac3ada3-5527-4a2c-b870-bffe3e035ee2.png)
