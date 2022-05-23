# C - Makefiles

## Description of the files inside this folder:

- main.h: Header file with all function prototypes.

0. Create a simple Makefile.
- Name of the executable: school
- Rules: all. 
	- The all rule builds your executable

1. Create a Makefile.
- Name of the executable: school
- Rules: all. 
	- The all rule builds your executable
- Variables: CC, SRC
	- CC: the compiler to be used
	- SRC: the .c files

2. Create a Makefile.
- Name of the executable: school
- Rules: all. 
	- The all rule builds your executable
- Variables: CC, SRC, OBJ, NAME
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
- The all rule should recompile only the updated source files

3. Create a Makefile.
- Name of the executable: school
- Rules: all, clean, oclean, fclean, re. 
	- all: builds your executable
	- clean: deletes all Emacs and Vim temporary files along with the executable
	- oclean: deletes the object files
	- fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	- re: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
	- RM: the program to delete files
- The all rule should recompile only the updated source files
- The clean, oclean, fclean, re rules should never fail

4. Create a complete Makefile.
- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
	- all: builds your executable
	- clean: deletes all Emacs and Vim temporary files along with the executable
	- oclean: deletes the object files
	- fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
	- re: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
	- CC: the compiler to be used
	- SRC: the .c files
	- OBJ: the .o files
	- NAME: the name of the executable
	- RM: the program to delete files
	- CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The all rule should recompile only the updated source files
- The clean, oclean, fclean, re rules should never fail

5. Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

- grid is a list of list of integers:
	- 0 represents a water zone
	- 1 represents a land zone
	- One cell is a square with side length 1
	- Grid cells are connected horizontally/vertically (not diagonally).
	- Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).


## Languages and Tools:

- OS: Ubuntu 20.04 LTS
- Language: C17 (C standard revision) (__STDC_VERSION__ --> 201710L)
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
- Language: Python 3.8.10
- Style guidelines: [PEP 8](https://www.python.org/dev/peps/pep-0008/)

<p align="left"> <a href="https://www.cprogramming.com/" target="_blank"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> </p>
<p align="left"> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> </p>

## Author

- Juan Camilo González <a href="https://twitter.com/juankter" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="juankter" height="30" width="40" /></a>
<a href="https://bit.ly/2MBNR0t" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="https://bit.ly/2mbnr0t" height="30" width="40" /></a>
