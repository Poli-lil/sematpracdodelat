#include <iostream>
#include"String.h"
using namespace std;
String createString() {
	String temp("Hello");
	return temp;
}

int main()
{
	String str1("Hello");
	String str2("World");
	cout << "str1" << str1 << '\n';
	cout << "str2" << str2 << '\n';

	String str3 = str1 + str2;
	cout << "str3: " << str3 << '\n';


	String str4 = createString();
	cout << "str4: " << str4 << '\n';

	String str5 = String("string");
	cout << "str5: " << str5 << '\n';

	String str6("Old");
	str6 = String("New");

	cout << "st6: " << str6 << '\n';

	cout << "Length str1" << str1.getLength() << '\n';
	cout << "Length st3" << str3.getLength() << '\n';
}