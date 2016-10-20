# Lab 4

In this lab, you will play with algorithms for generating convex hulls.

![Sample Image](sampleview.png)

As in the above image, your algorithm will take an array of points, and return
the shape of the convex hull - the points on the outside.

To do the above, you will implement 2 algorithms:
- [Gift-Wrapping Algorithm (jarvis Hull)](https://en.wikipedia.org/wiki/Gift_wrapping_algorithm)
- [Graham Scan](https://en.wikipedia.org/wiki/Graham_scan)

## TODO 1

First, you will need to complete the functions given in `point.h`. You will be implementing:

- `dot` - dot product
- `cross` - cross product
- `distanceSquared` - distance squared between two points
- `a.leftTurn(b,c)` - Whether when going from `a` to `c` would give a left turn at `b`

Detailed descriptions of the functions are given in `point.h`. We have also provided a
basic test in `test.cpp`, which can be run as:
```
./lab4 test1
```

## TODO 2

Here you will implement one of the `O(nlogn)` sorting algorithms you learned in class. The sorting algorithm you implement can be one of:

- quicksort
- mergesort
- heapsort

Implementation details are entirely up to you, so long as you conform to the function definition given in `sort.h`:

```
void sort(Points &points, int start, int end,
          function<bool(Point, Point)> compare);
```

Your implementation is to be in `sort.cpp`. You are permitted to modify both files to your liking (other than changing the sort function definition).

A basic test of your sort can be done by running test2:
```
./lab4 test2
```

## TODO 3

In this part of the lab, you will implement the gift-wrapping algorithm, and the graham scan algorithm (in `hull.cpp`). Use the version of graham scan in which points are sorted by angle around the point with
the smallest y coordinate.
For testing purposes, you can choose which algorithm is used in the plotting GUI by changing `defaultHull` in `hull.h`:

```
// Here you choose the hull algorithm to use in plot.cpp
#define defaultHull jarvisHull
```

You can run a (very) basic test of the two algorithms:
```
./lab4 test3
```

Finally, once you have one of the algorithms implemented, you can check if it works by playing with the GUI. You can run the GUI by not passing any arguments to the executable:

```
./lab4
```

## TODO 4

Finally, in the file `SHORTANSWER.txt`, you will write answers to the following questions:

1. Describe how you handle degenerate cases in the graham scan and gift-wrapping algorithm.
2. Describe the best and worst inputs to the Graham Scan algorithm
3.  Compare the running times of the two algorithms on best, worst, and random inputs
4. Suppose the points are restricted to a d-by-d grid. What are the time and memory complexity of Graham Scan using radix sort? There is a version of Graham scan that sorts along the X axis. How does this change the complexity of the algorithm?
