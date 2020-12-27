//Write a program to implement FA that accepts three consecutive one where Σ= {1}.

#include<stdio.h>
#include<conio.h>

int main() {
    char ch;

    S0: ch = getche();
        if(ch == '1') goto S1;
        else goto Invalid;

    S1: ch = getche();
        if(ch == '1') goto S2;
        else goto Invalid;

    S2: ch = getche();
        if(ch == '1') goto S3;
        else goto Invalid;

    S3: ch = getche();
        if(ch == '1') goto S3;
        else if (ch == '#') goto Valid;
        else goto Invalid;

    Valid: printf("\nString is valid.");
           goto End;

    Invalid: printf("\nString is invalid.");
            goto End;

    End: return 0;
}
