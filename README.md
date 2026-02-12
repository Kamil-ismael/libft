*This project has been created as part of the 42 curriculum by tkamil-h.*

# Libft - A Custom C Standard Library

## Description
The **Libft** project is a foundational step in the 42 school curriculum. The goal is to recreate a subset of the standard C library (libc) functions, as well as additional utility functions that will be used in future C projects.

By building this static library (`libft.a`), I have gained a deep understanding of memory management, pointer manipulation, and the internal workings of standard functions. This library serves as a highly reusable toolset for all subsequent C programming challenges at 42.

## Library Details

The library is organized into three main sections:

### 1. Libc Functions
Standard functions from the C library, recoded to behave exactly like the originals:
*   **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
*   **String Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
*   **Character Tests & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`.

### 2. Additional Functions
Utility functions that are not part of the standard libc but are essential for C programming:
*   **String Processing:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
*   **Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
*   **Conversion:** `ft_itoa`.

### 3. Bonus Part (Linked Lists)
A set of functions to manipulate a custom linked list structure (`t_list`):
*   `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Instructions

### Compilation
The project includes a **Makefile** with the following rules:
*   `make` : Compiles the standard part of the library.
*   `make clean` : Removes the object files (`.o`).
*   `make fclean` : Removes object files and the compiled library (`libft.a`).
*   `make re` : Recompiles the entire project.

### Installation & Usage
To use the library in your own project:

1.  Clone this repository and run `make`.
2.  Include the header in your C files:
    ```c
    #include "libft.h"
    ```
3.  Link the library during compilation:
    ```bash
    gcc main.c -L. -lft -o my_program
    ```

## Resources
*   [Man pages](https://man7.org) - Official C function documentation.
*   [C Programming Guide](https://en.cppreference.com) - Reference for data structures and memory.
*   [OpenClarooms](https://openclassrooms.com/fr/)
*   [W3Schools](https://www.w3schools.com/)

### AI Usage
In this project, Artificial Intelligence was used as a pedagogical partner for the following tasks:

*   **Documentation:** Assistance in structuring and writing this `README.md` file.
*   **Norminette Compliance:** Helping to identify and fix specific syntax errors related to the 42 Norm (such as indentation and alignment issues).
*   **Concept Clarification:** Explaining the behavior of certain functions when the Linux man pages were difficult to understand, using simplified examples and visual analogies.
