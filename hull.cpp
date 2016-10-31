#include "hull.h"
#include "sort.h"


// The inputs to this function are a vector of points, which is an unsorted
// array of all points in the plot, and an EMPTY vector of the hull.
// This function runs the graham hull finding algorithm, and puts the hull
// into the hull vector.
void grahamHull(Points &points, Points &hull) {
  // TODO



}

// The inputs to this function are a vector of points, which is an unsorted
// array of all points in the plot, and an EMPTY vector of the hull.
// This function runs the jarvis hull-finding algorithm, and puts the hull
// into the hull vector.
void jarvisHull(Points &points, Points &hull) {
  // TODO
    int size = points.size();
    //sort(points,0,(size-1));
    int leftmost = points[0].getX();
    int trav = leftmost, cntr;
    cntr =(trav+1)% size;
    do {
        for (int i = 0; i < size; ++i) {
            if (points[trav].leftTurn(points[i], points[cntr]) == 1)
                cntr = i;
        }
        trav = cntr;
    }while (trav != leftmost);
}
