#include <cstdlib>
#include <cstdio>
#include <cctype>

int main() {
    unsigned long nc = 0, nw = 0, nl = 0;
    bool in_space = true;
    int ch;
    while ((ch = fgetc(stdin)) != EOF ) {
        ++nc;
        bool this_space = isspace((unsigned char)ch);
        if (in_space && !this_space) {
            ++nw;
        }
        in_space = this_space;

        if (ch == '\n') {
            ++nl;
        }
    }

    fprintf(stdout, "%8lu %7lu %7lu\n", nl, nw, nc);
    exit(0);
}