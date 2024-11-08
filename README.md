<h1>
  Libft - Your Very First Own Library
</h1>

<h3>
  Project Overview
</h3>
<p>The Libft project is your very own implementation of a C standard library, where you recreate a set of core libc functions, manage memory, and even implement your own linked list. This library includes both essential functions for string manipulation and memory management, and advanced functions that can be used for building more complex systems.</p>

<h3>
  Implemented Functions
</h3>
<h4>
  Part 1 - Libc Functions
</h4>
In this part of the project, the following libc functions were implemented, each prefixed with ft_:

  - ft_isalpha: Checks if a character is alphabetic.
  - ft_isdigit: Checks if a character is a digit.
  - ft_isalnum: Checks if a character is alphanumeric.
  - ft_isascii: Checks if a character is an ASCII character.
  - ft_isprint: Checks if a character is printable.
  - ft_strlen: Returns the length of a string.
  - ft_memset: Sets a block of memory to a specific value.
  - ft_bzero: Sets a block of memory to zero.
  - ft_memcpy: Copies a block of memory from one location to another.
  - ft_memmove: Moves a block of memory from one location to another, handling overlaps.
  - ft_strlcpy: Copies a string with a specified length, ensuring null termination.
  - ft_strlcat: Appends a string with a specified length, ensuring null termination.
  - ft_toupper: Converts a character to uppercase.
  - ft_tolower: Converts a character to lowercase.
  - ft_strchr: Searches for the first occurrence of a character in a string.
  - ft_strrchr: Searches for the last occurrence of a character in a string.
  - ft_strncmp: Compares two strings up to a specified number of characters.
  - ft_memchr: Searches for a character in a block of memory.
  - ft_memcmp: Compares two blocks of memory.
  - ft_strnstr: Locates a substring within a string, up to a specified length.
  - ft_atoi: Converts a string to an integer.

Additionally, memory-related functions were implemented using malloc:

  - ft_calloc: Allocates and zeroes memory for an array.
  - ft_strdup: Duplicates a string by allocating memory.

<h4>
  Part 2 - Additional Functions
</h4>

This section implements custom string manipulation functions that are not present in the standard C library:

  - ft_substr: Allocates and returns a substring from a given string.
  - ft_strjoin: Allocates and returns a new string that is the result of concatenating two strings.
  - ft_strtrim: Allocates and returns a string with leading and trailing characters removed, based on a given set.
  - ft_split: Splits a string into an array of strings, using a delimiter character.
  - ft_itoa: Converts an integer to a string.
  - ft_strmapi: Applies a function to each character in a string, returning a new string with the results.
  - ft_striteri: Iterates through a string and applies a function to each character.
  - ft_putchar_fd: Writes a character to a given file descriptor.
  - ft_putstr_fd: Writes a string to a given file descriptor.
  - ft_putendl_fd: Writes a string followed by a newline to a file descriptor.
  - ft_putnbr_fd: Writes an integer to a given file descriptor.

<h4>
  Bonus Part - Linked List Functions
</h4>

In this bonus section, linked list manipulation functions were added to the library:

  - ft_lstnew: Creates a new list node.
  - ft_lstadd_front: Adds a new node to the front of the list.
  - ft_lstsize: Returns the size (length) of the list.
  - ft_lstlast: Returns the last node of the list.
  - ft_lstadd_back: Adds a new node to the back of the list.
  - ft_lstdelone: Deletes a node from the list.
  - ft_lstclear: Deletes and frees all nodes in a list.
  - ft_lstiter: Iterates over each node in the list and applies a function to its content.
  - ft_lstmap: Creates a new list by applying a function to each element in the original list.

<h3>
  How to Compile and Use
</h3>

<h4>
  Compiling Libft
</h4>

To compile your libft library, simply run:
```bash
make
```

This will generate the libft.a static library.

<h4>
  Example Usage
</h4>

Here are some simple examples of how to use some of the implemented functions:

Example using ft_strlen:
```c
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = "Hello, Libft!";
    printf("String length: %zu\n", ft_strlen(str));
    return 0;
}
```
<h4>
  Running Tests
</h4>

To run your tests, link the libft.a library to your test files:
```bash
gcc -o test_program test_program.c -L. -lft
./test_program
```
<h4>
  Contributing
</h4>

If you'd like to contribute or suggest improvements, feel free to fork the repository and submit a pull request. Make sure to follow the coding standards and ensure all functions are thoroughly tested.

<h4>
  License
</h4>
This project is subject to the 42 School's License.


