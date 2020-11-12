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

## V. Statements and Operators

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
  - Compares the values of 2 expressions
  - Evaluates to a Boolean (True or False, 1 or 0)
  - Commonly used in control flow statements

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

## VI. Controlling Program Flow

**Program Flow**

- Sequence: Ordering statements sequentially

- Selection: Making decisions
  - if
  - if - else
  - nested if
  - switch
  - Conditional operator ? :
- Iteration: Looping or repeating
  - for loop
  - range-based for loop
  - while loop
  - do - while loop
  - continue and break
  - infinite loops
  - nested loops

### Selection

**If Statement**

```
if (expr) {
  statement;
}
```

- If the expression is true then execute the statement
- If the expression is false then skip the statement

![if-statement](https://i.ibb.co/r0xxhFS/if.png)

```
Ex:

if (num > 10) cout << "Num is greater than 10";

if (health < 100 && player_healed)
  health = 100;
```

- Block statement

![block-statement](https://i.ibb.co/L0byvDT/block.png)

- Create a block of code by including more than one statement in code block {}
- Blocks can also contain variable declarations
- These variables are visible only within the block - local scope

```
{
  // variable declarations
  statement1;
  statement2;
  ...
}
```

**If - Else-If - Else**

```
if (expr)
  statement1;
else
  statement2;
```

- If the expression is true then execute the statement1
- If the expression is false then execute the statement2

![if-else](https://i.ibb.co/bs5n2z2/if-else.png)

![if-elseif-else](https://i.ibb.co/HxKtVw8/f-elseif-else.png)

**Nested If**

```
if (expr1)
  if (expr2)
    statement1;
  else
    statement2;
```

![nested-if](https://i.ibb.co/XS7by2T/nested-if.png)

**Switch**

```
switch (integer_control_expr)
{
  case expression_1: statement1; break;
  case expression_2: statement2; break;
  ...
  case expression_N: statementN; break;
  default: statement_default
}
```

![switch-with-enum](https://i.ibb.co/MSvG1CP/switch-enum.png)

- The control expression must evaluate to an integer type
- The case expressions must be constant expressions that evaluate to integer or integers literals
- Once a match occurs all following case sections are executes UNTIL a break is reached the switch complete
- Best practice:
  - provide break statement for each case
  - default is optional, but should be handled

**Conditional Operator**

```
(cond_expr) ? expr1 : expr2
```

- cond_expr evaluates to a boolean expression
  - if cond_expr is true then the value of expr1 is returned
  - if cond_expr is false then the value of expr2 is returned
- Similar to if-else construct
- Ternary operator
- Very useful when used inline
- Very easy to abuse

### Looping

**Iteration**

- The third basic building block of programming
  - sequence, selection, iteration
- Iteration or repetition
- Allows the execution of a statement of block of statements repeatedly
- Loops are made up a loop condition and the body which contains the statements to repeat
- Use-cases:
  - a specific number of times
  - for each element in a collection
  - while a specific condition remains true
  - until a specific condition becomes false
  - until we reach the end of some input stream
  - forever
  - ...

**Looping Constructs**

- for loop
  - iterate a specific number of times
- range-based for loop
  - one iteration for each element in a range or collection
- while loop
  - iterate while a condition remains true
  - stop when the condition becomes false
  - check the condition at the beginning of every iteration
- do-while loop
  - iterate while a condition remains true
  - stop when the condition becomes false
  - check the condition at the end of every iteration

**For loop**

```
for (initialization; condition; increment)
  statement;

for (initialization; condition; increment) {
  statement(s);
}
```

![example-1](https://i.ibb.co/wJp08pt/example1.png)
![example-2](https://i.ibb.co/3pWV0Y9/example2.png)
![example-3](https://i.ibb.co/vw7hwNK/example.png)

- The basic for loop is very clear and concise
- Since the for loop's expressions are all optional, it is possible to have
  - no initialization
  - no test
  - no increment

```
for (;;)
  cout << "Endless loop" << endl;
```

**range-based for loop**

```
for (var_type var_name : sequence)
  statement;

for (var_type var_name : sequence) {
  statements;
}
```

![range-based-1](https://i.ibb.co/wRx5nZr/range-based1.png)
![range-based-2](https://i.ibb.co/TLqcsC5/range-based2.png)
![range-based-3](https://i.ibb.co/hFNtJKG/range-based3.png)
![range-based-4](https://i.ibb.co/rvVW361/range-based4.png)

**while loop**

```
while (expression)
  statement;

while (expression) {
  statements;
}
```

![while-loop-1](https://i.ibb.co/crwV0t7/while-1.png)
![while-loop-2](https://i.ibb.co/QrVRq9H/while-2.png)
![while-loop-3](https://i.ibb.co/RvJ597t/while-3.png)
![while-loop-4](https://i.ibb.co/Y3zCMLY/while-4.png)

**do-while loop**

```
do {
  statements;
} while (expression;
```

![do-while](https://i.ibb.co/Wns3snp/do-while.png)

**continue and break**

- continue:

  - no further statements in the body of the loop are executed
  - control immediately goes directly to the beginning of the loop for the next iteration

- break:
  - no further statements in the body of the loop are executed
  - loop is immediately
  - control immediately goes to the statement following the loop construct

**infinite loops**

- loops whose condition expression always evaluate to true
- usually this in unintended and a programmer error
- sometimes programmers use infinite loops and include and break statements in the body to control them
- sometimes infinite loops are exactly what we need
  - event loop in an event-driven program
  - operating system

**nested loops**

- loop nested within another loop
- can be many as many levels deep as the program needs
- very useful with multi-dimensional data structures
- outer loop vs inner loop

![nested-1](https://i.ibb.co/ySBGrbS/nested1.png)
![nested-2](https://i.ibb.co/HNgnPkt/nested2.png)
![nested-3](https://i.ibb.co/6yHTwZp/nested3.png)

## VII. Characters and Strings

**Character functions**

```
#include <cctype>
function_name (char)
```

- functions for testing characters
- functions for converting character case
- Testing character:

![testing-character](https://i.ibb.co/4mgYCb0/testing-character.png)

- Converting character:

![converting-character](https://i.ibb.co/8jtw3Jm/converting.png)

**C-style Strings**

- Sequence of characters
  - contiguous in memory
  - implemented as an array of characters
  - terminated by a null character(null - character with a value of zero)
  - referred to as zero or null terminated strings
- String literal
  - sequence of characters in double quotes (eg: "Frank")
  - constant
  - terminated with null character

```
* Declaring variables
char my_name [] {"Phong"}; // Frank\0
my_name[5] = 'y'; // Problem

char name [8];
name = "Frank"; // Error
strcpy(name, "Phong"); // OK
```

- Functions that work with C-style Strings: (#include <cstring>)
  - Copying
  - Concatenation
  - Comparison
  - Searching
  - ...

![cstring](https://i.ibb.co/yVLRbbS/cstring.png)

- Functions to convert C-style Strings to: (#include <cstdlib>)
  - integer
  - float
  - long
  - ...

**C++ Strings**

- std::string is a Class in the Standard Template Library
- #include<string>
- std namespace
- contiguous in memory
- dynamic size
- work with input and output streams
- lots of useful member functions
- our familiar operators can be used (+, =, <, <=, >, >=, +=, ==, !=, [] ...)
- can be easily converted to C-style Strings if needed
- safer

```
* Declaring and initializing
#include <string>
using namespace std;

string s1;
string s2 {"Frank"};
string s3 {2}; // Frank
string s4 {"Frank", 3}; // Fra
string s5 {s3, 0, 2}; // Fr
string s6 (3, 'X'); // XXX

* Assignment: =
string s1;
s1 = "Hello World";
```

- Concatenation:

![concatenation](https://i.ibb.co/CsbtWsK/concatenation.png)

- Accessing:

![accessing](https://i.ibb.co/MRX9SmZ/accessing.png)

- Comparing

![comparing](https://i.ibb.co/Tr2L2pV/comparing.png)

![comparing-example](https://i.ibb.co/gr0fhTx/comparing-ex.png)

- Substrings: substr()

![substrings-substr](https://i.ibb.co/HtGZHKW/substrings.png)

- Substrings: find()

![substrings-find](https://i.ibb.co/L5m2MCD/substrings-find.png)

- Removing characters - erase() and clear()

![removing](https://i.ibb.co/WcGJscQ/removing.png)

- Other methods

![length](https://i.ibb.co/4PDpyvm/length.png)

![getline](https://i.ibb.co/5rCFcCs/getline.png)

## VIII. Functions

**What is function**

- C++ Programs

  - C++ STL (functions and classes)
  - Third-party libraries (functions and classes)
  - Our own functions and classes

- Functions allow the modularization of a program
  - Separate code into logical self-contained units
  - These units can be reused

![modularized](https://i.ibb.co/VMwLkNj/modularized.png)

**Defining Functions**

- name
  + the name of the function
  + same rules as for variables
  + should be meaningful
  + usually a verb or verb phrase

- parameter list
  + the variables passed into the function
  + their types must be specified
  + 
- return type
  + the type of the data that is returned from the function

- body
  + the statements that are executed when the function is called
  + in curly braces {}

![defining-functions](https://i.ibb.co/MGyyyPc/defining-function.png)

**Function Protoypes**
- The compiler msut know about a  function before it is used

- Define functions before calling them
  + OK for small programs
  + Not a practical solution for larger programs

- Use function prototypes
  + Tells the compiler what it needs to know without a full function definition
  + Also called forward declarations
  + Placed at the beginning o the program
  + Also used in our own header files (.h) - more about  this later

```
int function_name(int); // prototypes
int function_name(int a); // prototypes
```
**Function Protoypes**
