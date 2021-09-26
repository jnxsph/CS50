#include <stdio.h>
#include <cs50.h>

 //Begin program using int-main-void
int main (void)

{
    //get name from user
    string name = get_string("What is your name?: ");
    
    //Return greeting with namne given by the user
    
    printf("Hello, %s\n", name);
}
