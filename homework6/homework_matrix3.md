# Matrix3 Homework

## Instructions
Create a C++ program that demonstrates the usage of the Matrix3 class from `source/source_base/matrix3.h`. Complete the following tasks in order, from simplest to most complex.

## Tasks

### Task 1: Default Constructor
- Create a Matrix3 object using the default constructor
- Print the matrix to verify it's an identity matrix

### Task 2: Constructor with 9 Elements
- Create a Matrix3 object with the following elements:
  ```
  1.0  2.0  3.0
  4.0  5.0  6.0
  7.0  8.0  9.0
  ```
- Print the matrix

### Task 3: Identity() Method
- Create a Matrix3 object with non-identity elements
- Call the Identity() method
- Print the matrix to verify it's now an identity matrix

### Task 4: Zero() Method
- Create a Matrix3 object with non-zero elements
- Call the Zero() method
- Print the matrix to verify all elements are zero

### Task 5: Det() Method
- Create a diagonal Matrix3 object with elements 2.0, 3.0, 4.0 on the diagonal
- Compute its determinant using the Det() method
- Print the result

### Task 6: Transpose() Method
- Create a Matrix3 object with the following elements:
  ```
  1.0  2.0  3.0
  4.0  5.0  6.0
  7.0  8.0  9.0
  ```
- Compute its transpose using the Transpose() method
- Print both the original and transposed matrices

### Task 7: Inverse() Method
- Create a diagonal Matrix3 object with elements 2.0, 3.0, 4.0 on the diagonal
- Compute its inverse using the Inverse() method
- Print both the original and inverse matrices

### Task 8: Arithmetic Operators
- Create two Matrix3 objects
- Perform addition, subtraction, and multiplication by a scalar
- Print the results

### Task 9: Matrix Multiplication
- Create two Matrix3 objects
- Perform matrix multiplication
- Print the result

### Task 10: Vector3 Multiplication
- Create a Matrix3 object and a Vector3 object
- Perform multiplication of the matrix with the vector (both matrix*vector and vector*matrix)
- Print the results

## Submission
- Create a main.cpp file in the test_matrix3 directory
- Implement all tasks
- Compile and run the program
- Submit the main.cpp file