#include<stdio.h>
int main()
{
    long long numberofPathsInthePosition[100][100];
    int gridBoxesOrder = 20,
        gridBoxesLine = gridBoxesOrder;
    for (int i = gridBoxesLine; i >= 0;i--)
    {
    for (int j = gridBoxesLine; j >= 0;j--)
    {
        if(i==gridBoxesLine && j==gridBoxesLine)
        {
        numberofPathsInthePosition[i][j] = 0;
        continue;

        }

        else if(i==gridBoxesLine || j==gridBoxesLine)
        {
            numberofPathsInthePosition[i][j] = 1;
        }
        else
        {
            numberofPathsInthePosition[i][j] = numberofPathsInthePosition[i + 1][j] + numberofPathsInthePosition[i][j + 1];
        }
    }
        
    }
    printf("%lld", numberofPathsInthePosition[0][0]);
    return 0;
}