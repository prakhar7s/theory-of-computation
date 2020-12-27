//9. Write a program to implement PDA that accept L= {anbn : n>=0}.

#include <stdio.h>
#include <conio.h>

int main() {

    char arr[100], inp,ch;
    int top;

    //initialize stack with Z
    arr[0] = 'Z';

    top = 0;

    void push(char x) {
        top++;
        arr[top] = x;
    }

    char pop() {
        top--;
        return (char)arr[top+1];
    }

    //# is string ending symbol and Z is top in empty stack
    S0: inp = getche();
        if(inp == 'a'){
            push(inp);
            goto S0;
        }
        else {
            ch = pop();
            if(inp == 'b' && ch == 'a') {
                goto S1;
            }
            else if(inp == '#' && ch == 'Z') {
                goto Valid;
            }
            else {
                goto Invalid;
            }
        }

    S1: inp = getche();
        ch = pop();
        if(inp == 'b' && ch == 'a') {
            goto S1;
        }
        else if(inp == '#' && ch == 'Z') {
            goto Valid;
        }
        else {
            goto Invalid;
        }

    Valid: printf("\nString is valid.");
           goto End;

    Invalid: printf("\nString is invalid.");
             goto End;

    End: return 0;
}
