// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFLtest.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API UBFLtest : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable)
	static float MeineTestFunc(const float in);
};
