#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;  // Pointer to the file

    // 1. Create and write to a file
    file = fopen("files/example.txt", "w");  // Open in write mode
    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1;
    }

    fprintf(file, "This is an example of file management in C.\n");
    fprintf(file, "You can write text using fprintf.\n");
    fclose(file);  // Close the file

    // 2. Read from a file
    file = fopen("files/example.txt", "r");  // Open in read mode
    if (file == NULL) {
        printf("Error opening the file for reading.\n");
        return 1;
    }

    char buffer[100];
    printf("File content:\n");
    while (fgets(buffer, sizeof(buffer), file)) {  // Read line by line
        printf("%s", buffer);
    }
    fclose(file);  // Close the file

    // 3. Append content to the file
    file = fopen("files/example.txt", "a");  // Open in append mode
    if (file == NULL) {
        printf("Error opening the file for appending content.\n");
        return 1;
    }

    fprintf(file, "This text was appended to the end of the file.\n");
    fclose(file);

    // 4. Read the file again to verify
    file = fopen("files/example.txt", "r");
    if (file == NULL) {
        printf("Error opening the file to verify content.\n");
        return 1;
    }

    printf("\nUpdated file content:\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}
