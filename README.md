# 🔧 _printf – Custom Implementation of the C printf Function

This repository contains some of implementations of the standard `printf` function in C, as part of the **Holberton School Low-Level Programming curriculum**.  
It illustrates the most commonly used format specifiers.
The project consists of 3 mandatory tasks and another 14 advanced tasks.
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


## 📦 Repository Structure

holbertonschool-printf/
│
├── _printf.c # Core function: parses format string, handles specifiers
├── functions.c # Helper functions (print_char, print_string, print_int, etc.)
├── main.h # Header file with prototypes and include guards
├── man_3_printf # Manual page for the custom printf
├── README.md # Project documentation


## 📄 Description of each file:

### **1. `README.md`**
The file you are reading now.  
It explains the purpose of the project, how it works, requirements, structure, and authors.

—

### **2. `_printf.c`**
This is the heart of the project.  
Its responsibilities include:

- Reading the format string
- Detecting `%` conversion specifiers
- Delegating work to the appropriate helper function
- Handling unknown specifiers
- Counting and returning the total printed characters

---

### **3. `functions.c`**
Contains all helper functions used by `_printf`:

- `print_char()` — prints a single character  
- `print_string()` — prints a string  
- `print_percent()` — prints a literal `%`  
- `print_int()` — prints integers (`%d`, `%i`)  
- `print_int_helper()` — assists printing digits recursively  

---

### **4. `main.h`**
Central header file that:

- Declares all function prototypes
- Includes necessary libraries
- Provides include guards
- Ensures modularity and consistency across all `.c` files

---

### **5. `man_3_printf`**
A fully documented **UNIX manual page** describing:

- Purpose of `_printf`
- Supported format specifiers
- Function behavior & return values
- Usage examples
- Author section

---
