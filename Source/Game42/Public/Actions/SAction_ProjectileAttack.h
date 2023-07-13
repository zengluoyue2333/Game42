// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/SAction.h"
#include "SAction_ProjectileAttack.generated.h"

/**
 * 
 */
UCLASS()
class GAME42_API USAction_ProjectileAttack : public USAction
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<AActor> ProjectileBaseClass; // ������

	UPROPERTY(EditAnywhere, Category = "Attack")
	FName HandSocketName; // ����������������

	FTimerHandle TimerHandle_PrimaryAttack; // ��ʱ

	// ʵʩ����
	UFUNCTION()
	void AttackDelay_Elapsed(ACharacter* InstigatorCharacter);

public:

	// ��ʼԶ�̹����ж�
	virtual void StartAction_Implementation(AActor* InstigatorActor) override;

	USAction_ProjectileAttack();

};