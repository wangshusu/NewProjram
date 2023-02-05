#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define MAX_BUF_NUMBER 1024

int main() {
    int fd = open("./1.txt", O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "open errno !\n reason : %s\n", strerror(errno));
    }

    char buf[MAX_BUF_NUMBER] = {0};
    int ret = read(fd, buf, sizeof(buf));
    if (ret < 0) {
        fprintf(stderr, "read error!\n");
    }

    printf("buf : \n%s\n", buf);

    close(fd);
    return 1;
}