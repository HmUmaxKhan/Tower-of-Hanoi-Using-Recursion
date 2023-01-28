#include <stdio.h>//TOWER OF HANOI

//Function which is to be called
void TowerOfHanoi(int n, int source, int auxiliary, int destination)
{
    if (n == 1)//Base Case
    {
        printf("Move disk 1 from peg %d to peg %d\n", source, destination);
        return;
    }
    TowerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from peg %d to peg %d\n", n, source, destination);
    TowerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    printf("Enter the number of rings: ");
//Taking the input from the users
    scanf("%d", &n);

    TowerOfHanoi(n, 1, 2, 3);//Calling Function

    return 0;
}