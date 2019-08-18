using namespace System;
#pragma once
ref class Person
{
public:
	Person();
	String^ getFirstName();
	void setFirstName(String^ value);

private:
	String^ firstName;

};

