#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool is_isogram(const char phrase[]) {
    if (phrase == NULL) return false;
    int len = strlen(phrase);
    if (len == 0) return true;
    int k = 0;
    for (int i = 0; i <= len; i++) {
        for (int j = 0; j <= len; j++) {
            char a = tolower(phrase[i]);
            char b = tolower(phrase[j]);
            if (a == b && a != '-' && a != ' ') k++;
            if (k > 1) return false; 
        }
        k = 0;   
    }
    return true;
}
