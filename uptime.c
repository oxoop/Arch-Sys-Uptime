#include <stdio.h>

int main(){
    FILE *file = fopen("/proc/uptime", "r");
    if (file == NULL) {
        perror("error finding file");
        return 1;
    }

    double uptime;
    fscanf(file, "%lf", &uptime);
    fclose(file);

    printf("Sys uptime %.2F seconds\n", uptime);
    return 0;
}

