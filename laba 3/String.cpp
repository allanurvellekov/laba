#include "String.h"

void String::vvod()
{
	char s[80];
	cin.getline(s, 80, '\n');
	cpy(*this, s);
}
void cpy(String& s1, const String& s2)
{
	int size = strlen(s2.str);
	s1.str = new char[++size];
	int i = 0;
	while (s2.str[i] != '\0')
	{
		s1.str[i] = s2.str[i];
		i++;
	}
	s1.str[--size] = '\0';
}
void cat(String& s1, const String& s2)
{
	String temp;
	int size = strlen(s1.str) + strlen(s2.str);

	temp.str = new char[++size];

	int i = 0;
	int j = 0;
	while (s1.str[i] != '\0')
	{
		temp.str[i] = s1.str[i];
		i++;
	}

	delete[]s1.str;
	s1.str = new char[size];

	while (s2.str[j] != '\0')
	{
		temp.str[i] = s2.str[j];
		i++;
		j++;
	}
	temp.str[--size] = '\0';
	for (int k = 0; k < size; k++)
		s1.str[k] = temp.str[k];
	s1.str[size] = '\0';
}
String& String::operator=(const String& s1)
{
	if (this != &s1)
	{
		cpy(*this, s1);
	}
	return *this;
}
String& String::operator+=(const String& obj)
{
	cat(*this, obj.str);
	return *this;
}
String operator+(const String& s1, const String& s2)
{
	String temp;
	cpy(temp, s1);
	cat(temp, s2);
	
	return temp;
}


bool operator >(const String& s1, const String& s2)
{
	if (strcmp(s1.str, s2.str) > 0)
		return true;
	else
		return false;
}
bool operator <(const String& s1, const String& s2)
{
	if (strcmp(s1.str, s2.str) < 0)
		return true;
	else
		return false;
}
bool operator>=(const String& s1, const String& s2)
{
	if (strcmp(s1.str, s2.str) >= 0)
		return true;
	else
		return false;
}
bool operator<=(const String& s1, const String& s2)
{
	if (strcmp(s1.str, s2.str) <= 0)
		return true;
	else
		return false;
}
istream& operator>>(istream& stream, String& s1)
{
	s1.vvod();
	return stream;
}
ostream& operator<<(ostream& stream, String& s1)
{
	stream << s1.str;
	return stream;
}