# Data Types

This folder demonstrates the use of various data types in C, including basic types, enumerations, structures, and unions. These examples show how to declare, manipulate, and utilize data types effectively.

## Code Descriptions

1. **`basic_types.c`**
   - Demonstrates the use of basic data types such as `int`, `char`, `float`, and `double`.
   - Includes an example of a `char[]` for string representation.
   - **Key Concept:** Understanding and printing basic data types.

2. **`enumeration.c`**
   - Explores the use of `enum` to define symbolic constants for error codes.
   - Includes a function to handle errors using `switch` statements.
   - **Key Concept:** Defining and using enumerations for clarity and maintainability.

3. **`structures.c`**
   - Introduces `struct` for grouping related data.
   - Demonstrates the creation, initialization, and modification of a `struct`.
   - **Key Concept:** Using structures to represent complex entities.

4. **`union.c`**
   - Shows how `union` allows storing different data types in the same memory location.
   - Demonstrates overwriting of union members and the effects on stored data.
   - **Key Concept:** Efficient memory usage with unions.

## Compilation and Execution

To compile and run these programs:
1. Use the GCC compiler:
   ```bash
   gcc file_name.c -o output_name
   ```
2. Run the executable:
   ```bash
   ./output_name
   ```

## How to Use

- Study each file to understand how the data types are declared and used.
- Modify the programs to test different scenarios and understand the behavior of each data type.
- Pay special attention to the union example to see how overwriting works.

## Learning Objectives

- Understand the basic and advanced data types available in C.
- Learn how to use enumerations and structures for code clarity and data organization.
- Explore the trade-offs of using unions for memory optimization.
