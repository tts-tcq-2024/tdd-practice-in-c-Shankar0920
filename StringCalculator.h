#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add(const char* input) {
    if (input == NULL || strlen(input) == 0) {
        return 0;
    }
    int sum = 0;
    char* token = strtok((char*)input, ",\n;");

    while (token != NULL) {
        int num = atoi(token);
        if (num <= 1000) {
            sum += num;
        }
        token = strtok(NULL, ",\n;");
    }
    return sum;
}
