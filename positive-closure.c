#include<stdio.h>
#include<conio.h>

int main() {
    char ch;

    S0: ch = getche();
        if(ch == 'a') goto S1;
        else goto Invalid;

    S1: ch = getche();
        if(ch == 'a') goto S1;
        else if(ch == '#') goto Valid;
        else goto Invalid;

    Valid: printf("\nString is valid.");
           goto End;

    Invalid: printf("\nString is invalid.");
             goto End;

    End: return 0;
}
