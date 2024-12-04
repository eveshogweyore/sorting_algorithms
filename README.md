# C - Sorting algorithms & Big O
**`An ALX Africa Software Engineering Program project.`**<br><br>

## Project Overview
This is a collaborative project to implement different sorting algorithms in `C`.

This project aims to enhance our understanding of sorting algorithms, data structures, Big O notation, and time and space complexity.

## Project Contributors

- **Meet the amazing individuals contributing to this project:**
  - [@dahunsi-dami](https://github.com/dahunsi-dami)
  - [@eveshogweyore](https://github.com/eveshogweyore)

## Technologies Used

- **This project leverages the following technologies:**
  - Programming Language: `C`
  - Operating System: `Ubuntu 20.04`

## Data Structure and Functions

We were given the following `print_array` and `print_list` functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```

```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

This data structure was given for doubly linked list:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
