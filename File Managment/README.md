# File Management in C

This program demonstrates basic file operations in C, including writing, reading, and appending content to a file. The code uses standard C library functions like `fopen`, `fclose`, `fprintf`, and `fgets` to handle file I/O.

## Features

1. **File Creation and Writing**:
   - Creates a text file (`example.txt`) in the `files` directory.
   - Writes lines of text to the file using `fprintf`.

2. **File Reading**:
   - Opens the file in read mode and prints its content line by line using `fgets`.

3. **Appending Content**:
   - Appends additional text to the end of the file without overwriting existing content.

4. **File Content Verification**:
   - Reopens the file and prints its updated content to verify the appended text.

## Program Workflow

1. **File Creation**:
   - Opens the file in write mode (`"w"`).
   - Writes initial lines of text and closes the file.

2. **File Reading**:
   - Opens the file in read mode (`"r"`).
   - Reads and prints each line until the end of the file is reached.

3. **Appending Text**:
   - Opens the file in append mode (`"a"`).
   - Adds new lines of text to the end of the file.

4. **Final Verification**:
   - Reopens the file in read mode to print the updated content.

## Compilation and Execution

### Compile the Program
```bash
gcc file_management.c -o file_management
```

### Run the Program
```bash
./file_management
```

Ensure that the `files` directory exists in the same location as the executable to avoid file path errors.

## Code Highlights

- **File Modes**:
  - `"w"`: Write mode (creates a file or overwrites if it exists).
  - `"r"`: Read mode (fails if the file does not exist).
  - `"a"`: Append mode (adds content to the end of the file).
- **Error Handling**:
  - Checks if `fopen` returns `NULL` to handle file access errors gracefully.
- **Dynamic Buffer**:
  - Uses `fgets` with a buffer to read the file line by line.

## Learning Objectives

- Understand basic file operations in C.
- Learn how to write, read, and append content to a file.
- Practice error handling when working with file I/O.

