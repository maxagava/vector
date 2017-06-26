#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}

SCENARIO("with params", "[init]"){
	vector_t vector(3);
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 4);
	
}

SCENARIO("size", "[init]")
{
	vector_t vector;
	REQUIRE(vector.size()==0);
}

SCENARIO("capacity", "[init]")
{
	vector_t vector;
	REQUIRE(vector.capacity()==0);
}
	
SCENARIO("copy constr", "[init]")
{
	vector_t vector(5);
	vector_t temp(vector);
	REQUIRE(temp.capacity() == 8);
	
}

SCENARIO ("=", "[init]"){
	vector_t v1(5);
	vector_t v2;
	v2 = v1;
	REQUIRE(v2.size() == 0);
	REQUIRE(v2.capacity() == 8);
	for (int i=0; i<v2.size();i++)
		REQUIRE(v2.ptr(i) == v1.ptr(i));
}


SCENARIO ("brac", "[init]")
{
	vector_t v1(5);
	REQUIRE(v1[1] == v1.ptr(1));
}



SCENARIO ("cap", "[init]")
{
	vector_t v1;
	v1.push_back(1);
	
	REQUIRE(v1.capacity() == 2);
}
