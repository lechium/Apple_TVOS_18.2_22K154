//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMConversation.h>

@class NSString;

@interface SMConversation (RTCoreDataTransformable)
+ (id)createWithSMConversationMO:(id)arg1;	// IMP=0x0010000000430c83
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x0010000000430b05
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000004310e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

