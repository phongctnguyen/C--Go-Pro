# C++ Cheatsheet

## I. Errors

### Compiler Errors

* *Syntax errors*: something wrong with the structure
  
  - Ex: 
  ```
  return 0 // need ";"
  ```

* *Semantic errors*: something wrong with the meaning

  - Ex: 
  ```
  a + b // doesn't make sense to add a and b
  ```

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


## II. Structure of a C++ Program

### Preprocessor Directives

* Directives start with "#"

* Commands to the preprocessor

### Comments

* Single Line: //

* Mutli Line: /* */

### The main() function

* Every C++ program must have exactly 1 main() function

* Starting point of program execution

* return 0 indicates successful program execution

* 2 versions that both valid:

  ```
  int main()

  int main(int argc, char *argv[])
  ```
### Namespaces

* Names given to parts of code to help reduce naming conflicts

* std is the name for the C++ 'standard' namespace

* Third-party framework will have their own namespaces

* Scope resolution operator ::

* How can we use these namespaces?

### Input & Output

* *Output* (cout and <<):

  - Insert the data into the cout stream

  - Can be chained

  - Does not automatically add line breaks

* *Input* (cin and >>):

  - Extract data from the cin stream based on data's type

  - Can be chained

  - Can fail if the entred data cannot be interpreted

## III. Varibles & Constants

### Variables

  - A variable is an abstraction for a memory location

  - Allow programmers to use meaningful names and not memory addresses
  
  - Varibales have type and value

  - Variballe *must* be declared before they are used

  - A variables value may change

  - Declaring:          
  ```
                          VariableType VariableName;
  ```

  - Initializing:
  ```
  int age; // uninitialized
  
  int age = 21; // C-like initialization

  int age (21); // Constructor initialization

  int age {21}; // C++11 list initialization syntax
  ```

### C++ Primitives Data Types

  - Type sizes:
    + expresssed in bits
    + the more bits the more values that can be represented
    + the more bits the more storage required

  ![type-size](https://raw.githubusercontent.com/nguyenchiemminhvu/CPP-Tutorial/master/1-cpp-co-ban/1-4-bien-va-cac-kieu-du-lieu-trong-cpp/10.png)

  - Character Types:
    + Use to represent single character: 'X', 'a', '2'
    + Wider types are used to represent wide character sets

  - Integer Types: (signed and unsigned)
    + Used to represent whole numbers
    + Signed and unsigned versions

  - Floating-point Types:
    + Used to represent non-integer numbers
    + Represently by mantissa and exponent (scientific notaion)
    + Precision is the number of digits in the mantissa
    + Precision and size are compiler dependent
  
  - Can use *"sizeof"* operator to check the size in bytes of a type or variable

### Constant

- Like C++ variables
  + Have Names
  + Occupy storage
  + Value cannot change once declared!

- Types of constants
  + Literal constants
  + Declared constant ("const" keyword)
  + Constant expressions ("constexpr" keyword)
  + Enumerated constants ("enum" keyword)
  + Defineded constants (#define) -> Don't use in modern C++
    
  




