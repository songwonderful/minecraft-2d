#pragma once
#include "Organism.h"


class Arrow :
	public Organism
{
public:
	Arrow(int direction_, Point realGrid);
	~Arrow();

	int direction;
};

