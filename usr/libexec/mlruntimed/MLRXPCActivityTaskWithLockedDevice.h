//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MLRTaskScheduler, NSString;
@protocol OS_xpc_object;

@interface MLRXPCActivityTaskWithLockedDevice : NSObject
{
    _Bool _activityDeferred;	// 8 = 0x8
    _Bool _dynamicallyRegistered;	// 9 = 0x9
    NSObject<OS_xpc_object> *_activity;	// 16 = 0x10
    struct _xpc_activity_eligibility_changed_handler_s *_eligibilityHandler;	// 24 = 0x18
    MISSING_TYPE *_taskScheduler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000002fcc
@property(readonly, nonatomic) MLRTaskScheduler *taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(nonatomic) struct _xpc_activity_eligibility_changed_handler_s *eligibilityHandler; // @synthesize eligibilityHandler=_eligibilityHandler;
@property(readonly, nonatomic) _Bool dynamicallyRegistered; // @synthesize dynamicallyRegistered=_dynamicallyRegistered;
@property(nonatomic) _Bool activityDeferred; // @synthesize activityDeferred=_activityDeferred;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
- (void)stop;	// IMP=0x0010000000002f62
- (void)startTaskWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002dc7
- (id)createTaskScheduler;	// IMP=0x0010000000002d97
- (id)criteria;	// IMP=0x0010000000002c42
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool bypassDiagnosticsUsage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldRegister;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) Class superclass;

@end

