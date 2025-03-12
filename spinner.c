#include <stdio.h>
#include <unistd.h>  // For usleep()

int main(void) {
    char spinner[] = {'|', '/', '-', '\\'};
    int i = 0;

    // Infinite loop
    while (1) {
        // Print rotating char
        printf("\r%c", spinner[i % 4]);
 	fflush(stdout);
        usleep(200000); // Sleep for 200 milliseconds
        i++;
    }

    return 0;
}
