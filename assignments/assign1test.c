#include <stdio.h>
#include <string.h>

int main (){

    char current, previous = ' ';
    int words = 0,  lines = 0, characters = 0;
    while ((current = getchar()) != EOF){
        characters++;

        /*checks if current character is non whitespace and previous is whitespace. Previous is set to ' ' on init to account for first word*/
        if (((current >= 'A' && current <= 'Z') ||(current >= 'a' && current <= 'z') || current == ';' || current == ',' || current == '.' ) && (previous == ' ' || previous == '\t')){
            words++;
        }

        if (current == '\n')
        {
            lines++;
        }
        previous = current;
    }
    printf("number of word = %d\n", words);
    printf("number of lines = %d\n", lines);
    printf("number of character = %d\n", characters);

}