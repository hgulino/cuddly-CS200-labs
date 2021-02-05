#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <algorithm>

const std::string COURSE_PREFIX = "CS A";

class Graph
{
	// Declaration friend function operator<<
	friend std::ostream& operator<<(std::ostream& out, const Graph& graph);

public:
	// Declaration default constructor
	Graph() : graph{}, numOfCourses{0} {}

	// Declarations for the Big Three
	Graph(const Graph& anotherGraph);
	Graph& operator=(const Graph& rightSide);
	~Graph();
	
	// Declaration function createGraph
	void createGraph(const std::vector<std::vector<int>>& vectorToCopy);

	// Declaration function isEmpty
	

	// Declarations of print functions
	void printAllCourses() const;
	void printPrerequisites(const int& courseID) const;

	// Declaration function clearGraph
	void clearGraph();

private:

	std::map<int, std::set<int>> * graph;
    int numOfCourses;		
};

#endif