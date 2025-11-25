#include <cstdlib>
#include <cstdio>

int main() {
    unsigned result = 0;
    while (fgetc(stdin) != EOF) {
        result++;
    }

    fprintf(stdout, "%d\n", result);
    exit(0);
}