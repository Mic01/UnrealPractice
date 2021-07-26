// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatToPercent.h"
#include <math.h>

FText UFloatToPercent::FloatToPercent(float Value) {
	return FText::FromString(FString::FromInt(trunc(Value * 100))+"%");
}