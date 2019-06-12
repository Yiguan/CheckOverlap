# CheckOverlap

## INSTALL
```R
library(devtools)
install_github("Yiguan/CheckOverlap")
```
================================================
## 1. CheckPoint(pos, start, end)

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

## 2. CheckRange(pos, start, end)

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

=====================================================

## 3. CheckMatch(pos, start, end, matchALL='T')

 Check if segments contain point 

Description:

     To map points into segmentation and return a dataframe with "point_position" and "seg_row" indicating the points fall into which segmentation.
     

Usage:

     CheckPoint(pos, start, end)
     
Arguments:

     pos: a vector of numbers of points
     start: a vector of numbers of starting position
     end: a vector of numbers of ending positioni
     matchAll: logical "T" or "F", default = "T"

Examples:

     aa <- c(3,9,21,11)
     bb1 <- c(1,8,16)
     bb2 <- c(10,15,18)
     # find all possible match
     CheckMatch(aa,bb1,bb2)
     ##   point_position seg_row
     # 1              1       1
     # 2              2       1
     # 3              2       2
     # 4              4       2
     ## 1st point within 1st segment; 2nd points within 1st and 2nd segment;
     ## 4th point in 2nd segment.
 
     # find the first match line and break
     CheckMatch(aa,bb1,bb2,matchAll='F')
     ##   point_position seg_row
     # 1              1       1
     # 2              2       1
     # 3              4       2
     ## 1st point FIRST match in 1st segment; 2nd point FIRST match 1st segment
     ## 4th point FIRST match in 2nd segment.

======================================================

## 4. CheckRange2Range(aa_start,aa_end,bb_start,bb_end)

  check segments overlap with other segments

Description:

	To check if a segments overlap with other segments.

Usage:
	
	CheckRange2Range(aa_start,aa_end,bb_start,bb_end)

Arguments:

	aa_start: a vector of numbers of starting positions of checked segments
	aa_end: a vector of numbers of ending position of checked segments
	bb_start: a vector of numbers of starting position of other segments
	bb_end: a vector of numbers of ending position of other segments

Examples:

	aa_start <- c(2,6,11)
	aa_end <- c(4,9,15)
	bb_start <- c(1,5,7)
	bb_end <- c(3,8,10)
	# to see if segments 2-4,6-9,11-15 overlap with 1-3,5-8,7-10
	CheckRange2Range(aa_start,aa_end,bb_start,bb_end)
