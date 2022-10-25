#include "stdio.h"
#include <bitset>
#include <iostream>
using namespace std;

int main(void)
{
	char cl;
	unsigned char ucl;
	short int i1;
	unsigned short int uil;
	int signed_intl;
	unsigned int us_intl;


	//More varables to declare

	//Data Type of char
	cout << "The minimum value of a char is" << CHAR_MIN << endl;
	cout << "The minimum value of a char is" << CHAR_MAX << endl;
	cout << "The storage size in byte(s) is" << sizeof(cl) << endl;

	cout << "Input a hexidecimal number in the data type of char, for example 8a" << endl;
	scanf_s("%x" , &cl);


	//bitset stores the number of bits i 8*size of (c1)
	bitset<8 * sizeof(cl)>charBits(cl);
	cout << "The converted binary value is " << charBits << endl;
	printf("The converted Decimal value is %i \n", cl);
	printf("----------------------------------\n");

	//Data typ of unsigned char
	cout << "The maximum value of a unsigned char is" << UCHAR_MAX << endl;
	cout << "The storeage size in byte(s) of an unsigned char is" << sizeof(ucl) << endl;
	cout << "Input hexidecimal number in the datat type of unsigned char for example 8a" << endl;
	scanf_s("%x", &ucl);

	//bitset stores the numbre of bits in 8*size of (ucl)
	bitset<8 * sizeof(ucl)>ucharBits(ucl);
	cout << "The convereted binary value is" << ucharBits << endl;
	cout << "The converted binary value is" << ucharBits << endl;
	printf("----------------------------------\n");

	//Data Type of short int
	cout << "The minimum value of a short in is" << SHRT_MIN << endl;
	cout << "The maximum value of a short int is" << SHRT_MAX << endl;
	cout << "The storeage size in byte(s) of a short int is" << sizeof(i1) << endl;

	cout << "Input a hexidecimal number in the data type of short int for example 8ff" << endl;
	scanf_s("%x", &i1);


	//Bitset stores i1
	
	bitset<8 * sizeof(i1)>i1Bits(i1);
	cout << ("The converted binary value is") << i1Bits << endl;
	printf("The converted Decimal value is %i \n", i1);
	printf("----------------------------------\n");


	// Data tpe of signed int 
	cout << "The maximum value of a int is" << INT_MIN << endl;
	cout << "The maximum value of a int is" << INT_MAX << endl;
	cout << "Input a hexidecimal number in the data type for int, for example 0xFF1111" << endl;
	scanf_s("%x", &signed_intl);

	//bitset stores signed_intl
	bitset<8 * sizeof(signed_intl)>signed_intBits(signed_intl);
	cout << ("The converted binary value is") << signed_intBits << endl;
	printf("The converted Decimal value is %i \n", signed_intl);
	printf("----------------------------------\n");

	// Data type of unsigned int
	cout << "The maximum value of a unsigned int is " << UINT_MAX << endl;
	cout << "The storeage size in byte(s0 of a unsigned int is" << sizeof (us_intl) << endl;
	cout << "Input a hexidecimal number in the data type of unsigned short int, for example 0xFF1111" << endl;
	scanf_s("%x", &us_intl);
	printf("----------------------------------\n");

	// Bitset stores the number of bits in 8*sizeof(us_intl)
	bitset<8 * sizeof(us_intl)>us_intBits(us_intl);
	cout << ("The converted binary value is") << us_intBits << endl;
	printf("The converted Decimal value is %i \n", us_intl);
	printf("----------------------------------\n");



	system("pause");

	exit(0);
	return 0;

}
