#include "../headers/Model/Triangle.h"

Triangle::Triangle() : mP1(Point3D(0, 0, 0)), mP2(Point3D(0, 0, 0)), mP3(Point3D(0, 0, 0)), mNormal(Point3D(0, 0, 0))
{
}

// Constructor with three vertices
Triangle::Triangle(Point3D inP1, Point3D inP2, Point3D inP3) : mP1(Point3D(0, 0, 0)), mP2(Point3D(0, 0, 0)), mP3(Point3D(0, 0, 0)), mNormal(Point3D(0, 0, 0))
{
    // Assign vertices
    mP1 = inP1;
    mP2 = inP2;
    mP3 = inP3;
}

// Constructor with normal and three vertices
Triangle::Triangle(Point3D inNormal, Point3D inP1, Point3D inP2, Point3D inP3) :
    mNormal(inNormal), mP1(inP1), mP2(inP2), mP3(inP3)
{
}

Triangle::~Triangle()
{

}

Point3D Triangle::p1() const
{
    return mP1;
}

Point3D Triangle::p2() const
{
    return mP2;
}

Point3D Triangle::p3() const
{
    return mP3;
}

Point3D Triangle::normal() const
{
    return mNormal;
}
void Triangle::setNormal(Point3D inNormal)
{
    mNormal = inNormal;
}

