#include "stdafx.h"
#include "Person.h"
#include "Artist.h"

#pragma once

ref class ArtistMaker
{
public:
	ArtistMaker();
	Artist^ Make(Person^ person);
};

