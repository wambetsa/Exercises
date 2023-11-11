#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    unsigned long max_process_id;

    // Open the /proc/sys/kernel/pid_max file for reading
    fp = fopen("/proc/sys/kernel/pid_max", "r");
    if (fp == NULL) {
        perror("Error opening /proc/sys/kernel/pid_max");
        return 1;
    }

    // Read the maximum process ID from the file
    if (fscanf(fp, "%lu", &max_process_id) != 1) {
        perror("Error reading maximum process ID");
        fclose(fp);
        return 1;
    }

    // Close the file
    fclose(fp);

    // Print the maximum process ID
    printf("Max process id is %lu\n", max_process_id);

    return 0;
}
