#include <stdio.h>
#include <stdlib.h>

#define SNOFLAKE_SIZE 6

// moving right
int isMatchedMovingRight(int snowflake1[], int snowflake2[], int start)
{
    for (int offset = 0; offset < SNOFLAKE_SIZE; offset++)
    {
        int snowflake_index2 = start + offset;
        if (snowflake1[offset] != snowflake2[(start + offset) % SNOFLAKE_SIZE])
            return 0;
    }
    return 1;
}

int isMatchedMovingLeft(int snowflake1[], int snowflake2[], int start)
{
    for (int offset = 0; offset < SNOFLAKE_SIZE; offset++)
    {
        int snowflake2_index = start - offset;
        if (snowflake2_index < 0)
        {
            snowflake2_index = snowflake2_index + SNOFLAKE_SIZE;
        }
        if (snowflake1[start] != snowflake2[snowflake2_index])
            return 0;
    }
    return 1;
}

int isUnique(int snowflake1[], int snowflake2[])
{
}

// snowflake could be marked identical in following cases
// 1 2 3 4 5 6 = 6 5 4 3 2 1 = 4 5 6 1 2 3 = 6 5 4 3 2 1 = 3 2 1 6 5 4

int main()
{
}