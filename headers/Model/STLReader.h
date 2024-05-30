#pragma once
#include "vector"
#include "Model/Point3D.h"
#include "string"

// Namespace for IOOperation
namespace IOOperation {

	// Class for reading STL files
	class STLReader {
	public:	
		STLReader(); 
		STLReader(std::string filePath, std::vector<Point3D>& vertices, std::vector<Point3D>& colors, std::vector<Point3D>& normals); 
		~STLReader(); 

	private:
		// Private function to read STL file and populate vectors
		void readSTL(std::string filePath, std::vector<Point3D>& vertices, std::vector<Point3D>& colors, std::vector<Point3D>& normals);
	};
}

