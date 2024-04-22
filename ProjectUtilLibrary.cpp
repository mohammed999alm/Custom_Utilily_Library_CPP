#include <iostream>
#include "Util.h"
using namespace std;

int main() 
{
	
	Util::sRand();

	cout << Util::getRandomNumber(1, 10) << endl;

	cout << Util::getRandomCharacter(Util::Digits)<< endl;
	cout << Util::getRandomCharacter(Util::CapitalLetters) << endl;
	cout << Util::getRandomCharacter(Util::SmallLetters) << endl;
	cout << Util::getRandomCharacter(Util::SpecialCharacter) << endl;
	cout << Util::getRandomCharacter(Util::MixChar) << endl;

	cout << Util::generateWord(Util::MixChar, 8) << endl;

	cout << Util::generateKey(Util::MixChar) << endl;
	cout << Util::generateKey(Util::Digits) << endl;
	cout << Util::generateKey(Util::SmallLetters) << endl;
	cout << Util::generateKey(Util::CapitalLetters) << endl;
	cout << Util::generateKey(Util::SpecialCharacter) << endl;

	Util::generateKeys(10,Util::MixChar);


	cout << endl;

	int number1 = 10, number2 = 20;

	Util::swap(number1, number2);

	cout << number1 << " " << number2 << endl;

	double num1 = 25.6, num2 = 30.5;

	Util::swap(num1, num2);

	cout << num1 << " " << num2 << endl;

	bool flag1 = true, flag2 = 0;

	Util::swap(flag1, flag2);

	cout << flag1 << " " << flag2 << endl;

	string text1 = "Mohammed", text2 = "Ahmed";

	Util::swap(text1, text2);

	cout << text1 << " " << text2 << endl;

	clsDate date1, date2(9, 11, 1999);

	Util::swap(date1, date2);

	cout << date1.dateToString() << "  " << date2.dateToString() << endl;



	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	Util::shuffleArray(arr, 10);

	cout << "\n\nInteger Array After Shuffle : \n";

	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	string arrString[10] = { "Mohammed", "Ali", "Mahmood", "Ahmed", "Aziz", "Mabrouk", "Jamil", "Jamal", "Lamia", "Lamis"};

	Util::shuffleArray(arrString, 10);

	cout << "\n\nString Array After Shuffle : \n";
	for (int i = 0; i < 10; i++)
	{
		cout << arrString[i] << " ";
	}

	cout << endl << endl;

	int arrRandom[20];

	Util::fillArrayWithRandomNumbers(arrRandom, 20, 1, 100);

	cout << "\n\nArray After Fill With Random Numbers : \n";

	for (int i = 0; i < 20; i++)
	{
		cout << arrRandom[i] << " ";
	}

	cout << endl;

	cout << endl << endl;

	string arrRandomWords[6];

	Util::fillArrayWithRandomWords(arrRandomWords, 6, Util::MixChar, 8);

	cout << "\n\nArray After Fill With Random Words : \n";

	for (int i = 0; i < 6; i++)
	{
		cout << arrRandomWords[i] << endl;
	}

	cout << endl;

	cout << endl;

	cout << endl << endl;

	string arrRandomKeys[10];

	Util::fillArrayWithRandomKeys(arrRandomKeys, 10, Util::MixChar);

	cout << "\n\nArray After Fill With Random Keys : \n";

	for (int i = 0; i < 10; i++)
	{
		cout << arrRandomKeys[i] << endl;
	}

	cout << endl;

	cout << "Mohammed " << Util::tabs(5) << "Almislaty" << endl;

	string encryptionText, decryptionText;

	string text = "Mohammed Almislaty";

	encryptionText = Util::encryptText(text, 5);

	decryptionText = Util::decryptText(encryptionText, 5);

	cout << "\n\nNoraml Text       : " << text << endl;
	cout << "\nAfter Encyption   : " << encryptionText << endl;

	cout << "\nBefore Decryption : " << decryptionText << endl;

	/*cout << char(90) << endl;
	cout << char(122) << endl;
	cout << char(57) << endl;
	cout << char(47) << endl;

	cout << char(65) << endl;
	cout << char(97) << endl;
	cout << char(48) << endl;
	cout << char(32) << endl;*/


	system("pause > 0");

	return 0;
}