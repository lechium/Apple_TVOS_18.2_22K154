//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TPSFullTipUsageEventManager : NSObject
{
    MISSING_TYPE *tipIDToContextualInfoMap;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *initialized;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004d4a0
- (id)init;	// IMP=0x000000000004d450
- (void)removeUsageEventCache;	// IMP=0x000000000004d1c0
- (id)contextualInfoMap;	// IMP=0x000000000004ce00
- (id)contextualInfoForIdentifier:(id)arg1;	// IMP=0x000000000004cca0
- (void)updateContextualInfoForIdentifiers:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3;	// IMP=0x000000000004caa0

@end

