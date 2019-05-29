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
	BOOST_TEST(numbers_less_100_to_string(10)== string("десять"));
	BOOST_TEST(numbers_less_100_to_string(20)== string("двадцать"));
	BOOST_TEST(numbers_less_100_to_string(30)== string("тридцать"));
	BOOST_TEST(numbers_less_100_to_string(40)== string("сорок"));
	BOOST_TEST(numbers_less_100_to_string(50)== string("пятьдесят"));
	BOOST_TEST(numbers_less_100_to_string(60)== string("шестьдесят"));
	BOOST_TEST(numbers_less_100_to_string(70)== string("семьдесят"));
	BOOST_TEST(numbers_less_100_to_string(80)== string("восемьдесят"));
	BOOST_TEST(numbers_less_100_to_string(90)== string("девяносто"));
	BOOST_TEST(numbers_less_100_to_string(34)== string("тридцать четыре"));
	BOOST_TEST(numbers_less_100_to_string(46)== string("сорок шесть"));
	BOOST_TEST(numbers_less_100_to_string(52)== string("пятьдесят два"));
	BOOST_TEST(numbers_less_100_to_string(66)== string("шестьдесят шесть"));
	BOOST_TEST(numbers_less_100_to_string(72)== string("семьдесят два"));
	BOOST_TEST(numbers_less_100_to_string(81)== string("восемьдесят один"));
	BOOST_TEST(numbers_less_100_to_string(99)== string("девяносто девять"));

}
BOOST_AUTO_TEST_CASE( test_case3){
	BOOST_TEST(numbers_less_1000_to_string(52)== string("пятьдесят два"));
	BOOST_TEST(numbers_less_1000_to_string(105)== string("сто пять"));
	BOOST_TEST(numbers_less_1000_to_string(100)== string("сто"));
	BOOST_TEST(numbers_less_1000_to_string(200)== string("двести"));
	BOOST_TEST(numbers_less_1000_to_string(300)== string("триста"));
	BOOST_TEST(numbers_less_1000_to_string(400)== string("четыреста"));
	BOOST_TEST(numbers_less_1000_to_string(500)== string("пятсот"));
	BOOST_TEST(numbers_less_1000_to_string(600)== string("шестсот"));
	BOOST_TEST(numbers_less_1000_to_string(700)== string("семсот"));
	BOOST_TEST(numbers_less_1000_to_string(800)== string("восемсот"));
	BOOST_TEST(numbers_less_1000_to_string(900)== string("девятсот"));
	BOOST_TEST(numbers_less_1000_to_string(256)== string("двести пятьдесят шесть"));
	BOOST_TEST(numbers_less_1000_to_string(999)== string("девятсот девяносто девять"));
	BOOST_TEST(numbers_less_1000_to_string(743)== string("семсот сорок три"));

}
BOOST_AUTO_TEST_CASE( test_case4){
	BOOST_TEST(objects_less_100_to_string(21," рубль"," рубля"," рублей")==string("двадцать один рубль"));
	BOOST_TEST(objects_less_100_to_string(22," рубль"," рубля"," рублей")==string("двадцать два рубля"));
	BOOST_TEST(objects_less_100_to_string(14," рубль"," рубля"," рублей")==string("четырнадцать рублей"));
	BOOST_TEST(objects_less_100_to_string(1," рубль"," рубля"," рублей")==string("один рубль"));
	BOOST_TEST(objects_less_100_to_string(2," рубль"," рубля"," рублей")==string("два рубля"));
	BOOST_TEST(objects_less_100_to_string(30," рубль"," рубля"," рублей")==string("тридцать рублей"));
	BOOST_TEST(objects_less_100_to_string(12," стул"," стула"," стульев")==string("двенадцать стульев"));
	BOOST_TEST(objects_less_100_to_string(11," стул"," стула"," стульев")==string("одиннадцать стульев"));
	BOOST_TEST(objects_less_100_to_string(6," стул"," стула"," стульев")==string("шесть стульев"));
	BOOST_TEST(objects_less_100_to_string(17," стул"," стула"," стульев")==string("семнадцать стульев"));



}
BOOST_AUTO_TEST_CASE( test_case5){
	BOOST_TEST(currency_to_string(25, " рубль", " рубля", " рублей", 73, " копейка", " копейки", " копеек")==string("двадцать пять рублей, семьдесят три копейки"));
	BOOST_TEST(currency_to_string(22, " рубль", " рубля", " рублей", 31, " копейка", " копейки", " копеек")==string("двадцать два рубля, тридцать один копейка"));
	BOOST_TEST(currency_to_string(27, " доллар", " доллара", " долларов", 3, " цент", " цента", " центов")==string("двадцать семь долларов, три цента"));


}
BOOST_AUTO_TEST_SUITE_END();
#endif