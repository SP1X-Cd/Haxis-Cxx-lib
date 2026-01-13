# EASY_CPP Library Documentation

The `easy_cpp.h` library provides a set of helper functions to simplify working with C++.

## Table of Contents
- [Input/Output](#inputoutput)
- [File Operations](#file-operations)
- [Mathematical Functions](#mathematical-functions)
- [Array Operations](#array-operations)
- [Random Number Generation](#random-number-generation)
- [Conditional Operations](#conditional-operations)

---

## Input/Output

### `print(T var)`
Outputs a variable value to the console with a newline.

**Parameters:**
- `var` - variable of any type that supports stream output

**Usage Example:**
```cpp
hxs::print("Hello, World!");
hxs::print(42);
hxs::print(3.14);
```

---

### `input<T>()`
Reads a value from the console and returns it.

**Returns:** value of type `T`

**Usage Example:**
```cpp
int number = hxs::input<int>();
std::string name = hxs::input<std::string>();
double value = hxs::input<double>();
```

---

### `input<T>(std::string prompt)`
Displays a prompt and reads a value from the console.

**Parameters:**
- `prompt` - prompt text for input

**Returns:** value of type `T`

**Usage Example:**
```cpp
int age = hxs::input<int>("Enter your age: ");
std::string name = hxs::input<std::string>("What is your name? ");
```

---

## File Operations

### `file_write(std::string filename, std::string text)`
Writes text to a file (overwrites existing file).

**Parameters:**
- `filename` - name of the file to write to
- `text` - text to write

**Usage Example:**
```cpp
hxs::file_write("output.txt", "Hello, File!");
hxs::file_write("data.txt", "Line 1\nLine 2\nLine 3");
```

---

### `file_read(std::string filename)`
Reads file contents and returns it as a string.

**Parameters:**
- `filename` - name of the file to read

**Returns:** file contents as `std::string`

**Note:** if the file cannot be opened, an error message is displayed

**Usage Example:**
```cpp
std::string content = hxs::file_read("input.txt");
hxs::print(content);
```

---

## Mathematical Functions

### `even_num(int var)`
Checks if a number is even.

**Parameters:**
- `var` - integer to check

**Returns:** `true` if the number is even, `false` if odd

**Usage Example:**
```cpp
if (hxs::even_num(10)) {
    hxs::print("10 is an even number");
}

if (hxs::even_num(7)) {
    hxs::print("Won't execute");
} else {
    hxs::print("7 is an odd number");
}
```

---

### `even_inv(int var)`
Checks if a number is odd (inverse of `even_num`).

**Parameters:**
- `var` - integer to check

**Returns:** `true` if the number is odd, `false` if even

**Usage Example:**
```cpp
if (hxs::even_inv(7)) {
    hxs::print("7 is an odd number");
}
```

---

### `rev(float a)`
Changes the sign of a number to its opposite (multiplies by -1).

**Parameters:**
- `a` - number to change sign

**Returns:** number with opposite sign

**Usage Example:**
```cpp
float x = 5.0f;
float y = hxs::rev(x);  // y = -5.0
hxs::print(y);
```

---

### `powrev(double a, double b)`
Calculates the inverse value of a power: 1 / (a^b).

**Parameters:**
- `a` - base of the power
- `b` - exponent

**Returns:** result of calculating 1 / (a^b)

**Usage Example:**
```cpp
double result = hxs::powrev(2.0, 3.0);  // 1 / (2^3) = 1/8 = 0.125
hxs::print(result);
```

---

## Array Operations

### `print_arr<T>(T *arr, int len)`
Outputs array elements to the console (each element on a new line).

**Parameters:**
- `arr` - pointer to the array
- `len` - length of the array

**Usage Example:**
```cpp
int numbers[] = {1, 2, 3, 4, 5};
hxs::print_arr(numbers, 5);

double values[] = {1.1, 2.2, 3.3};
hxs::print_arr(values, 3);
```

---

### Class `Arrays<T>`
Wrapper over an array using `std::vector`.

#### Constructor: `Arrays(T *a, int len)`
**Parameters:**
- `a` - pointer to the array
- `len` - length of the array

#### Method: `get_arr()`
Outputs all array elements to the console.

**Usage Example:**
```cpp
int data[] = {10, 20, 30, 40};
hxs::Arrays<int> arr(data, 4);
arr.get_arr();
```

---

## Random Number Generation

### `get_random(int min, int max)`
Generates a random integer in the range [min, max] (inclusive).

**Parameters:**
- `min` - minimum value of the range
- `max` - maximum value of the range

**Returns:** random integer

**Usage Example:**
```cpp
int dice = hxs::get_random(1, 6);  // Dice roll
hxs::print(dice);

int random_age = hxs::get_random(18, 65);
```

---

## Conditional Operations

### `eif_int(int a, const std::string& b, int c)`
Performs comparison of two integers according to the specified operator.

**Parameters:**
- `a` - first number
- `b` - comparison operator (string): `"=="`, `">"`, `"<"`, `">="`, `"<="`, `"!="`
- `c` - second number

**Returns:** comparison result (`true` or `false`)

**Usage Example:**
```cpp
bool result1 = hxs::eif_int(5, "==", 5);   // true
bool result2 = hxs::eif_int(10, ">", 5);   // true
bool result3 = hxs::eif_int(3, "<=", 7);   // true
bool result4 = hxs::eif_int(8, "!=", 8);   // false

if (hxs::eif_int(age, ">=", 18)) {
    hxs::print("Adult");
}
```

---

## Additional Functions

### `todo()`
Outputs a motivational message (utility function).

**Usage Example:**
```cpp
hxs::todo();
```

---

## Complete Usage Example

```cpp
#include "easy_cpp.h"

int main() {
    // Input/Output
    hxs::print("=== Library Demonstration ===");
    
    std::string name = hxs::input<std::string>("Enter name: ");
    int age = hxs::input<int>("Enter age: ");
    
    // File operations
    hxs::file_write("user_data.txt", "Name: " + name + "\nAge: " + std::to_string(age));
    std::string data = hxs::file_read("user_data.txt");
    hxs::print(data);
    
    // Mathematical operations
    if (hxs::even_num(age)) {
        hxs::print("Your age is an even number");
    }
    
    // Arrays
    int scores[] = {85, 90, 78, 92, 88};
    hxs::print("Scores:");
    hxs::print_arr(scores, 5);
    
    // Random numbers
    int lucky_number = hxs::get_random(1, 100);
    hxs::print("Your lucky number: " + std::to_string(lucky_number));
    
    // Conditional operations
    if (hxs::eif_int(age, ">=", 18)) {
        hxs::print("Access granted");
    } else {
        hxs::print("Access denied");
    }
    
    return 0;
}
```

---

## Notes

- All functions are in the `hxs` namespace
- To use the library, include the header file: `#include "easy_cpp.h"`
- The library uses standard C++ libraries: `<iostream>`, `<fstream>`, `<vector>`, `<random>`, and others

---

## Quick Reference

| Function | Description |
|---------|-------------|
| `print(var)` | Output variable |
| `input<T>()` | Input value |
| `input<T>(prompt)` | Input with prompt |
| `file_write(file, text)` | Write to file |
| `file_read(file)` | Read from file |
| `even_num(n)` | Check if even |
| `even_inv(n)` | Check if odd |
| `rev(n)` | Change sign |
| `powrev(a, b)` | 1 / (a^b) |
| `print_arr(arr, len)` | Output array |
| `get_random(min, max)` | Random number |
| `eif_int(a, op, c)` | Compare numbers |
