#ifndef POINT
#define POINT

#include <vector>
#include <math.h>
using namespace std;

inline int sign(int i) { return i > 0 ? 1 : (i == 0 ? 0 : -1); }

class Point {
    int x, y;

public:
    Point(int x, int y) : x(x), y(y) {}

    int getX() const { return x; }

    int getY() const { return y; }

    bool operator==(const Point &a) const { return x == a.x && y == a.y; }

    bool operator<(const Point &a) const {
      return x < a.x || (x == a.x && y < a.y);
    }

    Point operator-(const Point &a) const { return Point(x - a.x, y - a.y); }



    // added for convenience
    //int magnitude(const Point &a) { return sqrt(( (a.getX()) * (a.getX()) - (a.getY()) * (a.getY()) )); }


    // dot returns the dot product between the current Point (this) and the passed
    // in Point (a)
    int dot(const Point &a) const {
      // TODO
      return a.getX()*(this->getX()) + a.getY()*(this->getY()) ;
    }

    // cross returns the cross product between the current Point (this) and the
    // passed in Point (a)
    int cross(const Point &a) const {
      // TODO
      return a.getY()*(this->getX()) + a.getY()*(this->getX()) ;
    }

    // distanceSquared returns the square of the distance between this and a
    int distanceSquared(const Point &a) const {
      // TODO
      Point u = a - *this;
        //(sqrt(10^2+20^2)-sqrt(4^2+5^2))^2

    }

    // leftTurn returns 1 if the point c would turn left from the line of this to
    // b.
    int leftTurn(const Point &b, const Point &c) const {
      // TODO
      return 0;
    }
};

typedef vector<Point> Points;

#endif
