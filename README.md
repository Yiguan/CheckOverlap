# CheckOverlap

INSTALL
```R
library(devtools)
install_github("Yiguan/CheckOverlap")
```
================================================
1. CheckPoint(pos, start, end)
Check if points in segments

Description:

     To check if a number in a range.  Return a vector of 0,1 if the
     the number in a range(1) or not (0).

Usage:

     CheckPoint(pos, start, end)
     
Arguments:

     pos: a vector of numbers of points
     start: a vector of numbers of starting position
     end: a vector of numbers of ending position

Examples:

     aa <- c(2,4,6)
     bb1 <- c(1,5,7)
     bb2 <- c(3,8,10)
     #too see if 2,4,6 in range 1-3,5-8,7-10
     CheckPoint(aa,bb1,bb2)
     
===================================================

2. CheckRange(pos, start, end)
 Check if segments contain point

Description:

     To check if a range contains points.  Return a vector of 0,1 with
     1 = contain points, 0 = not contain points.

Usage:

     CheckRange(pos, start, end)
     
Arguments:

     pos: a vector of numbers of points
     start: a vector of numbers of starting position
     end: a vector of numbers of ending position

Examples:

     aa <- c(2,4,6)
     bb1 <- c(1,5,7)
     bb2 <- c(3,8,10)
     # to see if range 1-3,5-8, 7-8 contain 2,4,6
     CheckRange(aa,bb1,bb2)
