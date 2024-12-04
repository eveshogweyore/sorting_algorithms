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

## Functions Overview

| Function Name 		| Description 													|
| ----------------------|---------------------------------------------------------------|
| `insertion_sort_list`			| Sorts a doubly linked list in ascending order, updating the list in-place and printing its state after each change.			|
| `selection_sort`			| Sorts an array of integers in ascending order using selection sort algorithm and prints teh array after every swap.			|
| `swp`			| Swaps the values of two integers.			|
| `quick_sort`			| Implements quicksort algorithm using Lomute partitioning to sort an array of integers in ascending order.			|
| `part`			| Partitions an array around a pivot element, rearranges elements such that those less than the pivot come before it, those greater go after it, and prints the array after each swap.			|
| `shell_sort`			| Sorts an array of integers in ascending order using the shell sort algorithm with the Knuth sequence and prints the array after each iteration of the gap reduction.			|

## Compilation

All files were compiled on Ubuntu 20.04 LTS using gcc with these options:

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

## Requirements

- All code uses the `Betty` style and is checked witih `betty-style.pl` and `betty-doc.pl`.
- No global variables were allowed or used.
- No more than 5 functions per file.
- All function prototypes are included in the header file called `main.h`.
- All header files are include guarded.
- Any use of standard library functions like `printf`, `puts`, ... was forbidden.
- A list/array doesn't need to be sorted if its size is less than 2.

