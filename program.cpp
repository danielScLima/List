// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "list.h"

TEST_CASE( "Testing the insert and remove in the head", "[single-file]" )
{
	ListDataStructure l;
	NodeOfList* node = nullptr;

	l.insertInHead("a");
	l.insertInHead("b");
	l.insertInHead("c");

	node = l.removeInHead();
	REQUIRE (node->data.compare("c") == 0);
	delete node;

	node = l.removeInHead();
	REQUIRE (node->data.compare("b") == 0);
	delete node;
	
	node = l.removeInHead();
	REQUIRE (node->data.compare("a") == 0);
	delete node;
}

TEST_CASE( "Testing the leak ocurrence", "[single-file]" )
{
	ListDataStructure l;
	NodeOfList* node = nullptr;

	l.insertInHead("a");
	l.insertInHead("b");
	l.insertInHead("c");
}

TEST_CASE( "Testing the insert in head and remove in the tail", "[single-file]" )
{
	ListDataStructure l;
	NodeOfList* node = nullptr;

	l.insertInHead("a");
	l.insertInHead("b");
	l.insertInHead("c");

	node = l.removeInTail();
	REQUIRE (node->data.compare("a") == 0);
	delete node;

	node = l.removeInTail();
	REQUIRE (node->data.compare("b") == 0);
	delete node;
	
	node = l.removeInTail();
	REQUIRE (node->data.compare("c") == 0);
	delete node;
}

TEST_CASE( "Testing the insert in tail and remove in the head", "[single-file]" )
{
	ListDataStructure l;
	NodeOfList* node = nullptr;

	l.insertInTail("a");
	l.insertInTail("b");
	l.insertInTail("c");

	node = l.removeInHead();
	REQUIRE (node->data.compare("a") == 0);
	delete node;

	node = l.removeInHead();
	REQUIRE (node->data.compare("b") == 0);
	delete node;
	
	node = l.removeInHead();
	REQUIRE (node->data.compare("c") == 0);
	delete node;
}

TEST_CASE( "Testing the insert in tail and remove in the tail", "[single-file]" )
{
	ListDataStructure l;
	NodeOfList* node = nullptr;

	l.insertInTail("a");
	l.insertInTail("b");
	l.insertInTail("c");

	node = l.removeInTail();
	REQUIRE (node->data.compare("c") == 0);
	delete node;

	node = l.removeInTail();
	REQUIRE (node->data.compare("b") == 0);
	delete node;
	
	node = l.removeInTail();
	REQUIRE (node->data.compare("a") == 0);
	delete node;
}
