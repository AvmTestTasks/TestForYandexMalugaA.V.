/*
 TASK5
 
 Given  N  points  on  a  2D  plane, find the  maximum  number
 of  points that lie  on the  same straight line.
 
 Use following  data  structure  and f unction  signature:
 
 struct  Point
 {
 int  x;
 int  y;
 Point() : x(0),  y(0){}
 Point(int  a, int  b) : x(a),  y(b){}
 };
 
 int task5(vector<Point>&  points);
 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
	int x;
	int y;
	Point() :x(0), y(0){}
	Point(int a, int b) :x(a), y(b){}
};



bool operator < (const Point& a, const Point& b)
{
	return a.x < b.x || a.x == b.x && a.y < b.y ;
}
bool operator == (const Point& a, const Point& b)
{
	return a.x == b.x && a.y == b.y;
}


int task5(vector<Point>& points);

int main()
{
    vector<Point> points;
    points.push_back({ 1, 1 });
    points.push_back({ 1, 2 });
    points.push_back({ 2, 4 });
    points.push_back({ -1, -2 });
    points.push_back({ 5, 7 });
    
    cout<<"Answer:"<<task5(points)<<endl;
    
    vector<Point> points2;
    points2.push_back({1, 1 });
    points2.push_back({ -3, 2 });
    points2.push_back({ 4, 1 });
    points2.push_back({ 5, 3 });
    points2.push_back({ 3, 5 });
    
    cout << "Answer:" << task5(points2) << endl;
    
    vector<Point> points3;
    points3.push_back({ 1, 1 });
    points3.push_back({ 1, 2 });
    points3.push_back({ 0, 1 });
    points3.push_back({ 1, 3 });
    points3.push_back({ 3, 1 });
    
    cout << "Answer:" << task5(points3) << endl;
    
    vector<Point> points4;
    points4.push_back({ 1, 2 });
    points4.push_back({ 1, 3 });
    points4.push_back({ 0, 1 });
    points4.push_back({ 3, 1 });
    points4.push_back({ 1, 1 });
    
    cout << "Answer:" << task5(points4) << endl;
    
    vector<Point> points5;
	points5.push_back({ 0, 2 });
	points5.push_back({ 0, 3 });
	points5.push_back({ 1, 0 });
	points5.push_back({ 0, 2 });
	points5.push_back({ 0, 8 });

	cout << "Answer:" << task5(points5) << endl;


	system("pause");
	return 0;
}

int task5(vector<Point>& points)
{
	sort(points.begin(), points.end());
	points.resize(unique(points.begin(), points.end()) - points.begin());

	if (points.size() == 1)
	{
		cout << "All points are the same!" << endl;
		cout << "Answer:";
		return 0;
	}

	vector<float> k(points.size());

	cout << "Tangens alpha:" << endl;
	for (unsigned int i = 0; i < points.size(); i++)
	{
		if (points[i].x == 0)
			k[i] = numeric_limits<float>::infinity();
		else
			k[i] = (float)(points[i].y) / (float)(points[i].x);

		cout << k[i] << endl;
	}

	int counter = 1;

	int BcountOX = 0;
	int BcountOY = 0;
	int temp = 0;

	int result = 2;
	for (unsigned int z = 0; z < k.size(); z++)
	{
		if (BcountOX>temp || BcountOY>temp)
			temp = max(BcountOX, BcountOY);

		
		counter = 1;
		BcountOX = 1;
		BcountOY = 1;

		for (unsigned int j = z+1; j < k.size(); j++)
		{
			if (points[z].x == points[j].x)
				BcountOX++;
			if (points[z].y == points[j].y)
				BcountOY++;
			if (k[z] == k[j])
				counter++;


		}
		if (counter > result)
			result = counter;
	}

	if (result > temp)
		return result;
	else
		return temp;


}
