#include<string>

using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number){
	case 0: answer= "null";
		break;
	case 1: answer= "one";
		break;
	case 2: answer= "two";
		break;
	case 3: answer= "three";
		break;
	case 4: answer= "four";
		break;
	case 5: answer= "five";
		break;
	case 6: answer= "six";
		break;
	case 7: answer= "seven";
		break;
	case 8: answer= "eight";
		break;
	case 9: answer= "nine";
		break;
	case 10: answer= "ten";
		break;
	case 11: answer= "eleven";
		break;
	case 12: answer= "twelve";
		break;
	case 13: answer= "thirteen";
		break;
	case 14: answer= "fourteen";
		break;
	case 15: answer= "fiveteen";
		break;
	case 16: answer= "sixteen";
		break;
	case 17: answer= "seventeen";
		break;
	case 18: answer= "eighteen";
		break;
	case 19: answer= "nineteen";
		break;

	}
	return answer;
}