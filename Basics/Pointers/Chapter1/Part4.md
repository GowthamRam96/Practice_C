# Multiple levels of indirection
Pointers can use different levels of indirection. It is not uncommon to see a variable
declared as a pointer to a pointer, sometimes called a **double pointer**.

![image](https://user-images.githubusercontent.com/84629235/133475236-4906ce23-bc5a-4d6f-9e1d-fe64cfe33f4c.png)

Memory is allocated as follows:
![image](https://user-images.githubusercontent.com/84629235/133478926-2f5c2cdb-2f41-426f-b266-9174504d48c7.png)

There is not an inherent limit on the number of levels of indirection possible.
