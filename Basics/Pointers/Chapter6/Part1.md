# Pointers and Structures
# Introduction

A structure in C can be declared in a number of ways. We will only examine
two approaches, as our focus is on their use with pointers.

In the following declaration, the structure’s name is prefixed with an under‐
score. This is not necessary but is often used as a naming convention. The _person
structure includes fields for name, title, and age:

```c
struct _person {
 char* firstName;
 char* lastName;
 char* title;
 unsigned int age;
};
```

A structure’s declaration frequently uses the typedef keyword to simplify its use later
in a program. The following illustrates its use with the _person structure:

```c
typedef struct _person {
 char* firstName;
 char* lastName;
 char* title;
 unsigned int age;
} Person;
```

An instance of a person is declared as follows:
```c
Person person;
```

Alternately, we can declare a pointer to a Person and allocate memory for it, as shown 
below:
```c
Person *ptrPerson;
ptrPerson = (Person*) malloc(sizeof(Person));
```

**If we use a simple declaration of a structure as we did with person, we use the dot
notation to access its fields.**

```c
Person person;
 person.firstName = (char*)malloc(strlen("Emily")+1);
 strcpy(person.firstName,"Emily");
 person.age = 23;
```

**If we are using a pointer to a structure, we need to use the points-to operator,
as follows.**

```c
Person *ptrPerson;
 ptrPerson = (Person*)malloc(sizeof(Person));
 ptrPerson->firstName = (char*)malloc(strlen("Emily")+1);
 strcpy(ptrPerson->firstName,"Emily");
 ptrPerson->age = 23;
```

