#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}
SCENARIO("vector with param", "[init]") {
	vector_t vector(3);
	REQUIRE(vector.size() == 3);
	REQUIRE(vector.capacity() == 3);
	for(unsigned int index = 0; index < vector.size(); ++ index){
		REQUIRE(vector[index]==0);
}
