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

string numbers_less_100_to_string(int number){
	string answer;
	int a;
		a=number%10;
	if(number/10==2){
			if(a==0){
			answer="twenty";
			} else {
			answer="twenty " + string_from_int(a);
			}
		}
	if(number/10==3){
			if(a==0){
			answer="thirty";
			} else {
			answer="thirty " + string_from_int(a);
			}
		}
	if(number/10==4){
			if(a==0){
			answer="forty";
			} else {
			answer="forty " + string_from_int(a);
			}
		}
	if(number/10==5){
			if(a==0){
			answer="fifty";
			} else {
			answer="fifty " + string_from_int(a);
			}
		}
		if(number/10==6){
			if(a==0){
			answer="sixty";
			} else {
			answer="sixty " + string_from_int(a);
			}
		}
	if(number/10==7){
			if(a==0){
			answer="seventy";
			} else {
			answer="seventy " + string_from_int(a);
			}
		}
	if(number/10==8){
			if(a==0){
			answer="eighty";
			} else {
			answer="eighty " + string_from_int(a);
			}
		}
	if(number/10==9){
			if(a==0){
			answer="ninety";
			} else {
			answer="ninety " + string_from_int(a);
			}
		}
	return answer;	
}

string number_less_1000_to_string(int number){
	string answer;
	int a;
	a=number%100;
	if(number/100==1){
			if(a==0){
			answer="one hundred";
			} else {
			answer="one hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==2){
			if(a==0){
			answer="two hundred";
			} else {
			answer="two hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==3){
			if(a==0){
			answer="three hundred";
			} else {
			answer="three hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==4){
			if(a==0){
			answer="four hundred";
			} else {
			answer="four hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==5){
			if(a==0){
			answer="five hundred";
			} else {
			answer="five hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==6){
			if(a==0){
			answer="six hundred";
			} else {
			answer="six hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==7){
			if(a==0){
			answer="seven hundred";
			} else {
			answer="seven hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==8){
			if(a==0){
			answer="eight hundred";
			} else {
			answer="eight hundred " + numbers_less_100_to_string(a);
			}
		}
	if(number/100==9){
			if(a==0){
			answer="nine hundred";
			} else {
			answer="nine hundred " + numbers_less_100_to_string(a);
			}
		}
	return answer;	

}