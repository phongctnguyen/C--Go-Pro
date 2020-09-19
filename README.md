# C++ Cheatsheet

## I. Errors

### Compiler Errors

**Syntax errors**: something wrong with the structure

- Ex:

```
return 0 // need ";"
```

**Semantic errors**: something wrong with the meaning

- Ex:

```
a + b // doesn't make sense to add a and b
```

**Compiler Warnings**

- The compiler has recognized an issue with your code that could lead to a potential problem

- It's only a warning because the compiler is still able to generate correct machine code

- Ex: int miles_driven; // "miles_driven" is used uninitialized ...

### Linker Errors

- The linker is having trouble linking all the object files together to create an executable

- Usually there is a library or object files that is missing

### Runtime Errors

- Errors that occur when the program is executing

- Some typical runtime errors

  - Divide by zero

  - File not found

  - Out of memory

- Can cause your program crash. Exception Handling can help deal with runtime errors

### Logic Errors

- Errors or bugs in your code that cause your program to run incorrectly

- Logic errors are mistakes made by programmer

## II. Structure of a C++ Program

### Preprocessor Directives

- Directives start with "#"

- Commands to the preprocessor

### Comments

- Single Line: //

- Mutli Line: /\* \*/

### The main() function

- Every C++ program must have exactly 1 main() function

- Starting point of program execution

- return 0 indicates successful program execution

- 2 versions that both valid:

  ```
  int main()

  int main(int argc, char *argv[])
  ```

### Namespaces

- Names given to parts of code to help reduce naming conflicts

- std is the name for the C++ 'standard' namespace

- Third-party framework will have their own namespaces

- Scope resolution operator ::

- How can we use these namespaces?

### Input & Output

**Output** (cout and <<):

- Insert the data into the cout stream

- Can be chained

- Does not automatically add line breaks

**Input** (cin and >>):

- Extract data from the cin stream based on data's type

- Can be chained

- Can fail if the entred data cannot be interpreted

## III. Variables & Constants

### Variables

- A variable is an abstraction for a memory location

- Allow programmers to use meaningful names and not memory addresses

- Variables have type and value

