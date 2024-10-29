![image](https://github.com/user-attachments/assets/5222daa4-112e-4988-ba02-4cb0b75bf872)

# LIBFT

Libft is the very first project in the 42 school curriculum. Its purpose is to familiarize students with essential C programming concepts by rebuilding many functions from the C standard library, as well as developing new ones. Through this project, you'll gain a deeper understanding of memory management, string manipulation, and more, which will be foundational for future projects in the program.

## Table of Contents
1. [Project Overview](#project-overview)
2. [Features](#features)
3. [File Structure](#file-structure)

## Project Overview

Libft is a custom library of C functions that replicate, enhance, and extend standard library functionalities. It covers four main areas:

- **Libc Functions**: Reimplementations of common C standard library functions.
- **Additional Functions**: Helper functions commonly needed in programming but not provided in the standard library.
- **Bonus Part**: Implementation of a set of functions for manipulating linked lists.
- **Extra Functions** (optional): Additional utility functions, including some you may want to add for personal use.

## Features

### 1. Standard Library (Libc) Functions

Libft recreates various functions from the C library to help you understand their inner workings, such as:

- 🔠 **Character Checks**: Functions for determining character types, useful for parsing strings.
  - Examples: `ft_isalpha`, `ft_isdigit`, `ft_islower`, `ft_isupper`, `ft_isascii`

- 💾 **Memory Management**: Essential functions for memory allocation, manipulation, and deallocation.
  - Examples: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_bzero`

- 📏 **String Manipulation**: Functions to work directly with C strings, such as finding length, copying, and duplicating.
  - Examples: `ft_strlen`, `ft_strcpy`, `ft_strdup`, `ft_strcat`, `ft_strcmp`

### 2. Additional Functions

In this part, Libft provides practical utility functions for common programming needs:

- 📜 **String Operations**: Functions to extract substrings, join strings, and trim whitespace.
  - Examples: `ft_substr`, `ft_strjoin`, `ft_strtrim`

- 🔢 **Number Conversion**: Convert strings to integers and vice versa.
  - Examples: `ft_atoi`, `ft_itoa`

- 🖨️ **Output**: Functions to output data to a specified file descriptor.
  - Examples: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`

### 3. Bonus Part - Linked Lists

The bonus part of Libft introduces linked list manipulation, essential for data structures needing dynamic memory allocation:

- 🔗 **Linked Lists**: Create, add, and manage nodes in a linked list.
  - Examples: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`

## File Structure

Each function is defined in its own `.c` file for clarity and reusability. Headers, prototypes, and constants are stored in `libft.h`, making it easier to include the library in other projects.

```plaintext
libft/
├── ft_*.c           # C files for each function
├── libft.h          # Header file with function prototypes
├── Makefile         # Compilation file for building the library
└── README.md        # Project documentation
