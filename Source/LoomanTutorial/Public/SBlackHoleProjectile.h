// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SProjectile.h"
#include "SBlackHoleProjectile.generated.h"

class URadialForceComponent;

UCLASS()
class LOOMANTUTORIAL_API ASBlackHoleProjectile : public ASProjectile
{
	GENERATED_BODY()

public:

	ASBlackHoleProjectile();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	URadialForceComponent* ForceComp;

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;
};
