// CheckPointRange.cpp
#include <Rcpp.h>
using namespace Rcpp;

//'@title Check if points in segments
//'@description
//'To check if a number in a range. 
//'Return a vector of 0,1 if the the number 
//'in a range(1) or not (0).
//'@param pos a vector of numbers of points
//'@param start a vector of numbers of starting position
//'@param end a vector of numbers of ending position
//'@examples
//'aa <- c(2,4,6)
//'bb1 <- c(1,5,7)
//'bb2 <- c(3,8,10)
//'#too see if 2,4,6 in range 1-3,5-8,7-10
//'CheckPoint(aa,bb1,bb2)
//'@useDynLib CheckOverlap
//'@import Rcpp
//'@export
// [[Rcpp::export]]
IntegerVector CheckPoint(IntegerVector pos, IntegerVector start, IntegerVector end){
  int pos_size=pos.size();
  int seg_size=start.size();
  IntegerVector ismask(pos_size);
  for (int i=0; i<pos_size; i++) {
    for (int j=0; j<seg_size; j++){
      if ( pos[i]>=start[j] && pos[i]<=end[j] ){
        ismask[i]=1;
        break;
      }
    }
  }
  return ismask;
}


#include <Rcpp.h>
using namespace Rcpp;
//'@title Check if segments contain point
//'@description
//'To check if a range contains points. 
//'Return a vector of 0,1 
//'with 1 = contain points, 0 = not contain points.
//'@param pos a vector of numbers of points
//'@param start a vector of numbers of starting position
//'@param end a vector of numbers of ending position
//'@examples
//'aa <- c(2,4,6)
//'bb1 <- c(1,5,7)
//'bb2 <- c(3,8,10)
//'# to see if range 1-3,5-8, 7-8 contain 2,4,6
//'CheckRange(aa,bb1,bb2)
//'@useDynLib CheckOverlap
//'@import Rcpp
//'@export
// [[Rcpp::export]]
IntegerVector CheckRange(IntegerVector pos, IntegerVector start, IntegerVector end){
  int pos_size=pos.size();
  int seg_size=start.size();
  IntegerVector ismask1(seg_size);
  for (int i=0; i<seg_size; i++) {
    for (int j=0; j<pos_size; j++){
      if ( pos[j]>=start[i] && pos[j]<=end[i] ){
        ismask1[i]=1;
        break;
      }
    }
  }
  return ismask1;
}



#include <Rcpp.h>

using namespace Rcpp;
//'@title match point to range
//'@description
//'To map points into segmentatin
//'return a dataframe with "point_position" and "seg_row"
//'indicating the points fall into which segmentation.
//'@param pos a vector of numbers of points
//'@param start a vector of numbers of starting position
//'@param end a vector of numbers of ending position
//'@examples
//'aa <- c(3,9,21,11)
//'bb1 <- c(1,8,16)
//'bb2 <- c(4,15,18)
//'CheckMatch(aa,bb1,bb2)
//'result shows the first point in first segmentation; the second and forth points
//'in the second segmentation
//'@useDynLib CheckOverlap
//'@import Rcpp
//'@export
//[[Rcpp::export]]

DataFrame CheckMatch(IntegerVector pos, IntegerVector start, IntegerVector end){
  int pos_size=pos.size();
  int seg_size=start.size();
  IntegerVector ismask;
  IntegerVector pos_position;
  for (int i=0; i<pos_size; i++) {
    for (int j=0; j<seg_size; j++){
      if ( pos[i]>=start[j] && pos[i]<=end[j] ){
        ismask.push_back(j+1);
        pos_position.push_back(i+1);
      }
    }
  }
  return DataFrame::create(Named("point_position")=pos_position, Named("seg_row") = ismask);
}



