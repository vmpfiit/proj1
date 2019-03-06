#ifdef TEST
#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"
#include<iostream>


BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(string_from_int(0)== string("ноль"));
	BOOST_TEST(string_from_int(1)== string("один"));
	BOOST_TEST(string_from_int(2)== string("два"));
	BOOST_TEST(string_from_int(3)== string("три"));
	BOOST_TEST(string_from_int(4)== string("четыре"));
	BOOST_TEST(string_from_int(5)== string("пять"));
	BOOST_TEST(string_from_int(6)== string("шесть"));
	BOOST_TEST(string_from_int(7)== string("семь"));
	BOOST_TEST(string_from_int(8)== string("восемь"));
	BOOST_TEST(string_from_int(9)== string("девять"));
	BOOST_TEST(string_from_int(10)== string("десять"));
	BOOST_TEST(string_from_int(11)== string("одиннадцать"));
	BOOST_TEST(string_from_int(12)== string("двенадцать"));
	BOOST_TEST(string_from_int(13)== string("тринадцать"));
	BOOST_TEST(string_from_int(14)== string("четырнадцать"));
	BOOST_TEST(string_from_int(15)== string("пятнадцать"));
	BOOST_TEST(string_from_int(16)== string("шестнадацть"));
	BOOST_TEST(string_from_int(17)== string("семнадцать"));
	BOOST_TEST(string_from_int(18)== string("восемнадцать"));
	BOOST_TEST(string_from_int(19)== string("девятнадцать"));
}
BOOST_AUTO_TEST_CASE( test_case2 ){
	BOOST_TEST(numbers_less_100_to_string(2)== string("два"));
	BOOST_TEST(numbers_less_100_to_string(20)== string("двадцать"));
	BOOST_TEST(numbers_less_100_to_string(34)== string("тридцать четыре"));
	BOOST_TEST(numbers_less_100_to_string(46)== string("сорок шесть"));
	BOOST_TEST(numbers_less_100_to_string(52)== string("пятьдесят два"));
	BOOST_TEST(numbers_less_100_to_string(66)== string("шестьдесят шесть"));
	BOOST_TEST(numbers_less_100_to_string(72)== string("семьдесят два"));
	BOOST_TEST(numbers_less_100_to_string(81)== string("восемьдесят один"));
	BOOST_TEST(numbers_less_100_to_string(99)== string("девяносто девять"));

}
BOOST_AUTO_TEST_CASE( test_case3){
	BOOST_TEST(number_less_1000_to_string(100)== string("сто"));
	BOOST_TEST(number_less_1000_to_string(256)== string("двести пятьдесят шесть"));
	BOOST_TEST(number_less_1000_to_string(999)== string("девятсот девяносто девять"));
	BOOST_TEST(number_less_1000_to_string(743)== string("семсот сорок три"));

}
BOOST_AUTO_TEST_CASE( test_case4){
	BOOST_TEST(objects_less_100_to_string(25," рубль"," рубля"," рублей")==string("двадцать пять рублей"));
	BOOST_TEST(objects_less_100_to_string(11," рубль"," рубля"," рублей")==string("одиннадцать рублей"));
	BOOST_TEST(objects_less_100_to_string(14," рубль"," рубля"," рублей")==string("четырнадцать рублей"));
	BOOST_TEST(objects_less_100_to_string(13," рубль"," рубля"," рублей")==string("тринадцать рублей"));


}
BOOST_AUTO_TEST_CASE( test_case5){
	BOOST_TEST(currency_to_string(25, " рубль", " рубля", " рублей", 73, " копейка", " копейки", " копеек")==string("двадцать пять рублей, семьдесят три копейки"));


}
BOOST_AUTO_TEST_SUITE_END();
#endif