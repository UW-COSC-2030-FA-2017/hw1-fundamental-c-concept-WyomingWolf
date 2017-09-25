//collection.cpp
//James Mock
//COSC 2030
//2017-09-24
//collection definitions

#include "collection.h"

Collection::Collection()
{
	size = 0;
	vector<type>(0);

}

Collection::~Collection()
{
	delete vec;
}

void Collection::makeEmpy()
{

}