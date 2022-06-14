## 0x18-DYNAMIC_LIBRARIES

## About

This readme informs users:
- How dynamic library work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- Basic usage nm, ldd, ldconfig

## REQUIREMENTS


- Allowed editors: vi, vim, emacs
- Files should be compiled on Ubuntu 20.04 LTS using
> _gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89_
- You are not allowed to use global variables
- You are not allowed to use the standard library.
- Any use of functions like printf, puts, etc… is forbidden

** Bash **
- The first line of all your files should be exactly
> _#!/bin/bash_
- All your files must be executable

| Task | Description |
| :--- | ----------- |
| [libdynamic.so](./len) | Create the dynamic library libdynamic.so containing all the functions listed. |
| [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Create a script that creates a dynamic library called **`liball.so`** from all the .c files that are in the current directory. |
| [100-operations.so]() | Create a dynamic library that contains C functions that can be called from Python. |
| [101-make_me_win.sh](./101-make_me_win.sh) | Our mole also gave us a piece of documentation. |
