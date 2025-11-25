#include <cstring>
#include <cassert>
#include <cstdio>

// char* mystrstr(const char* s1, const char* s2) {
//     if (s2 == nullptr) {
//         return (char*)s1;
//     }

//     size_t i = 0;
//     while (s1[i] != '\0') {
//         size_t j = 0;
//         while (s2[j] != '\0' && s2[j] == s1[i + j]) {
//             j++;
//         }
//         if (s2[j] == '\0') {
//             return (char*)&s1[i];
//         }
//         i++;
//     }

//     return nullptr;
// }

char* mystrstr(const char* s1, const char* s2) {
    if (s2 == nullptr) {
        return (char*)s1;
    }

    while (*s1) {
        const char *ps1 = s1;
        const char *ps2 = s2;
        while (*ps2 && *ps2 == *ps1) {
            ++ps1;
            ++ps2;
        }
        if (!*ps2) {
            return (char*) s1;
        }
        ++s1;
    }
    return nullptr;
}

int main(int argc, char* argv[]) {
    assert(argc == 3);
    printf("strstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], strstr(argv[1], argv[2]));
    printf("mystrstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], mystrstr(argv[1], argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr(argv[1], argv[2]));
}