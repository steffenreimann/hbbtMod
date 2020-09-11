// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCircuitConnectionComponent.h"

UFGCircuitConnectionComponent::UFGCircuitConnectionComponent() : Super() {
	this->mMaxNumConnectionLinks = 1;
	this->mCircuitID = -1;
}
void UFGCircuitConnectionComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void UFGCircuitConnectionComponent::OnComponentDestroyed(bool isDestroyingHierarchy){ }
void UFGCircuitConnectionComponent::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
int32 UFGCircuitConnectionComponent::GetNumConnections() const{ return int32(); }
void UFGCircuitConnectionComponent::GetConnections(TArray<  UFGCircuitConnectionComponent* >& out_connections) const{ }
void UFGCircuitConnectionComponent::AddConnection( AFGBuildableWire* wire){ }
void UFGCircuitConnectionComponent::RemoveConnection( AFGBuildableWire* wire){ }
void UFGCircuitConnectionComponent::AddHiddenConnection( UFGCircuitConnectionComponent* other){ }
void UFGCircuitConnectionComponent::RemoveHiddenConnection( UFGCircuitConnectionComponent* other){ }
void UFGCircuitConnectionComponent::ClearHiddenConnections(){ }
void UFGCircuitConnectionComponent::SetCircuitID(int32 circuitID){ }
void UFGCircuitConnectionComponent::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
FString UFGCircuitConnectionComponent::GetDebugName() const{ return FString(); }
void UFGCircuitConnectionComponent::OnCircuitIDChanged(){ }
void UFGCircuitConnectionComponent::OnRep_CircuitIDChanged(){ }