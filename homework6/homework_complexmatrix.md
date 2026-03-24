# ComplexMatrix Homework

## Instructions
Create a C++ program that demonstrates the usage of the ComplexMatrix class from `source/source_base/complexmatrix.h`. Complete the following tasks in order, from simplest to most complex.

## Tasks

### Task 1: Default Constructor
- Create a ComplexMatrix object using the default constructor
- Print its number of rows and columns

### Task 2: Constructor with Dimensions
- Create a ComplexMatrix object with dimensions (3, 2) and zero flag set to true
- Print its number of rows and columns

### Task 3: create() Method
- Create a ComplexMatrix object using the default constructor
- Use the create() method to resize it to (4, 3) with zero flag set to true
- Print its number of rows and columns after resizing

### Task 4: Element Access and Assignment
- Create a ComplexMatrix object with dimensions (2, 2)
- Assign complex values to each element
- Print all elements using the print() method

### Task 5: zero_out() Method
- Create a ComplexMatrix object with dimensions (2, 2)
- Assign non-zero values to all elements
- Call zero_out() method
- Print all elements to verify they are zero

### Task 6: set_as_identity_matrix() Method
- Create a ComplexMatrix object with dimensions (3, 3)
- Call set_as_identity_matrix() method
- Print the matrix to verify it's an identity matrix

### Task 7: Arithmetic Operators
- Create two ComplexMatrix objects with dimensions (2, 2)
- Assign values to both
- Perform addition, subtraction, and multiplication by a scalar
- Print the results

### Task 8: Matrix Multiplication
- Create two ComplexMatrix objects: one with dimensions (2, 3) and another with dimensions (3, 2)
- Assign values to both
- Perform matrix multiplication
- Print the result

### Task 9: trace() Function
- Create a square ComplexMatrix object with dimensions (3, 3)
- Assign values to the diagonal elements
- Compute the trace using the trace() function
- Print the result

### Task 10: transpose() and conj() Functions
- Create a ComplexMatrix object with dimensions (2, 3)
- Assign complex values to each element
- Compute its transpose without conjugation
- Compute its conjugate
- Print both results

## Submission
- Create a main.cpp file in the test_complexmatrix directory
- Implement all tasks
- Compile and run the program
- Submit the main.cpp file