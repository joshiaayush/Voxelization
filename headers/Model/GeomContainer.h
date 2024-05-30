#pragma once
#include <vector>
#include "Model/Point3D.h" // Including header file for Point3D class

class GeomContainer {
public:
	static GeomContainer* getContainer();

	static GeomContainer* getContainer(std::vector<Point3D> inPoints);

	// Function to create vertices for triangles
	void makeTriangleVertices();

	// Function to create vertices for quads (four-sided polygons)
	void makeQuadVertices(const Point3D& p1, const Point3D& p2, const Point3D& p3, const Point3D& p4);

	std::vector<float> vertices();

	std::vector<float> colors();

	std::vector<float> normals();

private:
	// Private default constructor
	GeomContainer();

	// Private constructor with initial points
	GeomContainer(std::vector<Point3D> inPoints);

private:
	std::vector<Point3D> mPoints; 
	std::vector<float> mVertices; 
	std::vector<float> mColors; 
	std::vector<float> mNormals; 

	Point3D mColor;
};
