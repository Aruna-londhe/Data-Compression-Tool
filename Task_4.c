#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compress the text using Run-Length Encoding (RLE)
void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char ch, prev;
    int count = 1;

    prev = fgetc(in);
    if (prev == EOF) {
        printf("Empty input file!\n");
        fclose(in);
        fclose(out);
        return;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch == prev) {
            count++;
        } else {
            fprintf(out, "%c%d", prev, count);
            prev = ch;
            count = 1;
        }
    }
    fprintf(out, "%c%d", prev, count);

    fclose(in);
    fclose(out);
    printf("Compression completed. Output stored in %s\n", outputFile);
}

// Function to decompress the RLE compressed file
void decompressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char ch;
    int count;

    while (fscanf(in, "%c%d", &ch, &count) == 2) {
        for (int i = 0; i < count; i++) {
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);
    printf("Decompression completed. Output stored in %s\n", outputFile);
}

// Main function to handle user input and call compression/decompression
int main() {
    int choice;
    char inputFile[100], outputFile[100];

    printf("Run-Length Encoding (RLE) Tool\n");
    printf("1. Compress a file\n");
    printf("2. Decompress a file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter input file name: ");
    scanf("%s", inputFile);
    printf("Enter output file name: ");
    scanf("%s", outputFile);

    if (choice == 1) {
        compressFile(inputFile, outputFile);
    } else if (choice == 2) {
        decompressFile(inputFile, outputFile);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}