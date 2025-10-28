🧱 Libft — My Custom C Standard Library

Libft is my very first project at 42 Heilbronn, completed after the Kick-Off.
It’s a foundational C library that re-implements essential functions from the standard C library, along with additional utilities such as linked list management and advanced string handling.

This project was my introduction to writing clean, efficient, and reusable C code - and serves as a core library for all future 42 projects.

🚀 Overview

The goal of Libft is to create a personal standard library in C by rebuilding fundamental functions from <string.h>, <ctype.h>, <stdlib.h>, and more — entirely from scratch.

It helped me develop a deep understanding of:

Memory allocation and pointer arithmetic

String manipulation and buffer handling

Function modularity and reusability

Data structures (linked lists)


🧠 What I Learned

Through Libft, I gained hands-on experience in:

Memory management: Allocating, freeing, and avoiding leaks

Pointer logic: Understanding how data moves through memory

Algorithmic thinking: Implementing low-level operations manually

Code organization: Writing modular, reusable, and testable functions

Linked lists: Building and manipulating dynamic data structures


🏫 About the Project

This project is part of the 42 School Curriculum and represents the first major step into the C programming world.
The experience of building Libft from scratch built the foundation for my later 42 projects, such as ft_printf, get_next_line, and pipex.


🧰 Skills Demonstrated

Low-level C programming

Dynamic memory management

Functional programming patterns

Data structure design (linked lists)

Clean code and modularity


⚙️ Usage

Clone and compile the library:

git clone https://github.com/jayeshmanani/libft.git

cd libft

make


Include it in your C project:

#include "libft.h"


Compile with:

gcc main.c libft.a -o main


Example:

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}



🧩 Implemented Functions
🔤 Character & String Handling

ft_isalpha

ft_isdigit

ft_isalnum

ft_isascii

ft_isprint

ft_toupper

ft_tolower

ft_strlen

ft_strchr

ft_strrchr

ft_strncmp

ft_strnstr

ft_strdup

ft_strjoin

ft_strtrim

ft_substr

ft_split

ft_strlcpy

ft_strlcat

ft_strmapi

ft_striteri

🧠 Memory Management

ft_memset

ft_bzero

ft_memcpy

ft_memmove

ft_memchr

ft_memcmp

ft_calloc

🔢 Conversion

ft_atoi

ft_itoa

🖨️ File Descriptor Output

ft_putchar_fd

ft_putstr_fd

ft_putendl_fd

ft_putnbr_fd

🔗 Linked List Management

ft_lstnew

ft_lstadd_front

ft_lstadd_back

ft_lstsize

ft_lstlast

ft_lstdelone

ft_lstclear

ft_lstiter

ft_lstmap


💬 Author

👨‍💻 Jayesh Manani
📍 42 Heilbronn
🔗 GitHub Profile
