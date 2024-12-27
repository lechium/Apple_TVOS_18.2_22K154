//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, PKPushRegistry;

@interface CKPKPushRegistry : NSObject
{
    NSHashTable *_delegates;	// 8 = 0x8
    PKPushRegistry *_pushRegistry;	// 16 = 0x10
}

+ (id)sharedPushRegistry;	// IMP=0x0010000000193534
- (void).cxx_destruct;	// IMP=0x0000000000193a85
@property(readonly, nonatomic) PKPushRegistry *pushRegistry; // @synthesize pushRegistry=_pushRegistry;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001936d5
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;	// IMP=0x00000000001936cf
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000193634
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000193599
- (id)initInternal;	// IMP=0x000000000019341d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

