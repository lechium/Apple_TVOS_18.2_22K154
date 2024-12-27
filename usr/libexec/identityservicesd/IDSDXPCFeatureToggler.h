//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCFeatureToggler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016ec29
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)updateFeatureToggleStateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e9bc
- (void)retrieveFeatureToggleStateForOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000016e802
- (id)_accountToUse;	// IMP=0x001000000016e4e0
- (id)initWithService:(id)arg1 queue:(id)arg2 connection:(id)arg3;	// IMP=0x001000000016e153

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

