#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]){
    char ch, pch = ' ';
    int lc = 0, wc = 0, cc = 0;
    int whitespacetrigger = 0;
    while ((ch = getchar()) != EOF){
        cc++;
        if (ch == '\n')
        {
            lc++;
        }
        if(ch == ' '){
            /*add white space trigger, when a space is hit to indicate a letter has not been placed*/
            whitespacetrigger = 1;
            /* if another whitespace hit, and the previous character is a punctation it means a case of 'h . h' or 'h .. . h' has occured */
            if (pch == '.' || pch == ';' || pch == ':'){
                wc++;
            }
        }
        /*checks if current character is a ltter and if previous is a */
        if (((ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z')) && (pch == ' '|| pch == '\t' || pch == '\n' || pch == '.' || pch == ';' || pch == ':')){
            wc++;
        }
        pch = ch;
    }
    printf("number of lines = %d\n", lc);
    printf("number of word = %d\n", wc);
    printf("number of character = %d\n", cc);

}