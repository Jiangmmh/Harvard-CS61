#include <cstring>
#include <cassert>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

// int main(int argc, char* argv[]) {
//     while (argc > 1) {
//         int idxMin = 1;
//         for (int i = 2; i < argc; i++) {
//             if (strcmp(argv[i], argv[idxMin]) < 0) {
//                 idxMin = i;
//             }
//         }

//         fprintf(stdout, "%s\n", argv[idxMin]);

//         argv[idxMin] = argv[argc-1];
//         --argc;
//     }
// }

int main(int argc, char* argv[]) {
    std::vector<std::string> args(&argv[1], &argv[argc]);
    std::sort(args.begin(), args.end());

    for (auto& s : args) {
        std::cout << s << std::endl;
    }

    return 0;
}