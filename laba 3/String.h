#pragma once
#include<iostream>
#include<cstring>
#include<fstream>
#pragma warning(disable:4996)
using namespace std;

class String
{
private:
	char *str;
public:
	String(const char *s="") 
	{
		str = new char[strlen(s)+1];
		strcpy(str, s);
	}
	String(String&s1) 
	{
		cpy(*this, s1);
	}
	void vvod();
	friend void cpy(String&, const String&);
	friend void cat(String&, const String&);
	String& operator =(const String&);
	friend String operator+(const String&, const String&);
	String& operator+=(const String&);
	friend istream& operator >>(istream &stream, String& str);
	friend ostream& operator <<(ostream &stream, String& str);
	friend bool operator > (const String&, const String&);
	friend bool operator < (const String&, const String&);
	friend bool operator >= (const String&, const String&);
	friend bool operator<=(const String&, const String&);
	~String()
	{
		delete[]str;
	}
};

