# C PROGRAMMING 
# ALX PERSONAL LEARNING EXERCISES
General Exercises
This is my repository where I do all of my c exercises

# My learning Progress
# argc argv[]
argc argv[]
arguments

# variadic fuunctions
variadic functions

# bit manipulation
bit manipulation

# constants start here
constants
define

# conditional statements start here
if statement
nested if stt

# switch statement
switch statement
break

# loops
for loop
while loop
do while loop
continue

# goto == we or you are discouraged to use goto in programming as it's had to track loops nd progress
max_pid

# uni- and multi-dimensional arrays
arrays - uni-dimensional arrays
arrays1 - Multi-dimensional arrays

# pointers
pointers
pointer to pointer

# strings
Strings as arrays of char
String - Null terminar
String - functions eg strlen()

# structures
struct Name {
    int id;
    char name;
    float etc;
} Nm;

typedef struct Name {
    int id;
    char name;
    float etc;
} Name;

holds datasets of different data types

# union
union Details {
    int id;
    int age;
    int phone;
};
Similar to struct but stores different data types in same location

# typedef
adding typedef to struct
renaming variable data types using typedef

# input output
getchar()
putchar()

gets()
puts()

scanf()
printf()

# preprocessors
#define
#ifndef
#endif

parameterized macros eg 
#define max(x,y) ((x) > (y) ? (x) : (y))

# headerfiles
#ifndef HEADER_FILE
#define HEADER_FILE

#endif

if statements within header files

# type casting
converting from one data type to another
(double)
(int)

# variadic arguments
double average(int num, ...)
va_list ap
va-start(ap, num)
va_arg(ap, int)
va_end(ap)

# command line arguments
int argc
char *argc[]
first element of argument vector is program name eg argv[0]
