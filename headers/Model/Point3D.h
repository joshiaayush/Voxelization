#pragma once
#include<iostream>

class Point3D
{
public:
	Point3D(); 
	Point3D(double inX, double inY, double inZ); 
	Point3D(char* facet);
	~Point3D();

	// Getter functions for coordinates
	double x() const;
	double y() const;
	double z() const;

	// Setter functions for coordinates
	void setX(double inX);
	void setY(double inY);
	void setZ(double inZ);

	// Overloaded operators for vector arithmetic
	const Point3D operator+(const Point3D& rv) const; 
	const Point3D operator-(const Point3D& rv) const; 
	const Point3D operator*(const double& rv) const; 
	const Point3D operator/(const double& rv) const; 
	const Point3D operator^(const Point3D& rv) const; 
	const double operator&(const Point3D& rv) const; 
	Point3D& operator+=(const Point3D& rv); 
	Point3D& operator-=(const Point3D& rv); 
	Point3D& operator*=(const double& rv); 
	Point3D& operator/=(const double& rv); 

	// Comparison operator
	bool operator==(const Point3D& rv) const;

	// Calculate the norm (length) of the vector
	double normal() const;

	Point3D cross(const Point3D& other) const;

	double dot(const Point3D& other) const;

	void normalize();

private:
	double mX; // x-coordinate
	double mY; // y-coordinate
	double mZ; // z-coordinate
};