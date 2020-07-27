# C++ Cheatsheet

## Errors

### Compiler Errors

* *Syntax errors*: something wrong with the structure
  
  - Ex: return 0 // need ";"

* *Semantic errors*: something wrong with the meaning

  - Ex: a + b // doesn't make sense to add a and b

* *Compiler Warnings*: 

  - The compiler has recofnized an issue with your code that could lead to a potential probem

  - It's only a warning because the compiler is still able to generate correct machine code
  
  - Ex: int miles_driven; // "miles_driven" is used uninitialized ...

### Linker Errors

* The linker is having trouble linking all the object files together to create an executable

* Usually there is a library or object files that is missing

### Runtime Errors

* Errors that occur when the program is executing

* Some typical runtime errors

  - Divide by zero

  - File not found

  - Out of memory

* Can cause your program crash. Exeption Handling can help deal with runtime errors

### Logic Errors

* Errors or bugs in your code that cause your program to run incorrectly

* Logic errors are mistakes made by programmer


  