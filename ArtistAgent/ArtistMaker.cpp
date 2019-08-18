#include "stdafx.h"
#include "ArtistMaker.h"
#include "Person.h"
#include "Artist.h"
#include "stdafx.h"
#include <iostream>
#include <strstream>
#include <string>
using namespace std;

ArtistMaker::ArtistMaker()
{
}

Artist^ ArtistMaker::Make(Person^ person)
{
	strstream xstr;
	for (int i = 0; i < 10; i++)
	{
		xstr << "Demo " << i << endl;
	}
	cout << xstr.str();
	string str;
	str.assign(xstr.str(), xstr.pcount());
	cout << str.c_str();

	return gcnew Artist();
}
