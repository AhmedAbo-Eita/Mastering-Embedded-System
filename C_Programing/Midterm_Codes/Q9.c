#include <stdio.h>
#include <string.h>

char arr[100];

void reverseString(char *str, int start, int end);
void reverseWords(char *str);

int main() {
    printf("Enter the Sentence: ");
    fflush(stdin); fflush(stdout);
    fgets(arr, sizeof(arr), stdin);
    // Remove the newline character if present
    arr[strcspn(arr, "\n")] = '\0';
    reverseWords(arr);
    printf("Reversed Sentence: %s\n", arr);
    return 0;
}

void reverseString(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    int length = strlen(str);
    
    // Step 1: Reverse the entire string
    reverseString(str, 0, length - 1);
    
    // Step 2: Reverse each word in the reversed string
    int start = 0;
    for (int end = 0; end <= length; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            reverseString(str, start, end - 1);
            start = end + 1;
        }
    }
}
