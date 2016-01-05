#include <stdio.h>
#include <cs50.h>

void PrintPyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
       printf("%.*s", height - i, "                       ");
       printf("%.*s\n", i + 2, "########################");
    }
}

int main(void)
{
    int height;
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while(height < 0  || height > 23);

    PrintPyramid(height);
}
