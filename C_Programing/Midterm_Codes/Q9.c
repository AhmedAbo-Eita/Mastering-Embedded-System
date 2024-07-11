#include <stdio.h>
#include <string.h>

char arr[100];

void reverseWords(char arr1[]);

int main() {
    printf("Enter the Sentence: ");
    fflush(stdin); fflush(stdout);
    fgets(arr, sizeof(arr), stdin);
    // Remove the newline character if present
    arr[strcspn(arr, "\n")] = '\0';
    reverseWords(arr);
    return 0;
}

void reverseWords(char arr1[]) {
    int length = strlen(arr1);
    int end = length;
    int start;

    for (int i = length - 1; i >= 0; i--) {
        if (arr1[i] == ' ' || i == 0) {
            if (i == 0) {
                start = 0;
            } else {
                start = i + 1;
            }

            for (int j = start; j < end; j++) {
                printf("%c", arr1[j]);
            }

            if (i > 0) {
                printf(" ");
            }

            end = i;
        }
    }
    printf("\n");
}
