// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();
	void HandleDestruction();

protected:
	void RotateTurret(FVector LookAtTarget);
	void Fire();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent *CapsuleComp = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent *BaseMesh = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent *TurretMesh = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent *ProjectileSpawnPoint = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
	TSubclassOf<class AProjectile> ProjectileClass;
};
