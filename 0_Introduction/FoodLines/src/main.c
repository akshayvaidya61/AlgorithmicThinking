#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 100

int findShortestLineIndex(int listOfLineLengths[], int numberOfLines)
{
    int lineIndex;
    int shortestLineIndex = 0; // default to 0

    for (lineIndex = 1; lineIndex < numberOfLines; lineIndex++)
    {
        if (listOfLineLengths[lineIndex] < listOfLineLengths[shortestLineIndex])
        {
            shortestLineIndex = lineIndex;
        }
    }

    return shortestLineIndex;
}

void printIndexOfShortestLine(int listOfLineLengths[], int numberOfLines, int numberOfPeople)
{
    int i, shortestLineIndex;
    for (i = 0; i < numberOfPeople; i++)
    {
        shortestLineIndex = findShortestLineIndex(listOfLineLengths, numberOfLines);
        printf("%d\n", listOfLineLengths[shortestLineIndex]);
        listOfLineLengths[shortestLineIndex]++;
    }
}

int main()
{
    int listOfLineLengths[MAX_LINES];
    int numberOfLines;
    int numberOfPeople;

    scanf("%d%d", &numberOfLines, &numberOfPeople);
    for (int i = 0; i < numberOfLines; i++)
    {
        scanf("%d", &listOfLineLengths[i]);
    }

    printIndexOfShortestLine(listOfLineLengths, numberOfLines, numberOfPeople);
}