# realArray Homework

## Instructions
Create a C++ program that demonstrates the usage of the realArray class from `source/source_base/realarray.h`. Complete the following tasks in order, from simplest to most complex.

## Tasks

### Task 1: Default Constructor
- Create a realArray object using the default constructor
- Print its size and dimension

### Task 2: 3D Array Constructor
- Create a realArray object with dimensions (2, 3, 2)
- Print its size, dimension, and bounds

### Task 3: 4D Array Constructor
- Create a realArray object with dimensions (2, 2, 2, 2)
- Print its size, dimension, and bounds

### Task 4: create() Method for 3D Array
- Create a realArray object using the default constructor
- Use the create() method to resize it to (3, 2, 2)
- Print its size, dimension, and bounds after resizing

### Task 5: create() Method for 4D Array
- Create a realArray object using the default constructor
- Use the create() method to resize it to (2, 2, 2, 2)
- Print its size, dimension, and bounds after resizing

### Task 6: Element Access and Assignment
- Create a 3D realArray object with dimensions (2, 2, 2)
- Assign values to each element using nested loops
- Print all elements

### Task 7: Assignment Operator with Scalar
- Create a 3D realArray object with dimensions (2, 2, 2)
- Assign a scalar value (e.g., 5.5) to all elements
- Print all elements to verify they are set to the scalar value

### Task 8: zero_out() Method
- Create a 3D realArray object with dimensions (2, 2, 2)
- Assign non-zero values to all elements
- Call zero_out() method
- Print all elements to verify they are zero

### Task 9: Copy Constructor
- Create a 3D realArray object with dimensions (2, 2, 2)
- Assign values to its elements
- Create a new realArray object using the copy constructor
- Print the elements of the new object to verify the copy

### Task 10: 4D Array Operations
- Create a 4D realArray object with dimensions (2, 2, 2, 2)
- Assign values to all elements using nested loops
- Print all elements to verify the assignment
- Call zero_out() method and print again to verify

## Submission
- Create a main.cpp file in the test_realarray directory
- Implement all tasks
- Compile and run the program
- Submit the main.cpp file