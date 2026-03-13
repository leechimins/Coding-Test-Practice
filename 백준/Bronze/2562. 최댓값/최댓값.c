#include <stdio.h>
 
int main(void) {
    int max = 0, index = 0;
    int arr[9];
    for (int i = 0; i < 9; i++)
        scanf("%d", &arr[i]);
 
    max = arr[0];
    index = 0;
    for (int i = 1; i < 9; i++)
        if (max < arr[i]) {
            max = arr[i];
            index = i;
        }
    index++;
 
    printf("%d\n%d", max, index);
 
    return 0;
}