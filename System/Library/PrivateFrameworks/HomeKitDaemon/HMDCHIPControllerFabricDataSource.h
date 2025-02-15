//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPControllerFabricDataSource : HMFObject
{
    HMDHome *_home;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000ec3b50
- (void).cxx_destruct;	// IMP=0x0000000000ec3b3f
@property __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x0000000000ec3a36
- (_Bool)removeValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ec392f
- (_Bool)setValue:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ec380b
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000ec3711
- (id)keyValueStore;	// IMP=0x0000000000ec362e
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000ec35b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

