// Take two filenames from the user – a source file and a destination file. 
// Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
int main() {
    FILE *src, *dest;
    char srcname[100], destname[100], ch;
    printf("Enter source filename: ");
    scanf("%s", srcname);
    printf("Enter destination filename: ");
    scanf("%s", destname);
    src = fopen(srcname, "r");
    if (src == NULL) {
        printf("Source file not found.\n");
        return 1;
    }
    dest = fopen(destname, "w");
    if (dest == NULL) {
        printf("Failed to create destination file.\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}