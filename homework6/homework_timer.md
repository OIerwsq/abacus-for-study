# timer Homework

## Instructions
Create a C++ program that demonstrates the usage of the timer class from `source/source_base/timer.h`. Complete the following tasks in order, from simplest to most complex.

## Tasks

### Task 1: Basic Timing
- Create a simple function that performs some computation (e.g., a loop)
- Use timer::start() and timer::end() to time this function
- Print a message indicating the timing is complete

### Task 2: Multiple Timing Entries
- Create two different functions with different computation times
- Time both functions using different class names and process names
- Print messages indicating both timings are complete

### Task 3: Nested Timing
- Create an outer function that calls an inner function multiple times
- Time both the outer function and the inner function
- Run the outer function and print a message when done

### Task 4: Print All Timings
- After completing Tasks 1-3, create an output file
- Use timer::print_all() to write all timings to the file
- Print a message indicating the timings have been written

### Task 5: Write Timings to JSON
- Use timer::write_to_json() to write all timings to a JSON file
- Print a message indicating the JSON file has been created

### Task 6: Print Until Now
- Use timer::print_until_now() to print the time elapsed since the program started
- Capture the returned time value and print it

### Task 7: Enable/Disable Timer
- Disable the timer using timer::disable()
- Try to time a function while the timer is disabled
- Enable the timer again using timer::enable()
- Print messages indicating the status changes

### Task 8: Finish Function
- Create a final output file
- Use timer::finish() to print all timings to the file
- Print a message indicating the final timings have been written

### Task 9: Repeated Timing
- Create a function that you want to time multiple times
- Call this function multiple times, timing each call
- Use the same class name and process name for all calls
- Print a message indicating all timings are complete

### Task 10: Comprehensive Timing
- Create a program that performs various computational tasks
- Time each task separately
- Use different class names to group related tasks
- Print all timings at the end

## Submission
- Create a main.cpp file in the test_timer directory
- Implement all tasks
- Compile and run the program
- Submit the main.cpp file and any output files generated