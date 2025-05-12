#include <iostream> 
#include <math.h>
#include "point.h" 

Point::Point(std::string label, double x, double y) {
    this->label = label;
    this->x = x;
    this->y = y;
}

void Point::showpoint() const {
    using namespace std;
    cout
    << label << "\t| x: "
    << x     << "\t| y: "
    << y     << endl;
}

void Point::movepoint(double x1, double y1) {
    x += x1;
    y += y1;
}

double Point::dist(const Point &p1) const {
    return sqrt(pow(x-p1.x, 2)   +   pow(y-p1.y, 2));
}

Point Point::add(std::string label, const Point &p1) const {
    return Point(label, x+p1.x, y+p1.y);
}

void Point::reset(double x, double y) {
    this->x = x;
    this->y = y;
} 

Point Point::middle(std::string label, const Point &p1) const {
    return Point(label, (x+p1.x)/2, (y+p1.y)/2);
}