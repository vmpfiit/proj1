#ifdef TEST
#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"
#include<iostream>


BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(string_from_int(0)== string("null"));
	BOOST_TEST(string_from_int(1)== string("one"));
	BOOST_TEST(string_from_int(2)== string("two"));
	BOOST_TEST(string_from_int(3)== string("three"));
	BOOST_TEST(string_from_int(4)== string("four"));
	BOOST_TEST(string_from_int(5)== string("five"));
	BOOST_TEST(string_from_int(6)== string("six"));
	BOOST_TEST(string_from_int(7)== string("seven"));
	BOOST_TEST(string_from_int(8)== string("eight"));
	BOOST_TEST(string_from_int(9)== string("nine"));
	BOOST_TEST(string_from_int(10)== string("ten"));
	BOOST_TEST(string_from_int(11)== string("eleven"));
	BOOST_TEST(string_from_int(12)== string("twelve"));
	BOOST_TEST(string_from_int(13)== string("thirteen"));
	BOOST_TEST(string_from_int(14)== string("fourteen"));
	BOOST_TEST(string_from_int(15)== string("fiveteen"));
	BOOST_TEST(string_from_int(16)== string("sixteen"));
	BOOST_TEST(string_from_int(17)== string("seventeen"));
	BOOST_TEST(string_from_int(18)== string("eighteen"));
	BOOST_TEST(string_from_int(19)== string("nineteen"));
}
BOOST_AUTO_TEST_CASE( test_case2 ){
	BOOST_TEST(numbers_less_100_to_string(20)== string("twenty"));
	BOOST_TEST(numbers_less_100_to_string(34)== string("thirty four"));
	BOOST_TEST(numbers_less_100_to_string(46)== string("forty six"));
	BOOST_TEST(numbers_less_100_to_string(52)== string("fifty two"));
	BOOST_TEST(numbers_less_100_to_string(66)== string("sixty six"));
	BOOST_TEST(numbers_less_100_to_string(72)== string("seventy two"));
	BOOST_TEST(numbers_less_100_to_string(81)== string("eighty one"));
	BOOST_TEST(numbers_less_100_to_string(99)== string("ninety nine"));

}
BOOST_AUTO_TEST_CASE( test_case3){
	BOOST_TEST(number_less_1000_to_string(100)== string("one hundred"));
	BOOST_TEST(number_less_1000_to_string(256)== string("two hundred fifty six"));
	BOOST_TEST(number_less_1000_to_string(999)== string("nine hundred ninety nine"));
	BOOST_TEST(number_less_1000_to_string(743)== string("seven hundred forty three"));

}
BOOST_AUTO_TEST_SUITE_END();
#endif