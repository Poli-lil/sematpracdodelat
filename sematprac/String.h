#pragma once
#include<iostream>

class String
{
private: char* data; int length;
public: 
	String(); 
	String(const char* str);
	String(const String& other);
	String(String&& other) noexcept;

	~String();

	String& operator=(const String& other);

	String& operator=(String&& other) noexcept;

	String operator+(const String& other) const;

	
	friend std::ostream& operator<<(std::ostream& out, const String& myStr);

	int getLength() const;
	const char* c_str() const;
};


