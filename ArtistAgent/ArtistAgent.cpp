// ArtistAgent.cpp : main project file.

#include "stdafx.h"
#include "Person.h"
#include "Artist.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");
    
	Artist artist;

	artist.setFirstName(L"Mickelangelo");

	Console::WriteLine(artist.getFirstName());

	Console::ReadKey();
	return 0;
}
