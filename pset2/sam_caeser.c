
        //ADAMOU MOUTARI Souwaiba

// logical operators
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])

{

    // condition 1

    if (argc != 2)
    {
        //print ./caesar your key \n when error done

        printf("Go back and put after ~/workspace/ $ ./caesar your key \n");
        return 1;
    }

    // convert the key into an integer

    int k = atoi(argv[1]);

    // prompt user for the input

    string p = get_string("Input: ");

    // print The output

    printf("Output: ");



    // loop the plaintext letter by letter

    for (int i = 0, n = strlen(p) ; i < n; i++)

    {
        // condition if the plaintext is a lowercase or not
        if (p[i] >= 'a' && p[i] <= 'z')

        {
            // print out the condition lowercase
            printf("%c", (((p[i] - 'a') + k) % 26) + 'a');
        }

        //condition if the plaintext is not lowercase
        else if (p[i] >= 'A' && p[i] <= 'Z')

        {
            // print out the condition not lowercase. Means the uppercase
            printf("%c", (((p[i] - 'A') + k) % 26) + 'A');
        }

        //condition if  the plaintext is not both of them

        else
     // print final output
        {
            printf("%c", p[i]);
        }

    }

    printf("\n");
     return 0;
}