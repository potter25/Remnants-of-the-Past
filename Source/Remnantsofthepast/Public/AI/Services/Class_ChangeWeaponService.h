// remnants of the past.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "Class_ChangeWeaponService.generated.h"


UCLASS()
class REMNANTSOFTHEPAST_API UClass_ChangeWeaponService : public UBTService
{
	GENERATED_BODY()

 public:
     UClass_ChangeWeaponService();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (ClampMin = "0.0", ClampMax = "1.0"))
        float Probability = 0.5f;

    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
};
