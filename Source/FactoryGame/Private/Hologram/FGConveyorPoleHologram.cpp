// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGConveyorPoleHologram.h"
#include "FGBuildableRoad.h"
#include "FGBuildableRailroadTrack.h"
#include "FGBuildableFoundation.h"

AFGConveyorPoleHologram::AFGConveyorPoleHologram() : Super() {
	this->mMaxPlacementFloorAngle = 35;
	this->mValidHitClasses.Add(AFGBuildableFoundation::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRailroadTrack::StaticClass()); this->mValidHitClasses.Add(AFGBuildableRoad::StaticClass());
	this->bHidden = true;
	this->bReplicates = true;
}
void AFGConveyorPoleHologram::BeginPlay(){ }
void AFGConveyorPoleHologram::SnapToConnection(UFGFactoryConnectionComponent* connection,  AFGConveyorBeltHologram* parentConveyor){ }
void AFGConveyorPoleHologram::SetSnappBuilding( AFGBuildable* snappedBuilding){ }
