// ArtistAgent.cpp : main project file.

#include "stdafx.h"
#include "Person.h"
#include "Artist.h"
#include "ArtistMaker.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
    
	Artist artist;

	artist.setFirstName(L"Mickelangelo");

	Console::WriteLine(artist.getFirstName());

	Person^ person = gcnew Person();;

	person->setFirstName(L"Micke");

	ArtistMaker^ maker = gcnew ArtistMaker();
	maker->Make(person);

	Console::ReadKey();
	return 0;
}
