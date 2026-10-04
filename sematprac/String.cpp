#include "String.h"
#include<cstring>

String::String() {
	length = 0;
	data = new char[1];
	data[0] = '\0';
}

String::String(const char* str) {
	if (str == nullptr) {
		length = 0;
		data = new char[1];
		data[0] = '\0';
	}
}