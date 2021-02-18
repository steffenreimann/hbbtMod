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

void UhbbtFL::getConnectedActors(const AActor* Building, AActor*& RemoteLink, AActor*& InfoPanel)
{
}
