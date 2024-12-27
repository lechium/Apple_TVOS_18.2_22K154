//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PXAssetCollectionActionPerformer.h"

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface PXMovePersonActionPerformer : PXAssetCollectionActionPerformer
{
    MISSING_TYPE *sourcePeople;	// 8 = 0x8
    MISSING_TYPE *destinationManualOrder;	// 16 = 0x10
    MISSING_TYPE *destinationType;	// 24 = 0x18
}

+ (id)systemImageNameForPerson:(id)arg1;	// IMP=0x001000000012e7d0
+ (id)localizedTitleForPerson:(id)arg1;	// IMP=0x001000000012e7c0
+ (_Bool)canPerformOn:(id)arg1;	// IMP=0x001000000012e7b0
- (void).cxx_destruct;	// IMP=0x000000000012eee0
- (id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3;	// IMP=0x000000000012eda0
- (void)performBackgroundTask;	// IMP=0x000000000012ed70
@property(nonatomic) long long destinationType; // @synthesize destinationType;
@property(nonatomic) long long destinationManualOrder; // @synthesize destinationManualOrder;
@property(nonatomic, copy) NSArray *sourcePeople;

@end

