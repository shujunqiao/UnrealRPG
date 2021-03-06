// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "Role.h"
#include "InvHUDInterface.generated.h"

/** Class needed to support InterfaceCast<IRoleInterface>(Object) */
UINTERFACE(Blueprintable)
class UInvHUDInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

/**  */
class IInvHUDInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InvHUD")
	void	UICloseEquipment();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InvHUD")
	void UICloseInv();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InvHUD")
	void UISetIsMouseOverHUD(bool IsMouseOver);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InvHUD")
	FRole UIGetRole();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InvHUD")
	void UIClearHotbarItem(int32 SlotIndex);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "InvHUD")
	void UIMoveHotbarItem(int32 FromSlot, int32 ToSlot, int32 WidgetType);
};


