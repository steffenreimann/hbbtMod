// ILikeBanas

#pragma once
#include "GenericPlatform/GenericPlatform.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibraryTest.generated.h"


/**
 * 
 */
UCLASS()
class FACTORYGAME_API UMyBlueprintFunctionLibraryTest : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/** This is my Test Function */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = 'Das ist eine Test function', Keywords = 'test function steffen'))
	static void TestingFunction(const int a, const int b, int &out);
};
