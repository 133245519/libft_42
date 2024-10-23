# 📚 Libft - Your First C Library

## 📝 Project Overview

The **Libft** project is about coding a **C** library that will contain a variety of general-purpose functions that mimic the behaviors of those in the **C standard library (libc)**. This project is designed to help understand how these essential functions work and to implement them from scratch. Once created, your **Libft** library will be a helpful tool for your future C programming projects.

## 🎯 Goals

- Re-implement essential functions from the C standard library.
- Develop additional utility functions that are not part of libc but useful in various situations.
- Understand **memory management**, **dynamic allocation**, and **variadic functions**.
- Build a custom **C library** that will be reused in future projects.

## 🔧 Project Requirements

- **Language**: The project must be written in **C**.
- **Norm Compliance**: All code must adhere to the **Norm** coding standard.
- **No Memory Leaks**: All dynamically allocated memory must be properly freed.
- **No Crashes**: Functions must not quit unexpectedly due to segmentation faults, bus errors, double frees, etc.
- **Makefile**: The project must include a **Makefile** with the following rules:
  - `$(NAME)`, `all`, `clean`, `fclean`, `re`, and `bonus`.
  - Use **cc** with `-Wall -Wextra -Werror` flags.
  - The **ar** command must be used to create the library; **libtool** is forbidden.
  - Place all source files at the root of your repository.
  
### Global Variables

- **Global variables** are not allowed.
  
### Helper Functions

- Helper functions used to split complex logic must be declared as **static** functions to limit their scope to the file they are defined in.

## 🛠️ Part 1 - Libc Functions

In the first part, Reimplement a set of functions from the **C standard library**. These functions must follow the same prototypes and behaviors as described in their **man pages**, but with an `ft_` prefix.

### Functions to Implement:

- Character and String Functions:
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  - `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
  - `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`
  - `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`
  - `ft_atoi`
  
- Memory Allocation:
  - `ft_calloc` (dynamic memory allocation)
  - `ft_strdup` (duplicate a string)

### Notes:

- **calloc**: If `nmemb` or `size` is 0, the function must return a unique pointer that can be successfully freed later.
- **Prototypes**: Do **not** use the `restrict` keyword in your function prototypes.

## 🛠️ Part 2 - Additional Functions

In the second part, Developing additional utility functions that are not part of the **C standard library** but will be useful in many situations.

### Functions to Implement:

- **String Manipulation**:
  - `ft_substr`: Create a substring from a string.
  - `ft_strjoin`: Join two strings.
  - `ft_strtrim`: Trim characters from the beginning and end of a string.
  - `ft_split`: Split a string based on a delimiter.
  
- **Conversion**:
  - `ft_itoa`: Convert an integer to a string.
  
- **Function Application**:
  - `ft_strmapi`: Apply a function to each character of a string, creating a new string.
  - `ft_striteri`: Apply a function to each character of a string (in-place).

- **File Descriptor Output**:
  - `ft_putchar_fd`: Output a character to a file descriptor.
  - `ft_putstr_fd`: Output a string to a file descriptor.
  - `ft_putendl_fd`: Output a string followed by a newline to a file descriptor.
  - `ft_putnbr_fd`: Output an integer to a file descriptor.

## 🌟 Bonus Part - Linked List Manipulation

Implementing **bonus** functions that allow for manipulation of linked lists. This will be incredibly useful for future tasks involving dynamic data structures.

### 📝 List Structure

To represent a node in your list, you must use the following structure. Be sure to include it in your `libft.h` file:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

## 📝 List Structure

- **content**: A `void *` pointer that allows the node to store any type of data.
- **next**: A pointer to the next node in the list, or `NULL` if it is the last node.

## 📂 List Functions

Implementing the following functions to handle linked lists. They will allow you to create, add, delete, and traverse lists easily.

| Function Name     | Prototype                                              | Description                                                                                                     | External Functions |
|-------------------|--------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------|--------------------|
| `ft_lstnew`       | `t_list *ft_lstnew(void *content);`                    | Creates a new list node. The content is initialized with the given value, and next is set to `NULL`.             | `malloc`           |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);`     | Adds the node `new` at the beginning of the list.                                                               | None               |
| `ft_lstsize`      | `int ft_lstsize(t_list *lst);`                         | Returns the number of nodes in the list.                                                                        | None               |
| `ft_lstlast`      | `t_list *ft_lstlast(t_list *lst);`                     | Returns the last node of the list.                                                                              | None               |
| `ft_lstadd_back`  | `void ft_lstadd_back(t_list **lst, t_list *new);`      | Adds the node `new` at the end of the list.                                                                     | None               |
| `ft_lstdelone`    | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees the memory of a single node’s content using the `del` function and then frees the node itself.             | `free`             |
| `ft_lstclear`     | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees all nodes in a list using the `del` function, setting the pointer to `NULL`.                   | `free`             |
| `ft_lstiter`      | `void ft_lstiter(t_list *lst, void (*f)(void *));`     | Iterates through the list, applying the function `f` to the content of each node.                                | None               |
| `ft_lstmap`       | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Applies the function `f` to each node’s content to create a new list. If an allocation fails, `del` is used to clear the new list. | `malloc`, `free`   |

## 🔧 Function Descriptions

- **`ft_lstnew`**: Allocates and returns a new node. The member `content` is initialized with the value passed as an argument, and the member `next` is set to `NULL`.
  
- **`ft_lstadd_front`**: Adds the node `new` at the beginning of the list. If `lst` is `NULL`, `new` becomes the first node in the list.

- **`ft_lstsize`**: Counts and returns the total number of nodes in the list.

- **`ft_lstlast`**: Returns the last node in the list. If the list is empty, it returns `NULL`.

- **`ft_lstadd_back`**: Adds the node `new` at the end of the list. If `lst` is `NULL`, `new` becomes the first node in the list.

- **`ft_lstdelone`**: Frees the memory of a node's content using the function `del` provided as a parameter and then frees the node itself. The memory of the next node is not freed.

- **`ft_lstclear`**: Deletes and frees all nodes in the list starting from the node `lst`, using the `del` function to free the content of each node. The list pointer is set to `NULL` at the end.

- **`ft_lstiter`**: Iterates through the list and applies the function `f` to the content of each node.

- **`ft_lstmap`**: Iterates through the list and applies the function `f` to each node’s content to create a new list. If the allocation fails at any point, the `del` function is called to free the previously created nodes.

## 📦 Bonus Makefile Rule

Adding a **bonus** rule inside makefile. This rule should compile the extra list functions into your `libft.a` library.

Here’s an example of how you can structure it:

```makefile
bonus: $(BONUS_OBJS)
    ar rcs $(NAME) $(BONUS_OBJS)
```

## 🏗️ Makefile

**Makefile** handle the compilation of both the mandatory part and the bonus part .include the following rules:

- **all**: Compile the library.
- **clean**: Remove object files.
- **fclean**: Remove compiled binaries and the library.
- **re**: Recompile everything from scratch.
- **bonus**: Compile the bonus files (if any).

## 📦 Memory Management

- All memory allocated on the **heap** using `malloc()` freed properly.
- No **memory leaks**.
- handle errors such as failed memory allocations.



## By mel-harc 🙋🏻‍♂️
