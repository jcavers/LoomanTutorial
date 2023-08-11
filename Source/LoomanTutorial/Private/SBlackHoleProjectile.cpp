// Fill out your copyright notice in the Description page of Project Settings.


#include "SBlackHoleProjectile.h"

#include "PhysicsEngine/RadialForceComponent.h"

ASBlackHoleProjectile::ASBlackHoleProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ForceComp = CreateDefaultSubobject<URadialForceComponent>("ForceComp");
	ForceComp->SetupAttachment(RootComponent);
	
}

void ASBlackHoleProjectile::BeginPlay()
{
	Super::BeginPlay();
}

void ASBlackHoleProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}