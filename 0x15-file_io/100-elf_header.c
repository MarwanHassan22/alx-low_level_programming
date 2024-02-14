#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define ELF_HEADER_SIZE 64
#define MAX_BUFFER_SIZE 1024

// Function declarations
void print_elf_header(const char *filename);

int main(int argc, char *argv[]) {
    // Check command-line arguments
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Print ELF header information
    print_elf_header(argv[1]);

    return EXIT_SUCCESS;
}

void print_elf_header(const char *filename) {
    int fd;
    ssize_t bytes_read;
    unsigned char buffer[MAX_BUFFER_SIZE]; // Buffer to store ELF header
    // Open file
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    // Read ELF header
    bytes_read = read(fd, buffer, ELF_HEADER_SIZE);
    if (bytes_read < 0) {
        perror("Error reading file");
        close(fd);
        exit(EXIT_FAILURE);
    }
    // Parse and print ELF header information
    printf("ELF Header:\n");
    // Implement parsing logic here
    // Example: print magic number, class, data, etc.
    // Example: printf("  Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
    //          buffer[0], buffer[1], buffer[2], buffer[3], buffer[4], buffer[5], buffer[6], buffer[7],
    //          buffer[8], buffer[9], buffer[10], buffer[11], buffer[12], buffer[13], buffer[14], buffer[15]);
    // Close file
    if (close(fd) == -1) {
        perror("Error closing file");
        exit(EXIT_FAILURE);
    }
}

