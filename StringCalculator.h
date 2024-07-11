#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isDelimiter(char c) {
    return (c == ',' || c == '\n' || c == ';');
}
int isValidNumber(const char* token) {
    int num = atoi(token);
    return (num <= 1000);
}
int calculateSum(const char* input) {
    int sum = 0;
    char* token = strtok((char*)input, ",\n;");
    while (token != NULL) {
        if (isValidNumber(token)) {
            sum += atoi(token);
        }
        token = strtok(NULL, ",\n;");
    }
    return sum;
}
int add(const char* input) {
    if (input == NULL || strlen(input) == 0) {
        return 0;
    }
    return calculateSum(input);
}
int main()
{
    int result;
    return 0;
}
