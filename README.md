# 🧱 Libft — My Custom C Standard Library

A small custom C library reimplementing common functions from the C standard library plus handy utility functions and a simple linked list implementation.

This repository is a personal implementation of foundational C routines used at 42 School (Heilbronn) and is intended as a reusable library for other C projects.
---

🧰 Skills Demonstrated
- Low-level C programming

- Dynamic memory management (memory allocation and pointer arithmetic)

- Functional programming patterns

- Data structure design (linked lists)

- Clean code, modularity and reusability

---

## Table of Contents

- [Features](#features)
- [Files & API Summary](#files--api-summary)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Testing](#testing)
- [Contributing](#contributing)
- [Author](#author)

## 🚀 Features

- Re-implementations of common functions from <string.h>, <ctype.h>, <stdlib.h>
- Memory helpers (ft_calloc, ft_memset, ft_bzero, ...)
- String utilities (ft_strdup, ft_strjoin, ft_split, ft_strtrim, ...)
- Integer/string conversion (ft_atoi, ft_itoa)
- Small linked-list implementation and helpers (ft_lstnew, ft_lstadd_front, ...)
- Simple, well-separated functions suitable for learning and reuse

## 🧩 Implemented Functions

The library provides the following categories of functions (file names are the same as the function names):

🔤 Character & String Handling
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_toupper`, `ft_tolower`
- `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_strdup`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`, `ft_strlcpy`, `ft_strlcat`, `ft_strmapi`, `ft_striteri`

🧠 Memory Management
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

🔢 Conversion
- `ft_atoi`, `ft_itoa`

🖨️ File Descriptor Output
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

🔗 Linked List Management
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Header file: `libft.h` exposes the public prototypes and necessary types.

## ⚙️ Installation

Clone the repository and build the static library using the provided `Makefile`:

```bash
git clone https://github.com/jayeshmanani/libft.git
cd libft
make
```

Assumption: the `Makefile` provides the standard targets (`all`/default builds `libft.a`, `clean`, `fclean`, `re`). If your `Makefile` differs, use the appropriate target.

## 🧩 Usage

Include the header in your source and link with the generated static library:

```c
#include "libft.h"

int main(void) {
    /* use ft_* functions */
}
```

Compile and link:

```bash
gcc -Wall -Wextra -Werror main.c libft.a -I . -o main
```

## Examples

Simple example using `ft_strlen`:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s = "Hello, Libft!";
    printf("Length: %zu\n", ft_strlen(s));
    return 0;
}
```

## Testing

- Use the `Makefile` to build the library (`make`).
- Add your own test `main.c` files and compile them against `libft.a` as shown above.

If you want automated tests, consider adding a small test harness (e.g., a `tests/` folder with a Makefile or a simple shell script).

## Contributing

This repository is a personal project used for learning. If you'd like to contribute or suggest improvements, open an issue or submit a pull request. Keep changes small and focused.

## 💬 Author

- 👨‍💻 Jayesh Manani — 📍 42 Heilbronn
- 🔗 GitHub: https://github.com/jayeshmanani/libft

---
