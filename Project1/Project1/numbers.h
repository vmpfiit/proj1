#include<string>

using namespace std;

string stringfromint(int num){
	string s;
	switch(num)
	{
	case 0:
			 s="����";
		 break;
	case 1:
			 s="����";
		 break;
	case 2:
			 s="���";
		 break;
	case 3:
			 s="���";
		 break;
	case 4:
			 s="������";
		 break;
	case 5:
			 s="����";
		 break;
	case 6:
			 s="�����";
		 break;
	case 7:
			 s="����";
		 break;
	case 8:
			 s="������";
		 break;
	case 9:
			s="������"; 
		 break;
	case 10:
			 s="������";
		 break;
	case 11:
			 s="�����������";
		 break;
	case 12:
			 s="����������";
		 break;
	case 13:
			 s="����������";
		 break;
	case 14:
			 s="������������";
		 break;
	case 15:
			 s="����������";
		 break;
	case 16:
			 s="�����������";
		 break;
	case 17:
		s="����������";	 
		 break;
	case 18:
		s="������������";	 
		 break;
	case 19:
		s="������������";
		 break;

	default:
		break;

	}	
	return s;
}	

string number_less_100_to_string(int number)
{
    string answer = "";
    if(number>=11 && number<=19)
        answer=stringfromint(number);
    else 
    {  int remain=number%10;
        int tens =number-remain;
	switch(tens)
	{
	case 20:
		answer+="��������";
		break;
	case 30:
		answer+="��������";
		break;
	case 40:
		answer+="�����";
		break;
	case 50:
		answer+="���������";
		break;
	case 60:
		answer+="����������";
		break;
	case 70:
		answer+="���������";
		break;
	case 80:
		answer+="�����������";
		break;
	case 90:
		answer+="���������";
		break;
	default:
		break;
	}
	if(remain!=0 && tens==0)
		answer+=stringfromint(remain);
    else if (remain!=0)
        answer+=" "+stringfromint(remain);
    else if(tens==0 && remain==0) answer="����";}
	return answer;
}


string number_less_1000_to_string(int number)
{
    string answer = "";
	int remain = number%100;
	int hundreds =number-remain;
	switch(hundreds)
	{
	case 100:
		answer+="���";
		break;
	case 200:
		answer+="������";
		break;
	case 300:
		answer+="������";
		break;
	case 400:
		answer+="���������";
		break;
	case 500:
		answer+="�������";
		break;
	case 600:
		answer+="��������";
		break;
	case 700:
		answer+="�������";
		break;
	case 800:
		answer+="���������";
		break;
	case 900:
		answer+="���������";
		break;
	default:
		
		break;
	}
	if(remain!=0 && hundreds!=0)
		answer+=" "+number_less_100_to_string(remain);
    else if (remain!=0)
        answer+=number_less_100_to_string(remain);
    else if(hundreds==0 && remain==0) answer="����";
	return answer;
}




string object_to_string (int number , string s1 , string s2 , string s3)
{
    string answer=number_less_1000_to_string(number);
    int remain=number%100;
    if(remain>=5 && remain<=20)
       answer+=" "+s3;
    else 
    {
    remain=number%10;
        switch (remain)
        {
        case 0:
            answer+=" "+s3;
            break;
        case 1:
            answer+=" "+s1;
            break;
        case 2:
            answer+=" "+s2;
            break;
        case 3:
            answer+=" "+s2;
            break;
        case 4:
            answer+=" "+s2;
            break;
        case 5:
            answer+=" "+s3;
            break;
        case 6:
            answer+=" "+s3;
            break;
        case 7:
            answer+=" "+s3;
            break;
        case 8:
            answer+=" "+s3;
            break;
        case 9:
            answer+=" "+s3;
            break;
        default:
            break;
        }
    
    }


    return answer;
}


string currency_to_string (int integer,string is1,string is2,string is3, int decimal,string ds1,string ds2,string ds3)
{

    string answer=object_to_string(integer,is1,is2,is3)+", "+object_to_string(decimal,ds1,ds2,ds3);
    return answer;



}