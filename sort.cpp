/*
  In this file you are to implement one of the O(nlog(n)) algorithms you learned
  about in class.
  The algorithm can be one of:
    - quicksort
    - mergesort
    - heapsort

  You are responsible for figuring out the data structures you want to use
  during implementation. You are free to use the C++ standard library,
  but you are NOT permitted to use any existing sorting code.
*/

#include "sort.h"

// sort takes a vector of Points, and a compare function. The
// compare function returns:
//  1 when a > b
//  0 when a == b
// -1 when a < b
//
// The comparison function is to be used when sorting. After sorting is
// finished, the points vector should have the points sorted least-to-greatest
// according to the compare function.
//
// HINT: Look at std::bind to give your compare function extra arguments.
//void sortingquick()
void sort(Points &points, int start, int end, function<int(Point, Point)> compare) {
    int art = start, st = start, e = end , nd = end, temp;
    // sorting X
    Point mid = points[points.size()/2];
    while (st <= nd) {
        printf("made it 1");
        while (compare(points[st], mid)== 1) {
            st++;
        }
        while (compare(points[nd], mid)== -1) {
            nd--;
        }
        if (st > nd) {
            temp = points[st].getX();
            points[st] = Point(points[nd].getX(),points[st].getY());
            points[nd] = Point(temp,points[nd].getY());
        }
    };

    // sorting Y

    while (art <= e) {
        printf("made it 2");
        while (compare(points[art], mid)== 1)
            art++;
        while (compare(points[e], mid)== -1)
            e--;
        if (art > e) {
            temp = points[art].getY();
            points[art] = Point(points[art].getX(),points[e].getY());
            points[e] = Point(points[e].getX(),temp);
        }
    };

    // recursive step
    if (st < start)
        sort(points ,st, end, compare);
    if (end < nd)
        sort(points ,start, nd, compare);



}
