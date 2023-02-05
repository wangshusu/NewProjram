#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main() {
    int fd = open("./1.txt", O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "open errno !\n reason : %s\n", strerror(errno));
    }

    close(fd);
    return 1;
}