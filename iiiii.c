#include <stdio.h>
#include <string.h>
int main() {
    int i;
    // declaring and initializing a string
    char koki[] = "vvhjbbnijno";

    // printing the string
    printf("The string is: %s\n",koki );
    printf("%lu\n",strlen(koki));
    for (i = 0; i <= strlen(koki); i++)
       printf("%d\n", i);
    return 0;
}