/* LeetCode 205 - Isomorphic Strings (Medium) - two-way character mapping */
#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {
    int mapST[256] = {0}, mapTS[256] = {0}, i;   /* store (char position + 1) */
    for (i = 0; s[i] != '\0' && t[i] != '\0'; i++) {
        unsigned char a = (unsigned char)s[i], b = (unsigned char)t[i];
        if (mapST[a] != mapTS[b]) return false;
        mapST[a] = mapTS[b] = i + 1;
    }
    return true;
}
