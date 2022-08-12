# C++ Notes and Questions

Practice questions are sorted topic wise and contain the question at top, solution, and output at bottom. Object Oriented Programming with C++ book by E. Balagurusamy is used for reference. Scroll down for the short notes or use the Index below.


### Index

| ID | Chapter |
| --- | --- |
| 01 | Principles of Object-Oriented Programming |
| 02 | [Beginning with C++](#02---beginning-with-c) |
| 03 | [Tokens, Expressions and Control Structures](#03---tokens-expressions-and-control-structures) |
| 04 | [Functions in C++](#04---functions-in-c) |
| 05 | [Classes and Objects](#05---classes-and-objects) |
| 06 | [Constructors and Destructors](#06---constructors-and-destructors) |
| 07 | [Operator Overloading and Type Conversions](#07---operator-overloading-and-type-conversions) |
| 08 | [Inheritance: Extending Classes](#08---inheritance--extending-classes) |
| 09 | [Pointers, Virtual Functions and Polymorphism](#09---pointers-virtual-functions-and-polymorphism) |
| 10 | [Managing Console I/O Operations](#10---managing-console-io-operations) |
| 11 | [Working with Files](#11---working-with-files) |
| 12 | [Templates](#12---templates) |
| 13 | [Exception Handling](#13---exception-handling) |
| 14 | [Introduction to the Standard Template Library](#14---standard-template-library) |
| 15 | [Manipulating Strings](#15---manipulating-strings) |
| 16 | New Features of ANSI C++ Standard |
| 17 | Object-Oriented Systems Development |

# NOTES

# 02 - Beginning With C++

### Hello World

```cpp
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!";
    return 0;
}
```

### Comments

```cpp
// Single line comment

/* Multi
   Line
   Comment */
```

### Input and Print

```cpp
cout << "Text : " << variable << endl
     << "Text in next line";

cin >> variable1 >> variable 2;
// Input -> 1 2
// variable1=2 and variable2=2
```

### Program Structure

1. Include files
2. Class declaration
3. Member function definations
4. Main function

### Class

```cpp
class className
{
private:
    // Variables and functions here are only usable by other member or friend functions of the same class
    int numVar;
    double doubleVar;

public:
    // Variables and functions here are usable publicly
    int newNumVar;
    void print(void)
    {
        // Functions can be inline
        cout << numVar << endl
             << newNumVar;
    }
    void changeNum(int num);
};

void className::changeNum(int num)
{
    // Functions can be defined outside the class
    numVar = num;
}

// Using the class
className classVar;
classVar.changeNum(10);

// This is public so can be used directly
// But not the numVar, and doubleVar
cin >> newNumVar;
cout << newNumVar;
```

### Relationship with C

C++ is a superset of C, so most of the things that worked in C, works the same way in C++ too.

[**Jump to Index**](#index)

# 03 - Tokens, Expressions, and Control Structures

### Tokens

Smallest individual units of a program :

- **Keyword -** Reserved identifiers like break, while, void etc
- **Identifiers -** Names of variables, functions, classes etc. They can start with char or underscore, and can only have char, digit, and underscore.
- **Constants**
- **Strings**
- **Operators**

### Basic datatypes

1. **User-defined -** Struct, union, class, enum
2. **Derived -** Array, function, pointer, reference
3. **Built-in -** Integral (int, char), floating (float, double), void

### Enum

```cpp
enum var1{a,b,c,d,e};     // 0 1 2 3 4
enum var2{a,b,c=5,d,e};   // 0 1 5 6 7
enum var3{a,b=5,c,d=8,e}; // 0 5 6 8 9

int num=a; // num=0
```

### Reference variable (&)

```cpp
dataType &referenceVar = originalVar;
// Both referenceVar and originalVar now point to the same memory location

// Example 1
int a = 1;
int &b = a;
b = 2; // Both a and b = 2

// Example 2
void fnExp(int &x)
{
    x = 2;
}
fnExp(y) // y = 2
```

### Scope resolution operator (::)

```cpp
int a = ::variable1; // Allows to use the global variable1
int b = class1::variable1 // Allows to use the class1's variable1
```

### Memory management operator (new, delete)

```cpp
dataType *ptr1 = new dataType;       // For single element
dataType *ptr2 = new dataType[size]; // For array of elements

delete ptr1;
delete[] ptr2;
```

### Manipulators (endl, setw)

```cpp
#include <iomanip>
cout << setw(6) << 10 << endl //    10 -> Reserve 6 spaces
     << setw(6) << 10000;     // 10000 -> and right justify

cout << left << setw(6) << 10 << 1;
// 10    1 -> 10 is left justified with 6 reserved spaces
```

### Control Structures

**(if-else-if-else)**

```cpp
if (condition1)
{
    // code
}
else if (condition2)
{
    // code
}
else
{
    // code
}
```

**(switch-case)**

```cpp
switch (expressionGivingIntValue)
{
case possibleVal1:
    // code
    break;
case possibleVal2:
    // If this, then default block is also executed as no break
default:
    // code
}
```

**(while)**

```cpp
while (condition)
{
    // code
}
// condition -> code -> condition -> ...
```

**(do-while)**

```cpp
do
{
    // code
} while (condition);
// code -> condition -> code -> ...
```

**(for)**

```cpp
for (initialization; testCondition; increment)
{
    // code
}
// initialization -> testCondition -> code -> increment -> testCondition -> code -> increment -> ...
```

[**Jump to Index**](#index)

# 04 - Functions in C++

### 3 Parts of function

**(Prototype)**

If we want to use fnName before defining it, we must put the prototype above the area where we intend to use it (Generally placed at the top)

```cpp
returnDataType fnName(dataType1 argVar1, dataType2 argVar2, ...);
```

**(Defination)**

```cpp
returnDataType fnName(dataType1 argVar1, dataType2 argVar2, ...)
{
    // code
    return returnDataTypeVar;
}
```

**(Call)**

```cpp
returnDataTypeVar = fnName(argumentsList)
```

### Call by reference

```cpp
void addOne(int &num)
{
    num += 1;
}
int a = 1;
addOne(a); // a = 2
```

### Return by reference

```cpp
int &max(int &a, int &b)
{
    return (a >= b) ? a : b;
}

int a = 1, b = 2;
max(a, b) = 0;
// b is max, so function returns &b, and b becomes 0
```

### Inline functions

```cpp
inline <functionHeader>
{
    // function code
}
```

Expands the function wherever it is called, increases speed for short functions. But not beneficial for larger functions as the increased memory usage outweights speed benefits.

### Default arguments

```cpp
void fnName(int a, int b, float c, int d = 4, float e = 4.5)
{
    // All arguments with default values must be at the end
}
fnName(1, 2, 3.2);         // 1  2  3.2  4  4.5
fnName(1, 2, 3.2, 6);      // 1  2  3.2  6  4.5
fnName(1, 2, 3.2, 8, 9.2); // 1  2  3.2  8  9.2
```

### Function overloading

We can have multiple functions of the same name with different number and types of arguments. Program uses whichever of them best matches the number and type of arguments in the function call.

### Math library

```cpp
#include <cmath>
```

- **ceil(x) -** Rounds to next integer
- **floor(x) -** Rounds to previous integer
- **sin(x), cos(x), tan(x) -** Trigonometric values
- **pow(x,y), sqrt(x) -** x^y and x^(1/2)
- **fabs(x) -** |x|
- **log(x), log10(x) -** lnx and logx

[**Jump to Index**](#index)

# 05 - Classes and Objects

### Structure

```cpp
struct structName
{
    dataType var1;
    dataType var2;
};

structName structVar;          // Declare a struct object
structName structArrayVar[10]; // Array of struct objects
structVar.var1 = 3;            // Members accessible by dot operator
```

### Class

```cpp
class className
{
private:
    // private variable declarations
    // private function declarations
public:
    // public variable declarations
    // public function declarations
};

returnType className::fnName(argsList)
{
    // Example of a Function defined outside the class
    // We can also define it inline, but don't do that usually
    // Instead we use the keyword "inline" before returnType
}

className cVar;          // Declare a class object
className cVarArray[10]; // Array of class objects
cVar.publicVar = 2;
cVar.publicFn(args);
```

- Private stuffs are only accessible by class functions.
- Class functions can call other class functions just by their function names.

### Classes as Fn Args and Returns

```cpp
void fnName1(className c1);  // Pass by value
void fnName2(className &c2); // Pass by reference
className fnName3(arglist);  // Return a className object
```

### Friendly functions

```cpp
class className
{
public:
    friend <functionHeader>;
};
```

A friend function can access private stuffs of classes in which it is declared as a friend. It is usually used with reference to class objects as arguments.

[**Jump to Index**](#index)

# 06 - Constructors and Destructors

### Constructor

```cpp
class className
{
public:
    className(argsList);
};

className::className(argsList)
{
    // This is called whenever an object of the class is created
}

className cVar1(args);             // Declaration method 1
className cVar2 = className(args); // Declaration method 2
```

- They can be overloaded.
- They can have reference to its own class in arguments (copy constructors).

### Destructor

```cpp
class className
{
public:
    ~className();
};

className::~className()
{
    // This is called whenever the object go out of scope
    // Takes no arguments
    // Used to delete dynamically allocated memory
}
```

[**Jump to Index**](#index)

# 07 - Operator Overloading and Type Conversions

### Overloading operators

```cpp
class className
{
public:
    returnType operator<operatorActual>(argsList);        // Way 1
    friend returnType operator<operatorActual>(argsList); // Way 2
};
```

| Type of Function | Unary operator | Binary operator |
| --- | --- | --- |
| Member function | 0 argument | 1 argument |
| Friend function | 1 argument | 2 argument |

- Operators can be overloaded multiple times and for different types.
- For binary operators and member function, the value to the right of operator if passed to the member function of the left value.

### Non-overloadable operators

- `sizeof`, `.` , `.*` , `::` , `?:` operators cannot be overloaded
- `=`, `()`, `[]`, `->` are operators where friend functions cannot be used

### Type conversions

**(Basic -> Class type)**

```cpp
class className
{
public:
    className(basicDataType var);
};
classNameVar = basicDataTypeVar;
// Function above invoked with the basicDataTypeVar as argument
```

**(Class -> Basic type)**

```cpp
class className
{
public:
    operator basicDataType(); // Return basicDataType
};
basicDataTypeVar = classNameVar;
```

**(Class -> Class type)**

We can use the class to basic type method and treat the 2nd class as the basicDataType.

[**Jump to Index**](#index)

# 08 - Inheritance : Extending Classes

### Inheriting basic

```cpp
class baseClass
{
public:    // Stuff
protected: // Stuff
private:   // Stuff
};

class derivedClass : <public or protected or private> baseClass
{
    // Additional stuff
};
```

### Visibility

The public, protected, private mode columns represent type of inhertiance in the derived class if those modes are used.

| Base Class | Public mode | Protected mode | Private mode |
| --- | --- | --- | --- |
| Private | Not inherited | Not inherited | Not inherited |
| Protected | Protected | Protected | Private |
| Public | Public | Protected | Private |

### Protected label

Members and functions of this label can be inherited by derived classes but not accessible by own class objects similar to that of the private label.


### Multiple inheritance

```cpp
class derivedClass : visibilityMode baseClass1, visibilityMode baseClass2
{
    // Inherits both baseClass1 and baseClass 2
    // We can then add additional stuff here
};
```

### Data members or function with same name

- If both derived and base class has a variable or function with same name, the derived class one will be used.
- If multiple base classes have same variable or function names, we can define them in the derivedClass separately and pass whichever class's function or variable to use using scope resolution operator. Ex : `void repeatedFn(void) {baseClass1::repeatedFn();}`

### Multiple inheritance

```
      class grandPrent
        |           |
class parent1     class parent2
        |           |
      class derivedChild
```

All members and functions of grandParent are inherited twice by the derivedChild in the above example. To fix this, visibility mode of parent1 and 2 can be set as `<public or protected or private> virtual` instead of just `<public or protected or private>`

### Constructor of derived classes

```cpp
class derivedClass : visibility baseClass1, visibility baseClass2
{
public:
    derivedClass(argsList) : baseClass1(args1), baseClass2(args2)
    {
        // stuff
    }
};
```

### Nested classes

```cpp
class className
{
private:
    class1 obj1;
    class2 obj2;
public:
    className(args):obj1(args1), obj2(args2)
    {
        // obj1 and 2 need to be initialized this way
    }
};
```

[**Jump to Index**](#index)

# 09 - Pointers, Virtual Functions, and Polymorphism

### Pointer

```cpp
dataType *ptrVar;
ptrVar = &dataTypeVar; // Now we can use *ptrVar inplace of dataTypeVar

// Array
int a[10]; // a is the ptr to the first array element
int *aPtr;
aPtr = a; // *(aptr+i) -> (i+1)th element

// Character Array
char *text = "Roshan";
cout << text;

// Function
returnType (*ptrName)(argList);
ptrName = &fnName; // ptrName(argList) can now be used inplace of fnName(argList)

// Objects
className *ptr, obj;
ptr = &obj;
ptr->memberFn(args);   // Way 1
(*ptr).memberFn(args); // Way 2
```

### *this Pointer

All class members have access to a `*this` pointer which points to the object itself.

[**Jump to Index**](#index)

# 10 - Managing Console I/O Operations

### Get, Put

```cpp
cin.get(charVar);  // Take a char input
cout.put(charVar); // Print a char
```

`cin.get()` waits until a newline character, brings all to memory, then distribute to `get()`. Characters are not transferred as soon as we type it.

### Getline, Write

```cpp
cin.getline(stringOrCharArray, intSize); // Reads until \n or intSize number of characters (whichever is earlier)
cout.write(stringOrCharArray, intSize);  // Prints stuff. If text is less than intSize, it prints gibberish values
```

### Manipulators

```cpp
cout << manipulator << otherStuff;
```

- They are life flags that either affect stuff to immediate right or all stuffs on following it.
- We can chain multiple manipulators one after another

### Common manipulators

```cpp
#include <iomanip>
```

- `showpos`, `noshowpos` : Switch `+` prefix before positive numbers
- `showpoint`, `noshowpoint` : Switch whether to show zeros after decimal
- `setprecision(int)` + `fixed` : How many places after decimal
- `dec`, `oct`, `hex` : Switch number system
- `fixed`, `decimal` : Switch decimal notation
- `left`, `right`, `internal` : Switch justification. Internal left justifies sign, right justifies value
- `setw(int)` : Reserves width for the next variable (right justified by default)
- `setfill(char)` : Fill character for unused reserved space
- `endl` : Equivalent to `\n` 

### Custom manipulators

```cpp
ostream &CustomManipulator(ostream &outPutStream)
{
    outPutStream << "Custom Text or " << otherManipulators;
    return outPutStream;
}
cout << customManipulator << otherStuffs;
```

[**Jump to Index**](#index)

# 11 - Working with Files

### Stream declaration

```cpp
#include <fstream>
ifstream fInVar("filename", mode)  // Input from file
ofstream fOutVar("filename", mode) // Output to file
```

### Modes

- `ios::in` : Input from file (default for ifstream)
- `ios::out` : Output to file (default for ofstream)
- `ios::app` : Append at end
- `ios::ate` : Open and take stream pointer At The End of file
- `ios::trunc` : Delete file contents if exists
- `ios::binary` : Open as binary file
- `ios::nocreate` : Function fails if file doesnot exist
- `ios::noreplace` : Function fails if file exists

### Basic read write

- We can directly use the console I/O operations from the previous chapter for file streams too.
- fInOrOutVar=0 if fails to open.

### Array or Class object read write

```cpp
fInPtr.read((char *)&arrayOrObjOrObjArray, sizeof(arrayOrObjOrObjArray));
fOutPtr.write((char *)&arrayOrObjOrObjArray, sizeof(arrayOrObjOrObjArray));
```

### File stream pointer

- `seekg(intOffset, fromPosFlag)` : Seek for Get (while reading from file). Used to move pointer to another location.
- `seekp(intOffset, fromPosFlag)` : Seek for Put (while writing to file). Used to move pointer to another location.
- `tellg()` : Gives int offset from beginning while reading (Tell for Get)
- `tellp()` : Gives int offset from beginning while writing (Tell for Put)

**fromPosFlag :**

- `ios::beg` : From beginning
- `ios::cur` : From current
- `ios::end` : From end

### Error handling functions

- `fInPtr.good()` : True if no error occurred yet
- `fInPtr.bad()` : True if error occurred
- `fInPtr.fail()` : True if a read or write failed
- `fInPtr.clear()` : Clears all these error states
- `fInPtr.eof()` : True if EOF detected

### Reading till EOF

```cpp
while ((ch = fInPtr.get()) != EOF)
{
    // Stuff
}

while (fIn.read((char *)&objVar, sizeof(objVar)))
{
    // Stuff
}
```

[**Jump to Index**](#index)

# 12 - Templates

### Functions 

```cpp
template <typename tVar1, typename tVar2 = defaultValue...>
returnType fnName(args)
{
    // We can use tVarN as a datatype anywhere in this function
}

fnName<dataType1, dataType2...>(args); // Function call
```

### Classes

```cpp
template <typename tVar1, typename tVar2 = defaultValue...>
class className
{
    // We can use tVarN as a datatype anywhere in this class
};

template <typename tVar1, typename tVar2 = defaultValue...>
returnType className<tVar1, tVar2...>::fnName(agrs)
{
    // We can use tVarN as a datatype anywhere in this function including the arguments
}

className<dataType1, dataType2...> objVar(args);
```

[**Jump to Index**](#index)

# 13 - Exception Handling

### Try, throw, catch

```cpp
try
{
    throw<string, int, double, class...>;
}
catch (const char *errorString)
{
    // If char array is thrown as error
}
catch (customClass &classObj)
{
    // If a customClass object is thrown as error
}
catch (...)
{
    // If thrown datatype doesnot match any other catch blocks
}
```

- We can use throw anywhere, not just inside a try block directly.
- When a throw is encountered, it travels from function caller to caller until a try catch block catches it or it reacher main() where a generic message is shown and program exits.

### Restrict exception types

```cpp
returnType fnName(args) throw(listOfAllowedThrowDataTypes);
```

If we throw any other error type than allowed, program terminates completely with a generic message.

[**Jump to Index**](#index)

# 14 - Standard Template Library

### STL

1. Containers
2. Algorithms
3. Iterators

### Containers

**(Sequence)**

1. **Vector :** Dynamic array. Direct access to all elements. Slow insertion and deletion (except at back end).
2. **Deque :** Direct access to all elements. Slow insertion and deletion (except at both ends).
3. **List :** Doubly linked list. Fast insertion and deletion. Slow read as no direct access.

**(Associative)**

1. **Set :** Unique elements stored
2. **Multiset :** Duplicates allowed
3. **Map :** Elements are key value pairs with unique keys
4. **Multimap :** Duplicate keys allowed

**(Derived)**

1. **Stack :** LIFO
2. **Queue :** FIFO
3. **Priority Queue**

### Some important algorithms

```cpp
#include <algorithm>
```

**(Non-mutating)**

- `count()` : Occurance of a value
- `find()` or `find_end()` : Find position from value
- `equal()` : True if 2 ranges are equal
- `search()` : Find subsequence

**(Mutating)**

- `copy()` or `copy_backward()` : Copy sequence to another
- `fill()` : Fill all with a value
- `remove()` : Delete by value
- `replace()`, `reverse()`, `swap()`

**(Sorting)**

`binary_search()`, `merge()`, `sort()`, `nth_element()` (put element at a place)

**(Set)**

`includes()`, `set_difference()`, `set_intersection()`, `set_union()`

**(Relational)**

- `equal()`
- `max()`, `min()` : Of 2 values
- `max_element()`, `min_element()` : Of a sequence
- `mismatch()` : Point of 1st difference

**(Numeric)**

`accumulate()`, `partial_sum()`, `inner_product()`

### Vector

```cpp
#include <vector>
vector<dataType> vecVar;
vector<dataType>::iterator itrVar = vecVar.begin();
// Elements can be accessed with vecVar[i] or *(itrVar+i)
```

**Vector functions :**

- `begin()` : 1st element reference
- `end()` : Last element reference
- `size()` : Number of elements
- `push_back(dataType)` : Add new element to back
- `pop_back()` : Delete last element
- `erase(startReference, stopReference)` : Delete elements in this range
- `insert(positionReference, value)` : Insert element at a position

### List

```cpp
#include <list>
list<dataType> listVar;
list<dataType>::iterator itrVar = listVar.begin();
// Elements can be accessed with listVar[i] or *(itrVar+i)
```

All vector functions are valid for list too.

### Map

```cpp
#include <map>
map<keyDataType, valueDataType> mapVar;
map<keyDataType, valueDataType>::iterator itrVar = mapVar.begin();
mapVar[key] = value; // Add new element
value = mapVar[key]; // Get value
// (*itrVar).first and (*itrVar).second gives key and value respectively
```

### Notes

- Set and dequeue are similar to the ones above.
- We can use `itrVar!=containerVar.end()` for iterating all elements.

[**Jump to Index**](#index)

# 15 - Manipulating Strings

### Creating

```cpp
#include <string>
string s1, s2("text"), s3(s2);
s1 = "text";
cin >> s1;
getline(cin, s1);
```

### Operators

`=`, `+`, `+=`, `==`, `!=`, `<`, `>`, `<=`, `=>`

### Functions

- `size()` or `length()` : Total characters
- `capacity()` : Current max size before array needs to grow
- `max_size()` : Max characters the array can grow to contain
- `begin()` or `end()` : Reference to first and last characters
- `at(i)` or `stringVar[i]` : Character at i position
- `substr(startPoint, charsFromThere)` : Substring
- `find(subString)` : Returns starting point of first substring occurance or -1
- `find_first_of(char)` or `find_last_of(char)` : First and last occurances of a character
- `insert(atPosition, string)` : Insert string at a position inside another string
- `replace(startPosition, endPositon, string)` : Replace a part of the string with another string
- `erase(startPosition, endPosition)` : Delete a part of string
- `swap(anotherString)` : Swap 2 strings
- Most STL algorithms also work with strings.

[**Jump to Index**](#index)