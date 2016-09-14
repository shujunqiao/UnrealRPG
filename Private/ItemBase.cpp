// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#include "UnrealRPGPrivatePCH.h"
#include "ItemBase.h"

int32 FItemBase::RemainAmount()
{
	return maxAmount - amount;
}

bool FItemBase::IsBind()
{
	return false;
}

bool FItemBase::IsValid()
{
	return id > 0;
}

FItemBase FItemBase::None;

