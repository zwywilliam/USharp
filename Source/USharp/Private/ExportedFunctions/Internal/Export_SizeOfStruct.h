CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FSoftObjectPtr()
{
	return sizeof(FSoftObjectPtr);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FWeakObjectPtr()
{
	return sizeof(FWeakObjectPtr);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FLazyObjectPtr()
{
	return sizeof(FLazyObjectPtr);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FSharedPtr()
{
	ensure(sizeof(TSharedPtr<int32, ESPMode::ThreadSafe>) == sizeof(TSharedRef<int32, ESPMode::ThreadSafe>));
	return sizeof(TSharedPtr<int32, ESPMode::ThreadSafe>);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FSoftObjectPath()
{
	return sizeof(FSoftObjectPath);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FUniqueObjectGuid()
{
	return sizeof(FUniqueObjectGuid);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FAssetData()
{
	return sizeof(FAssetData);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FMinimalName()
{
	return sizeof(FMinimalName);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FName()
{
	return sizeof(FName);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptName()
{
	return sizeof(FScriptName);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptDelegate()
{
	return sizeof(FScriptDelegate);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FMulticastScriptDelegate()
{
	return sizeof(FMulticastScriptDelegate);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptArray()
{
	return sizeof(FScriptArray);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptMap()
{
	return sizeof(FScriptMap);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptMapLayout()
{
	return sizeof(FScriptMapLayout);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptSetLayout()
{
	return sizeof(FScriptSetLayout);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptSparseArrayLayout()
{
	return sizeof(FScriptSparseArrayLayout);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FDefaultBitArrayAllocator()
{
	return sizeof(FDefaultBitArrayAllocator::ForElementType<uint32>);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptBitArray()
{
	return sizeof(FScriptBitArray);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptSparseArray()
{
	return sizeof(FScriptSparseArray);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FBitReference()
{
	return sizeof(FBitReference);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FHashAllocator()
{
	return sizeof(FDefaultSetAllocator::HashAllocator::ForElementType<FSetElementId>);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FSetElementId()
{
	return sizeof(FSetElementId);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FScriptSet()
{
	return sizeof(FScriptSet);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FImplementedInterfaceInterop()
{
	return sizeof(FImplementedInterfaceInterop);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FNativeFunctionLookup()
{
	return sizeof(FNativeFunctionLookup);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FDelegateHandle()
{
	return sizeof(FDelegateHandle);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FFrame()
{
	return sizeof(FFrame);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_TStatId()
{
	return sizeof(TStatId);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FActorSpawnParameters()
{
	return sizeof(FActorSpawnParameters);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FKey()
{
	return sizeof(FKey);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FLifetimeProperty()
{
	return sizeof(FLifetimeProperty);
}

// FTickFunction structs

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FActorComponentTickFunction()
{
	return sizeof(FActorComponentTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FActorTickFunction()
{
	return sizeof(FActorTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FCharacterMovementComponentPostPhysicsTickFunction()
{
	return sizeof(FCharacterMovementComponentPostPhysicsTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FEndPhysicsTickFunction()
{
	return sizeof(FEndPhysicsTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FPrimitiveComponentPostPhysicsTickFunction()
{
	return sizeof(FPrimitiveComponentPostPhysicsTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FSkeletalMeshComponentClothTickFunction()
{
	return sizeof(FSkeletalMeshComponentClothTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FSkeletalMeshComponentEndPhysicsTickFunction()
{
	return sizeof(FSkeletalMeshComponentEndPhysicsTickFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FStartAsyncSimulationFunction()
{
	return sizeof(FStartAsyncSimulationFunction);
}

CSEXPORT int32 CSCONV Export_SizeOfStruct_SizeOf_FStartPhysicsTickFunction()
{
	return sizeof(FStartPhysicsTickFunction);
}

CSEXPORT void CSCONV Export_SizeOfStruct(RegisterFunc registerFunc)
{
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FSoftObjectPtr);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FWeakObjectPtr);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FLazyObjectPtr);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FSharedPtr);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FSoftObjectPath);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FUniqueObjectGuid);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FAssetData);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FName);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FMinimalName);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptName);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptDelegate);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FMulticastScriptDelegate);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptArray);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptMap);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptMapLayout);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptSetLayout);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptSparseArrayLayout);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FDefaultBitArrayAllocator);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptBitArray);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptSparseArray);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FBitReference);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FHashAllocator);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FSetElementId);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FScriptSet);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FImplementedInterfaceInterop);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FNativeFunctionLookup);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FDelegateHandle);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FFrame);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_TStatId);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FActorSpawnParameters);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FKey);
	
	// FTickFunction structs
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FActorComponentTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FActorTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FCharacterMovementComponentPostPhysicsTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FEndPhysicsTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FPrimitiveComponentPostPhysicsTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FSkeletalMeshComponentClothTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FSkeletalMeshComponentEndPhysicsTickFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FStartAsyncSimulationFunction);
	REGISTER_FUNC(Export_SizeOfStruct_SizeOf_FStartPhysicsTickFunction);
}