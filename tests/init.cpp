#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") 
{
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}
SCENARIO("vector with param", "[init]")
{
	vector_t vector(3);
	REQUIRE(vector.size() == 3);
	REQUIRE(vector.capacity() == 3);
	
	for(unsigned int index = 0; index < vector.size(); ++ index)
	
		REQUIRE(vector[index]==0);
	
}
SCENARIO("vector init object ", "[init]")
{
	vector_t a;
	REQUIRE(a.size()==0);
	REQUIRE(a.capacity()==0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	REQUIRE(a.size() == 3);
	REQUIRE(a.capacity() == 4);
	 vector_t b(a);
	REQUIRE(b.size() == 3);
	REQUIRE(b.capacity() == 4);
	for(unsigned int i = 0; i < b.size(); i++)
		b[i] == a[i];
}
SCENARIO("vector operator =" , "[init]")
{
	vector_t b(4), a;
	REQUIRE(a.size()==0);
	REQUIRE(a.capacity()==0);
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	REQUIRE(a.size == 4);
	REQUIRE(a.capacity == 5);
	 b = a;
	REQUIRE(b.size() == 4);
	REQUIRE(b.capacity() == 5);
	for(unsigned int i = 0; i < b.size(); i++)
		b[i] == a[i];
}
SCENARIO("vector pushback", "[init]")
{
	vector_t vec(3);
	REQUIRE(vec.size()==3);
	REQUIRE(vec.capacity()==3);
	vec.push_back(4);
	REQUIRE(vec.size()==4);
	REQUIRE(vec.capacity()==7);
	REQUIRE(vec[0]==0);
	REQUIRE(vec[1]==0);
	REQUIRE(vec[2]==0);
	REQUIRE(vec[3]==5);
}
	
	
