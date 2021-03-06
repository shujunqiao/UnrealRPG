// Copyright © 2013 - 2016 Truing Co.,Ltd All Rights Reserved.

#pragma once

#include "ItemBase.h"
#include "Inventory.generated.h"

USTRUCT(BlueprintType)
struct UNREALRPG_API FInventory
{
	GENERATED_USTRUCT_BODY()

	TArray<TSharedPtr<FItemBase>> Items;
	FInventory()
	{
	}

	void OnInit(int32 InItemCount);

	//UFUNCTION(BlueprintCallable, Category = "InventorySystem")
	TSharedPtr<FItemBase> GetItemAt(int32 id);

	TSharedPtr<FItemBase> SwapItemAt(int32 id, TSharedPtr<FItemBase> item);

	int32 GetMaxCount();
};

/*
* The container of items for a player
*/

// UCLASS()
//class UNREALRPG_API UInventory : public UObject
// {
// 	GENERATED_BODY()
// public:
// 	TArray<TSharedPtr<FItemBase>> Items;
// 
// 	UInventory()
// 	{
// 		//Items.SetNumZeroed(5*10);
// 	}
// 
// 	void OnInit(int32 InItemCount);
// 
// 	//UFUNCTION(BlueprintCallable, Category = "InventorySystem")
// 	TSharedPtr<FItemBase> GetItemAt(int32 id);
// 
// 	TSharedPtr<FItemBase> SwapItemAt(int32 id, TSharedPtr<FItemBase> item);
// 
// 	int32 GetMaxCount();
// };