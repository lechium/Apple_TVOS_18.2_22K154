//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMSessionManagerStatus.h>

@class NSString;

@interface SMSessionManagerStatus (RTCoreDataTransformable)
+ (id)createWithSessionManagerStatusMO:(id)arg1;	// IMP=0x00100000000ab5c4
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000000ab446
- (void)updateManagedObject:(id)arg1;	// IMP=0x00100000000ab948
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000000ab8ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

