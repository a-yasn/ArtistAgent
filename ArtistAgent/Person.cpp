#include "stdafx.h"
#include "Person.h"


Person::Person()
{
}

String ^ Person::getFirstName()
{
	return firstName;
}

void Person::setFirstName(String ^ value)
{
	firstName = value;
}
