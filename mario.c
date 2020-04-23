//Library of Sourcecode
#include <cs50.h>
#include <stdio.h>

void print_space(int num);
void print_hash(int num);

int main(void)
{
    // prompt the user and validate the user input
    int height, spaces, hashes;

    do
    {
        height = get_int("Enter a number between 1 - 8:\n");
    }
    while(height < 1 || height > 8);

    //make the centre of the triangle
    spaces = height - 1;
    hashes = 1;

    for (int i = 0; i < height; i++)
    {
        print_space(spaces);
        print_hash(hashes);
        printf("  ");
        print_hash(hashes);
        printf("\n");
        spaces--;
        hashes++;
    }
}

// The Functions

void print_space(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf(" ");
    }
}

void print_hash(int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("#");
    }
}
