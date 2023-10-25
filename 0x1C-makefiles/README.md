# 0x1C-makefiles

**Requirements**

* General
    * Allowed editors: vi, vim, emacs
    * OS: Ubuntu 20.04 LTS
    * Version of gcc: 9.3.0
    * Version of make: GNU Make 4.2.1
    * All your files should end with a new line
    * A README.md file, at the root of the folder of the project, is mandatory
* Makefile
    * name of the executable: school
    * rules: all, clean, fclean, oclean, re
    * variables: CC, SRC, OBJ, NAME, RM, CFLAGS
        * CC: the compiler to be used
        * SRC: the .c files
        * OBJ: the .o files
        * NAME: the name of the executable
        * RM: the program to delete files
        * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
    * The all rule should recompile only the updated source files
    * The clean, oclean, fclean, re rules should never fail
    * You are not allowed to have a list of all the .o files

**Tasks**

* **0. make -f 0-Makefile**
    * Mandatory
    * Create your first Makefile.
* **1. make -f 1-Makefile**
    * Mandatory
    * Create a Makefile with the following variables:
        * CC: the compiler to be used
        * SRC: the .c files
* **2. make -f 2-Makefile**
    * Mandatory
    * Create a Makefile with the following variables:
        * CC: the compiler to be used
        * SRC: the .c files
        * OBJ: the .o files
        * NAME: the name of the executable
* **3. make -f 3-Makefile**
    * Mandatory
    * Create a Makefile with the following variables:
        * CC: the compiler to be used
        * SRC: the .c files
        * OBJ: the .o files
        * NAME: the name of the executable
        * RM: the program to delete files
* **4. A complete Makefile**
    * Mandatory
    * Create a Makefile with the following variables:
        * CC: the compiler to be used
        * SRC: the .c files
        * OBJ: the .o files
        * NAME: the name of the executable
        * RM: the program to delete files
        * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
* **5. Island Perimeter**
    * Mandatory
    * Create a function called `island_perimeter` that takes a list of lists of integers as input and returns the perimeter of the island described in the list.

**Tips**

* To recompile all source files, use the `re` target.
* To clean up all temporary files and the executable, use the `fclean` target.
* To check your code for style errors, use the following command:

```
flake8 .
```
