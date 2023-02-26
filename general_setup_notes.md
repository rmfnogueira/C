# 21st Century_C
## USE your compiler warnings. ALWAYS 

## If your compiler advises a change, don’t second-guess it or put off the fix. Do everything necessary to (1) understand why you got a warning and (2) fix your code so that it compiles with zero warnings and zero errors.

## Libraries 
-    libcURl
-    libGLib
-    libGSL
-    libSQLite3
-    libXML2

### Common locations may be installed:

- The operating system vendor may define a standard directory or two where libraries are installed by the vendor.

- There may be a directory for the local sysadmin to install packages that shouldn’t be overwritten on the next OS upgrade from the vendor.

- Users typically don’t have the rights to write to these locations, and so should be able to use libraries in their home directories.

(The POSIX standard refers to these directories as “the usual places.”)

- Libs on uncommon locations compiler FLAG

> You already put #include <useful.h> in your code; now you have to put this on the command line:
> gcc -I/usr/local/include use_useful.c -o use_useful -L/usr/local/lib -luseful

## Packages to definitely get:

    A compiler. Definitely install gcc; clang may be available.

    GDB, a debugger.

    Valgrind, to test for C memory usage errors.

    gprof, a profiler.

    make, so you never have to call your compiler directly.

## Heavy duty tools

>autotools =>
  - autoconf
  - automake
  - libtool

# GCC
## Flags examples and notes

> gcc erf.c -o erf -lm -g -Wall -O3 -std=gnu11

 - **-g** :: adds symbols for debugging
 - **-std=gnu11** :: is clang- and gcc-specific, and specifies that the compiler should allow code conforming to the C11 and POSIX standards
 - **-O3** :: indicates optimization level three, which tries every trick to build faster code. 
 - **-Wall** :: adds compiler warnings. This works for gcc, clang, and icc. 
 - **-I**-:: adds the given path to the include search path, which the compiler searches for header files you #included in your code.
 - **-L** :: adds to the library search path.
 - **-L** :: flag tells the compiler where to search for libraries to resolve symbols;
 - **-Wl** flag passes its flags through from gcc/clang/icc to the linker, and the linker embeds the given -R into the runtime search path for libraries to link to. 




> Order matters. If you have a file named specific.o that depends on the Libbroad library, and Libbroad depends on Libgeneral, then you will need:
 
**gcc specific.o -lbroad -lgeneral**

- Any other ordering, such as _gcc -lbroad -lgeneral specific.o_, will probably fail. **You can think of the linker looking at the first item, specific.o, and writing down a list of unresolved function, structure, and variable names. Then it goes to the next item, -lbroad, and searches for the items on its still-missing list, all the while potentially adding new unresolved items, then checking -lgeneral for those items still on the missing list.** If there are names still unlocated by the end of the list (including that implicit -lc at the end), then the linker halts and gives what is left of its missing-items list to the use

- The POSIX standard specifies that c99 be present on your system, so the compiler-agnostic version of the above line for compiling C99 code would be:

**c99 erf.c -o erf -lm -g -Wall -O3**

> You can always use find to look up the needed lib => find /usr -name 'libuseful*'


### pkg-config

pkg-config addresses this (libraries locations) by maintaining a repository of the flags and locations that packages self-report as being necessary for compilation.


> on the command line, when you surround a command by backticks, the shell replaces the command with its output.
- gcc `pkg-config --cflags --libs gsl libxml-2.0` -o specific specific.c
  > the compiler sees
- gcc -I/usr/include/libxml2 -lgsl -lgslcblas -lm -lxml2 -o specific specific.c

**pkg-config does a lot of the work for us, but it is not sufficiently standard** that we can expect that everybody has it or that every library is registered with it.

> Warning

- There are often environment variables for paths, such as CPATH or LIBRARY_PATH or C_INCLUDE_PATH. You would set them in your .bashrc or other such user-specific list of environment variables.

## Runtime Linking

- Static libraries are linked by the compiler by effectively copying the contents of the library into the final executable.
- So the program itself works as a more-or-less standalone system. (selective imports reduce size ? )
- Shared libraries are linked to your program at runtime, meaning that we have the same problem with finding the library that we had at compile time all over again at runtime. **What is worse, users of your program may have this problem.**

>  If your library is in a nonstandard path, then you need to find a way to modify the runtime search path for libraries. 
- Options:
  - If you packaged your program with Autotools, Libtool knows how to add the right flags, and you don’t have to worry about it.
  
  - gcc, clang, or icc based on a library in libpath, add:
    - **LDADD=-Llibpath -Wl,-Rlibpath** (to the subsequent makefile)

> To ensure that libpath is searched for shared libraries at runtime, use (.bashrc | .zshrc)
> export LD_LIBRARY_PATH=libpath:$LD_LIBRARY_PATH #Linux,Cygwin
> wxport DYLD_LIBRARY_PATH=libpath:$DYLD_LIBRARY_PATH #OS X


