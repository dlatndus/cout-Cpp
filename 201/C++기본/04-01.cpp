#include <iostream>	// cout, endl 사용
#include "04-01.h"

using namespace std;

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}
Point::Point() {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY<< ")"<< endl;
}

Point Point::operator+(const Point& rhs)
{
	Point p;		// 매개변수가 없는 생성자 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}


