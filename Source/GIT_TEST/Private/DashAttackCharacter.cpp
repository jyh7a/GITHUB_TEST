// Fill out your copyright notice in the Description page of Project Settings.


#include "DashAttackCharacter.h"

// Sets default values
ADashAttackCharacter::ADashAttackCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADashAttackCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADashAttackCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADashAttackCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADashAttackCharacter::DashAttack()
{
	// 1. 현재 플레이어 위치 계산 
	// 2. setactorlocation 함수를 사용해서 X축으로 100만큼 순간이동 시킴
	// 3. ~~~~
}

