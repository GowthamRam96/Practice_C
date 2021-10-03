# Dangling pointers
If a pointer still references the original memory after it has been freed, it is called a dangling pointer. The pointer does not point to a valid object. This is sometimes referred
to as a premature free. The use of dangling pointers can result in a number of different types of problems, including:
- Unpredictable behavior if the memory is accessed
- Segmentation faults when the memory is no longer accessible
- Potential security risks

These types of problems can result when:
- Memory is accessed after it has been freed
- A pointer is returned to an automatic variable in a previous function call

# Dangling pointer instance

The variable pi will still hold the integer’s address. However, this memory may be reused
by the heap manager and may hold data other than an integer. The program’s state immediately before and after the free function is executed. The pi
variable is assumed to be part of the main function and is located at address 100. The memory allocated using malloc is found at address 500.
When the free function is executed, the memory at address 500 has been deallocated and should not be used. However, most runtime systems will not prevent subsequent
access or modification.

![image](https://user-images.githubusercontent.com/84629235/135743136-8e53b69f-3b6e-48d0-a5bd-45d9b3f67299.png)

<h2>Freed memory</h2>

![image](https://user-images.githubusercontent.com/84629235/135743567-dd8d0269-ae8e-4fb7-a3f3-821bf35cce2b.png)

<h2>Reallocating</h2>

![image](https://user-images.githubusercontent.com/84629235/135744378-6383f3a7-110f-4fcf-a49b-c6257fa05e4d.png)


# Diagramatic Explaination
![image](https://user-images.githubusercontent.com/84629235/135743533-38e8bbec-af82-42db-831a-d48f4cd5cbdd.png)
