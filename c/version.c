#include <stdio.h>

#include "version.h"

version_t version = VERSION(233,0,0,1);

int main(int argc, char *argv[]) {
    printf("version_t format: <major>.<minor>.<release>.<path>\n");
    printf("Major Version : %d\n", VER_MAJOR(version));
    printf("Minor Version : %d\n", VER_MINOR(version));
    printf("Released Version : %d\n", VER_RELEASED(version));
    printf("Path Version : %d\n", VER_PATCH(version));

    return 0;
}



