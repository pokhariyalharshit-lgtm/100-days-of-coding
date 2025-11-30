//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char text[200];
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); 
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a line of text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    fclose(file);
    printf("Text successfully appended to %s\n", filename);
    return 0;
}