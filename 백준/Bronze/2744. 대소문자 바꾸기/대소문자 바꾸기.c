#include <stdio.h>
#include <ctype.h>

int main(void) {
    char input[101];
    int count = 0;
    
    gets(input);
    while (input[count]) {
        if (isupper(input[count])){
            input[count] = tolower(input[count]);
        }
        else if (islower(input[count])){
            input[count] = toupper(input[count]);
        }
        count++;
    }

    printf("%s", input);
    return 0;
}
