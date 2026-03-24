# formatter Homework

## Instructions
Create a C++ program that demonstrates the usage of the formatter classes from `source/source_base/formatter.h`. Complete the following tasks in order, from simplest to most complex.

## Tasks

### Task 1: FmtCore::format() Static Function
- Use FmtCore::format() to format an integer: "The answer is %d" with value 42
- Use FmtCore::format() to format a float: "Pi is approximately %.2f" with value 3.14159
- Print both formatted strings

### Task 2: FmtCore Class
- Create a FmtCore object with format string "%s has %d apples"
- Use it to format a string with name "Alice" and count 5
- Reset the format string to "%.2f multiplied by %d is %.2f"
- Use it to format with values 2.5, 4, and 10.0
- Print all formatted strings

### Task 3: FmtCore::split() Function
- Use FmtCore::split() to split the string "apple,banana,cherry" with delimiter ","
- Use FmtCore::split() to split the string "Hello World How Are You" with default delimiter
- Print both split results

### Task 4: FmtCore::startswith() and endswith() Functions
- Use FmtCore::startswith() to check if "Hello World" starts with "Hello"
- Use FmtCore::startswith() to check if "Hello World" starts with "World"
- Use FmtCore::endswith() to check if "Hello World" ends with "World"
- Use FmtCore::endswith() to check if "Hello World" ends with "Hello"
- Print all results

### Task 5: FmtCore::strip() and center() Functions
- Use FmtCore::strip() to remove whitespace from "   Hello World   "
- Use FmtCore::center() to center "Hello" in a 10-character width with '*' as fill character
- Print both results

### Task 6: FmtCore::replace() Function
- Use FmtCore::replace() to replace "World" with "ABACUS" in "Hello World"
- Use FmtCore::replace() to replace "a" with "A" in "banana"
- Print both results

### Task 7: FmtCore::join() Function
- Create a vector of strings: {"Alice", "Bob", "Charlie"}
- Use FmtCore::join() to join them with delimiter ", "
- Print the joined string

### Task 8: FmtCore::upper() and lower() Functions
- Use FmtCore::upper() to convert "Hello World" to uppercase
- Use FmtCore::lower() to convert "HELLO WORLD" to lowercase
- Print both results

### Task 9: FmtTable Basic Usage
- Create a FmtTable with titles {"Name", "Age", "Score"}, 2 rows, and formats {"%s", "%d", "%.2f"}
- Set values for both rows
- Get the table as a string and print it

### Task 10: FmtTable with << Operator
- Create a FmtTable with the same structure as Task 9
- Use the << operator to import data from vectors
- Get the table as a string and print it

## Submission
- Create a main.cpp file in the test_formatter directory
- Implement all tasks
- Compile and run the program
- Submit the main.cpp file