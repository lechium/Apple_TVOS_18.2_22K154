//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteHomeMessagingManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_homeUUIDToHandlerMap;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000c30e05
- (void).cxx_destruct;	// IMP=0x0000000000c30df5
@property(readonly, nonatomic) NSMapTable *homeUUIDToHandlerMap; // @synthesize homeUUIDToHandlerMap=_homeUUIDToHandlerMap;
- (_Bool)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c30a44
- (void)registerHandler:(id)arg1;	// IMP=0x0000000000c3088a
- (id)init;	// IMP=0x0000000000c3081d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

