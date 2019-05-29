#include<string>

using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number){
	case 0: answer= "����";
		break;
	case 1: answer= "����";
		break;
	case 2: answer= "���";
		break;
	case 3: answer= "���";
		break;
	case 4: answer= "������";
		break;
	case 5: answer= "����";
		break;
	case 6: answer= "�����";
		break;
	case 7: answer= "����";
		break;
	case 8: answer= "������";
		break;
	case 9: answer= "������";
		break;
	case 10: answer= "������";
		break;
	case 11: answer= "�����������";
		break;
	case 12: answer= "����������";
		break;
	case 13: answer= "����������";
		break;
	case 14: answer= "������������";
		break;
	case 15: answer= "����������";
		break;
	case 16: answer= "�����������";
		break;
	case 17: answer= "����������";
		break;
	case 18: answer= "������������";
		break;
	case 19: answer= "������������";
		break;

	}
	return answer;
}

string numbers_less_100_to_string(int number){
	string answer;
	int a;
	a=number%10;
	if(number>=0 && number<=19){
		answer=string_from_int(number);
	}else{
		if(number/10==2){
			if(a==0){
				answer="��������";
			} else {
				answer="�������� " + string_from_int(a);
			}
		}
		if(number/10==3){
			if(a==0){
				answer="��������";
			} else {
				answer="�������� " + string_from_int(a);
			}
		}
		if(number/10==4){
			if(a==0){
				answer="�����";
			} else {
				answer="����� " + string_from_int(a);
			}
		}
		if(number/10==5){
			if(a==0){
				answer="���������";
			} else {
				answer="��������� " + string_from_int(a);
			}
		}
		if(number/10==6){
			if(a==0){
				answer="����������";
			} else {
				answer="���������� " + string_from_int(a);
			}
		}
		if(number/10==7){
			if(a==0){
				answer="���������";
			} else {
				answer="��������� " + string_from_int(a);
			}
		}
		if(number/10==8){
			if(a==0){
				answer="�����������";
			} else {
				answer="����������� " + string_from_int(a);
			}
		}
		if(number/10==9){
			if(a==0){
				answer="���������";
			} else {
				answer="��������� " + string_from_int(a);
			}
		}
	}
	return answer;	
}

string numbers_less_1000_to_string(int number){
	string answer;
	int a;
	a=number%100;
	if(number<100) answer=numbers_less_100_to_string(number);
	if(number/100==1){
		if(a==0){
			answer="���";
		} else {
			answer="��� " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==2){
		if(a==0){
			answer="������";
		} else {
			answer="������ " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==3){
		if(a==0){
			answer="������";
		} else {
			answer="������ " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==4){
		if(a==0){
			answer="���������";
		} else {
			answer="��������� " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==5){
		if(a==0){
			answer="������";
		} else {
			answer="������ " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==6){
		if(a==0){
			answer="�������";
		} else {
			answer="������� " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==7){
		if(a==0){
			answer="������";
		} else {
			answer="������ " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==8){
		if(a==0){
			answer="��������";
		} else {
			answer="�������� " + numbers_less_100_to_string(a);
		}
	}
	if(number/100==9){
		if(a==0){
			answer="��������";
		} else {
			answer="�������� " + numbers_less_100_to_string(a);
		}
	}

	return answer;	

}


string objects_less_100_to_string(int number, string s1, string s2, string s3)
{
	string answer;
	int a;
	a=number%10;
	if(number==1) answer= string_from_int(number)+s1;
	if(number>=2 && number<=4) answer= string_from_int(number)+s2;
	if(number==0 || (number>=5 && number<=9)) answer= string_from_int(number)+s3;
	if(number>=11 && number<=14){
		answer= numbers_less_100_to_string(number)+s3;
	}
	if(number>14 || number==10){
		if(a==0 || (a>=5 && a<=9)) answer= numbers_less_100_to_string(number)+s3;
		if(a==1) answer= numbers_less_100_to_string(number)+s1;
		if(a>=2 && a<=4) answer= numbers_less_100_to_string(number)+s2;
	}
	/*if(number%10==1)
	answer=number_less_1000_to_string(number)+" "+s1;
	else
	if(number%10>1 && number%10<5)
	answer=number_less_1000_to_string(number)+" "+s2;
	else
	answer=number_less_1000_to_string(number)+" "+s3;
	*/
	return answer;
}


string currency_to_string(
	int integer_value, string si1, string si2, string si3,
	int decimal_value, string sd1, string sd2, string sd3)
{
	string answer;




	answer=objects_less_100_to_string(integer_value, si1, si2, si3)+", "+objects_less_100_to_string(decimal_value, sd1, sd2, sd3);



	return answer;
}
