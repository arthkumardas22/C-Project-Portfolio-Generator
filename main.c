#include <stdio.h>

int main() {
    FILE *file;
    char title[100];
    char description[300];
    char features[300];
    char tech[200];
    char usage[300];

    printf("Enter Project Title: ");
    fgets(title, sizeof(title), stdin);

    printf("Enter Project Description: ");
    fgets(description, sizeof(description), stdin);

    printf("Enter Project Features: ");
    fgets(features, sizeof(features), stdin);

    printf("Enter Tech Stack Used: ");
    fgets(tech, sizeof(tech), stdin);

    printf("Enter Usage Instructions: ");
    fgets(usage, sizeof(usage), stdin);

    file = fopen("README.md", "w");

    if (file == NULL) {
        printf("Error creating file!");
        return 1;
    }

    fprintf(file, "# %s\n", title);
    fprintf(file, "## Description\n%s\n", description);
    fprintf(file, "## Features\n%s\n", features);
    fprintf(file, "## Tech Stack\n%s\n", tech);
    fprintf(file, "## Usage\n%s\n", usage);

    fclose(file);

    printf("\nREADME.md file generated successfully!\n");

    return 0;
}
