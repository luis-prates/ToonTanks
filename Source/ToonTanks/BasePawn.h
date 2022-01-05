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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent *CapsuleComp = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent *BaseMesh = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent *TurretMesh = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Super Duper Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent *ProjectileSpawnPoint = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
