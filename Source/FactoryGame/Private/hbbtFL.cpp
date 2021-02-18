// ILikeBanas


#include "hbbtFL.h"

#include "GameFramework/Actor.h"


int UhbbtFL::Inc(int In)
{
	
	In = In + 1 ;
	return In;
}


int UhbbtFL::Dec(int In)
{
	In = In - 1;
	return In;
}

float UhbbtFL::CmToM(const float cm)
{
	return cm / 100;
}


float UhbbtFL::distaceUI(const float cm)
{
	float Out = 0.00;

	
	if (cm >= 100.00)
	{
		Out = cm / 100;
	}
	if (cm >= 1000)
	{
		Out = cm / 1000;
	}

	return Out;
}



void UhbbtFL::getConnectedActors(const AActor* Building, AActor*& RemoteLink, AActor*& InfoPanel)
{
}
