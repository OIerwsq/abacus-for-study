# Vector3 Homework

## Instructions
Create a C++ program that demonstrates the usage of the Vector3 class from `source/source_base/vector3.h`. Complete the following tasks in order, from simplest to most complex.

## Tasks

### Task 1: Default Constructor
- Create a Vector3<double> object using the default constructor
- Print the vector

### Task 2: Constructor with Three Values
- Create a Vector3<double> object with values (1.0, 2.0, 3.0)
- Print the vector

### Task 3: set() Method
- Create a Vector3<double> object using the default constructor
- Use the set() method to set its values to (4.0, 5.0, 6.0)
- Print the vector

### Task 4: Arithmetic Operators
- Create two Vector3<double> objects: v1(1.0, 2.0, 3.0) and v2(4.0, 5.0, 6.0)
- Perform addition, subtraction, and multiplication by a scalar
- Print the results

### Task 5: Compound Assignment Operators
- Create two Vector3<double> objects: v1(1.0, 2.0, 3.0) and v2(4.0, 5.0, 6.0)
- Use compound assignment operators (+=, -=, *=, /=)
- Print the results after each operation

### Task 6: norm2() and norm() Methods
- Create a Vector3<double> object with values (3.0, 4.0, 0.0)
- Compute its squared norm using norm2()
- Compute its norm using norm()
- Print the results

### Task 7: normalize() Method
- Create a Vector3<double> object with values (3.0, 4.0, 0.0)
- Normalize the vector using normalize()
- Print the normalized vector and its norm

### Task 8: Dot Product
- Create two Vector3<double> objects: v1(1.0, 2.0, 3.0) and v2(4.0, 5.0, 6.0)
- Compute their dot product using both the * operator and the dot() function
- Print the results

### Task 9: Cross Product
- Create two Vector3<double> objects: v1(1.0, 0.0, 0.0) and v2(0.0, 1.0, 0.0)
- Compute their cross product using both the ^ operator and the cross() function
- Print the results

### Task 10: Comparison Operators
- Create three Vector3<double> objects: v1(1.0, 2.0, 3.0), v2(1.0, 2.0, 3.0), and v3(4.0, 5.0, 6.0)
- Use the ==, !=, and < operators to compare them
- Print the results

## Submission
- Create a main.cpp file in the test_vector3 directory
- Implement all tasks
- Compile and run the program
- Submit the main.cpp file