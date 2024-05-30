#pragma once
#include "Point3D.h"

class Triangle
{
public:
	Triangle(); 
	Triangle(Point3D inP1, Point3D inP2, Point3D inP3);
	Triangle(Point3D inNormal, Point3D inP1, Point3D inP2, Point3D inP3);
	~Triangle();

	// Getter functions for points
	Point3D p1() const;
	Point3D p2() const;
	Point3D p3() const;

	// Getter function for normal
	Point3D normal() const;

	void setNormal(Point3D inNormal);

private:
	Point3D mP1; // First point of the triangle
	Point3D mP2; // Second point of the triangle
	Point3D mP3; // Third point of the triangle
	Point3D mNormal; // Normal vector of the triangle
};