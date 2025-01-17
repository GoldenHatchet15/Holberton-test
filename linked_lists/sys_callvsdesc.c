#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>




// Create a new file and open it for writing
int main() {
    int fd = open("newfile.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    printf("File opened with file descriptor: %d\n", fd);
    close(fd);
    return 0;
}








// closing the file descriptor
int main() {
    int fd = open("newfile.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    // Operations on the file
    close(fd);
    printf("File descriptor %d closed\n", fd);
    return 0;
}






// Reading from a file
int main() {
    char buffer[100];
    int fd = open("existingfile.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    ssize_t bytesRead = read(fd, buffer, sizeof(buffer)-1);
    if (bytesRead == -1) {
        perror("Error reading from file");
        close(fd);
        return 1;
    }
    buffer[bytesRead] = '\0';  // Null terminate the string
    printf("Read %ld bytes: %s\n", bytesRead, buffer);
    close(fd);
    return 0;
}









// Writing to a file
int main() {
    int fd = open("outputfile.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    const char *text = "Hello, file!\n";
    if (write(fd, text, strlen(text)) == -1) {
        perror("Error writing to file");
        close(fd);
        return 1;
    }
    close(fd);
    return 0;
}








// Using a regular system call
#include <stdio.h>

void greet() {
    printf("Hello from a regular function!\n");
}

int main() {
    greet();  // Calling a regular function
    return 0;
}







