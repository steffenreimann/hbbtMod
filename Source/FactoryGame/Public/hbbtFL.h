// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "hbbtFL.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYGAME_API UhbbtFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/** Increases an integer value by 1 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Increase", Category = "hbbt"))
	static int Inc(const int In);

	/** Decreases an integer value by 1 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Decrease", Category = "hbbt"))
	static int Dec(const int In);

	/** Get connected RemoteLink and InfoPanel*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getConnectedActors", Category = "hbbt"))
    static void getConnectedActors(const AActor* Building, AActor*& RemoteLink, AActor*& InfoPanel);
	
	/** Convert cm to m*/
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "cm To Meter", Category = "hbbt") )
	static float CmToM(const float cm);

	
	/** Convert to nice*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Convert mm to nice", Category = "hbbt"))
	static float distaceUI(const float cm);
};
