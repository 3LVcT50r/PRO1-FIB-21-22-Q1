//The program calculate the distance between two points
//INPUT: two doubles in a structure
//OUTPUT: a double that is the distance

#include <iostream>
#include <cmath>
using namespace std;

struct Point {

	double x, y;
};

//Reads the doubles of Point
//Precondition: the doubles inside the Point
//Postcondition: -
void read(Point &n) {
	cin >> n.x >> n.y;
}

//Calculate the euclidian distance
//Precondition: the doubles inside of "Point"
//Postcondition: a double that is the distance
double dist(const Point &a, const Point &b) {

	return sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
}

int main() {

	Point point_1, point_2;
	read(point_1);
	read(point_2);
	cout << dist(point_1, point_2) << endl;
}