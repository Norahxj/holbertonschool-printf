# 💿💡( _printf) Custom Implementation of the C printf Function💡💿

- This repository contains some of implementations of the standard `printf` function in C, as part of the **Holberton School Low-Level Programming curriculum**.  

- It illustrates the most commonly used format specifiers.

- The project consists of 3 mandatory tasks and another 14 advanced tasks.

---

## 📌 Project Objectives:

The main goal of this project is to understand the following:

- Variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`).
- The `write()` system call.
- Parsing and handling format specifiers.
- Memory and string manipulation in C.
- Modular programming and file organization.
- Building a fully functional, production-style C library function.
- Writing documentation through a UNIX manual page.

---

## ⛓Repository Structure:

holbertonschool-printf/

- README.md # Project documentation
- main.h # Header file with prototypes and include guards
- _printf.c # Core function: parses format string, handles specifiers
- functions.c # Helper functions (print_char, print_string, print_int, etc.)
- man_3_printf # Manual page for the custom printf

---

## 📄 Description of each file:

### **1. `README.md`**
The file you are reading now.  
It explains the purpose of the project, how it works, requirements, structure, and authors.

---

### **2. `main.h`**
Central header file that:

- Declares all function prototypes
- Includes necessary libraries
- Provides include guards
- Ensures modularity and consistency across all `.c` files

---

### **3. `_printf.c`**
This is the heart of the project.  
Its responsibilities include:

- Reading the format string
- Detecting `%` conversion specifiers
- Delegating work to the appropriate helper function
- Handling unknown specifiers
- Counting and returning the total printed characters

---

### **4. `functions.c`**
Contains all helper functions used by `_printf`:

- `print_char()` — prints a single character  
- `print_string()` — prints a string  
- `print_percent()` — prints a literal `%`  
- `print_int()` — prints integers (`%d`, `%i`)  
- `print_int_helper()` — assists printing digits recursively  

---

### **5. `man_3_printf`**
A fully documented **UNIX manual page** describing:

- Purpose of `_printf`
- Supported format specifiers
- Function behavior & return values
- Usage examples
- Author section

---

## 🧩 Supported FormSpecifiers:

Our custom `_printf` handles:

| Format | Description |
|--------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%%` | Prints a literal percent sign |
| `%d` | Prints a decimal integer |
| `%i` | Prints a signed integer |

---

## 📋 Requiremets:

- All code must comply with **Betty style**
- Compiled on **Ubuntu 20.04 LTS** using gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- No global variables
- No more than **5 functions per file**
- All functions must be documented
- A **README.md** file is mandatory
- A **man_3_printf** file is mandatory
- All files must end with a new line
- Only allowed functions:
- `write`
- `malloc`
- `free`
- `va_start`
- `va_end`
- `va_arg`
- `va_copy`

---

## 🛠�Compilation:

To compile the project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

---

▶️ UsExamples:
_printf("Hello %s!\n", "World");
_printf("Character: %c\n", 'A');
_printf("Percent: %%\n");
_printf("Number: %d\n", 123);
_printf("Integer: %i\n", -456);

---

🧪 RetuValue:

_printf returns:

- The total number of characters printed

- -1 on error (such as NULL format string)

---

Authors:
* Norah Aljuhani 👩🏻‍💻 
* Randa Baeshen 👩🏻‍💻
