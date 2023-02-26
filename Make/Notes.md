# Makefiles

- The makefile provides a resolution to all this endless tweaking. It is basically an organized set of variables and sequences of one-line shell scripts.

- The POSIX-standard make program reads the makefile for instructions and variables, and then assembles the long and tedious command lines for us.

> Example:

**P**=**program_name**
**OBJECTS**=
**CFLAGS**= -g -Wall -O3
**LDLIBS**=
**CC**=c99

**$(P):** $(OBJECTS)

> Make will let you set variables on the command line, independent of the shell. Thus, these two lines are close to equivalent:

**make CFLAGS="-g -Wall"**   _Set a makefile variable._
**CFLAGS="-g -Wall" make**   _Set an environment variable visible to make and its children._

> You can have spaces around the equals sign without anything breaking.
> Usage:

- Save the makefile in the same directory of your .c files.
- Set programname (NOT PROGRAMNAME.C)
- Everytime theres a need to compile, just type **make**
  
> Explanations:
-  five out of six lines of this makefile are about setting variables (two of which are currently set to be blank)
> we should take a moment to consider environment variables in a little more detail.
- The shell and make use the $ to indicate the value of a variable
-  the shell uses $var
-   make wants any variable names longer than one character in parens: $(var)
-   So, given the preceding makefile, **$(P): $(OBJECTS) will be evaluated to mean program_name:** .


##  several ways to tell make about a variable:

- Set the variable from the shell before calling make, and export the variable. => **export CFLAGS='-g -Wall -O3'**

> TIP: Omit the first line in the makefile (P=program_name), and instead set it once per session via export P=program_name. Means i have to edit the makefile less frequently. (You can put these export commands in your shell’s startup script)


- **export** a variable for a single command by putting the assign,ent just before the command. 
- **env** command lists environment variables it knows about. 

- Example:
  - PANTS=khaki env | grep PANTS
  - PANTS=kakhi PLANTS="ficus fern" env | grep 'P.*NTS'
> nOTE: This form is a part of the shell specification’s simple command description, meaning that the assignment needs to come before an actual command. 
> This will matter for noncommand shell constructs like:
  - **if [-e afile] ; then VAR=val ./program_using_VAR ; fi**

All of these means are equivalent, as far as your makefile is concerned, with the **exception that **child programs called by make will know new environment variables but won’t know any makefile variables.  