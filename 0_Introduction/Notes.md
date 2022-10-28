## Problem statement
there are N food lines 1 <= N <= 100
there are M people joining lines every hour 1 <= M <= 100
there are a_i people in every line 1 <= a_i < 100

## input
N M
a_1 a_2 a_3 ... a_N

## output
what line each of M joined on new line

## Notes
* store current length of each line in an array. Need to malloc array based on N value.
* find the shortest line on each person in M joining.