- Variables _must_ be declared before they are used

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

  - expressed in bits
  - the more bits the more values that can be represented
  - the more bits the more storage required

  ![type-size](https://raw.githubusercontent.com/nguyenchiemminhvu/CPP-Tutorial/master/1-cpp-co-ban/1-4-bien-va-cac-kieu-du-lieu-trong-cpp/10.png)

- Character Types:

  - Use to represent single character: 'X', 'a', '2'
  - Wider types are used to represent wide character sets

- Integer Types: (signed and unsigned)

  - Used to represent whole numbers
  - Signed and unsigned versions

- Floating-point Types:

  - Used to represent non-integer numbers
  - Represently by mantissa and exponent (scientific notation)
  - Precision is the number of digits in the mantissa
  - Precision and size are compiler dependent

  * Can use _"sizeof"_ operator to check the size in bytes of a type or variable

### Constant

- Like C++ variables

  - Have Names
  - Occupy storage
  - Value cannot change once declared!

- Types of constants
  - Literal constants
  - Declared constant ("const" keyword)
  - Constant expressions ("constexpr" keyword)
  - Enumerated constants ("enum" keyword)
  - Defined constants (#define) -> Don't use in modern C++

## IV. Arrays and Vectors

### Arrays

**What is an array**

- Compound data type or data structure
  - Collection of elements
- All elements are of the same type
- Each element can be accessed directly

**Arrays Characteristics**

- Fixed size
- Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index
- First element is at index 0
- Last element is at index size - 1
- No checking to see if you are out of bounds
- Always initialize arrays
- Very efficient
- Iteration (looping) is often used to process

```
*Declaring*
Element_Type array_name [constant number of elements]
Ex:
int test_scores [5];

const double days_in_year {365};
double hi_temperatures [days_in_year];

*Initialization*
Element_Type array_name [constant number of elements] {init list}
Ex:
int test_scores [5] {1, 2, 3, 4, 5};

int high_score [10] {3, 5} // init to 3, 5 and remaning to 0

const double days_in_year {365};
double hi_temperatures [days_in_year] {0}; // init all to 0

int another_array [] {1, 2, 3, 4, 5}; // size automatically calculated

*Accessing array elements*
array_name [element_index]
Ex:
test_scores[0]
test_scores[1]
...
test_scores[4]

```

**How Arrays Work**

- The name of the array represent the location of the first element in the array (index 0)
- The [index] represents the offset from the beginning of the array
- C++ simply performs a calculation to find the correct element
- Remember - no bounds checking!

**Multidimensional Arrays**

```
*Declaring*
Element_Type array_name [dim1_size] [dim2_size]
Ex:
int movie_rating [3][4];
```

- Multidimension arrays

![multi-dim](https://i.ibb.co/p1nrCGH/Capture.png)

- Accessing multi-dimension array elements

![access-multi-dim-element](https://i.ibb.co/YW46m12/Capture1.png)

- Initializing multi-dimension arrays

![ini-multi-dim-element](https://i.ibb.co/rF3ZbTd/Capture4.png)

### Vectors

**What is an array**

- Container in the C++ STL
- An array that can grow and shrink in size at execution time
- Provides similar semantics and syntax as arrays
- Very efficient
- Can provide bounds checking
- Can use lots of cool functions like sort, reverse, find and more

```
# include <vector>
using namespace std;
*Declaring*
vector <char> vowels (5); // 5 elements

*Initializing*
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
vector <double> temperatures (365, 80.0); // 365 elements, value of each element is 80.0

*Accessing vector elements*
vector <int> test_scores = {100, 99, 98, 97, 96};

- Two ways to access vector elements

1) vector_name [element_index]
Ex:
test_scores[0]; // 100

2) vector_name.at(element_index)
Ex:
test_scores.at(1); // 99

- Some methods:
+ size(): Get size of vector
vector.name.size();
Ex:
test_scores.size(); // 5

+ push_back(): Use to grow vector
vector_name.push_back(element);
Ex:
test_scores.push_back(95); // 100, 99, 98, 97, 96, 95
```

**Vectors Characteristics**

- Dynamic size
- Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index
- First element is at index 0
- Last element is at index size - 1
- [] No checking to see if you are out of bounds
- Provides many useful function that do bound check
- Elements initialized to zero
- Very efficient
- Iteration (looping) is often used to process

**Vectors out of bounds**

- Arrays never do bounds checking
- Many vector methods provide bounds checking (Ex: at method ...)
- An exception and error message is generated

## IV. Statements and Operators

### Expressions and Statements

**Expressions**

- The most basic building block of a program
- A sequence of operators and operands that specifies a computation
- Computes a value from a number of operands
- ...

```
34 // literal
favorite_number // variable
1.5 + 2.8 // addition
a > b // relational
a = b // assignment
```

**Statements**

- A complete line of code that performs some action
- Usually terminated with a semi-colon
- Usually contain expressions
- C++ has many types of statements (expression, null, compounds, selection, iteration, declaration, jump, try blocks ...)

```
int x; // declaration
x = 5; // assignment
1.5 + 2.8; // expressions
ig (a > b) cout << "a is greater than b"; // if statement
```

**Operators**

- C++ has a rich set of operators
  - unary, binary, ternary
- Common operators can be grouped as follows
  - assignment
  - arithmetic
  - increment/decrement
  - relational
  - logical
  - member access
  - other

**Mixed Type Expressions**
- C++ operations occur on same type operands
- If operands are of different types, C++ will convert one
- It could affect calculations results
- C++ will attempt to automatically convert types (coercion). If it can't, a compiler error will occur
- Conversions:
  - Higher vs Lower types are based on the size of the values the type can hold
  - Type Coercion: conversion of one operand to another data types
  - Promotion: conversion to a higher type (used in mathematical expressions)
  - Demotion: conversion to a lower type (used with assignment to lower type)
```
2 * 5.2 // 2 is promoted to 2.0

int num {0};
num = 100.2; // 100.2 is demoted to 100

Explicit Type Casting: static_cast<type>
int number {100};
cout << static_cast<double> (number); // 100.0
```

**Testing Equality**
- Using == and != operators
  + Compares the values of 2 expressions
  + Evaluates to a Boolean (True or False, 1 or 0)
  + Commonly used in control flow statements

```
cout << num1 == num2 << endl; // 0 or 1
cout << std::boolalpha;
cout << num1 == num2 << endl; // true or false
cout << std::noboolalpha;
```

**Compound Assignment**
![compound-assignment](https://i.ibb.co/6Jqsrnn/compound.png)

**Operator Precedence**
![operator-precedence](https://i.ibb.co/5x223Dp/precedence.png)

- Use precedence rules when adjacent operators are different
- Use associativity rules when adjacent operators have the same precedence
- Use parenthesis to absolutely remove any doubt