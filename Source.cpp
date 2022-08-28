#include <iostream>
#include <stdlib.h>


std::string eightball(int);


int main()
{
	//to hold random number
	int num;

	//reset time
	srand(time(NULL));

	//generate number between 1 and 5
	num = rand() % 6 + 1;

	//display answer
	std::cout << eightball(num);



}


//function for 8 ball
std::string eightball(int num)
{
	switch (num)
	{
	case 1:
		return "you are lucky.";
		break;
	case 2:
		return "you are cool";
		break;
	case 3:
		return "you are skinny";
		break;
	case 4:
		return "You are strong";
		break;
	case 5:
		return "You are tall";
		break;
	}










}


