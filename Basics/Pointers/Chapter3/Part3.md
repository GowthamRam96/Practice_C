# Function Pointers

A function pointer is a pointer that holds the address of a function. The ability of pointers to point to functions turns out to be an important and useful feature of C. This provides
us with another way of executing functions in an order that may not be known at compile time and without using conditional statements.

# Declaring Function Pointers
The syntax for declaring a pointer to a function can be confusing when you first see it. As with many aspects of C, once you get used to the notation, things start falling into
place. Let’s start with a simple declaration. Below, we declare a pointer to a function that is passed void and returns void:
```c
void (*foo)();
```

# Program
![image](https://user-images.githubusercontent.com/84629235/138316223-178ee17e-ec90-446e-98fa-f04098452b85.png)


# Memory Allocation
![image](https://user-images.githubusercontent.com/84629235/138317073-7a890d86-57ac-4a13-b63f-c76ac7040eb8.png)

