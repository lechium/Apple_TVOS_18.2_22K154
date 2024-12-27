//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface CPLExitSharedLibrarySupervisor : NSObject
{
    NSMutableDictionary *_supervisorInfo;	// 8 = 0x8
    NSString *_scopeIdentifier;	// 16 = 0x10
    long long _exitState;	// 24 = 0x18
    NSDate *_exitStartDate;	// 32 = 0x20
    NSDate *_lastForcedExitDate;	// 40 = 0x28
    NSDate *_nextForcedExitDate;	// 48 = 0x30
}

+ (id)descriptionForExitState:(long long)arg1;	// IMP=0x004000000002ab8c
- (void).cxx_destruct;	// IMP=0x002000000002ad2f
@property(readonly, nonatomic) NSDate *nextForcedExitDate; // @synthesize nextForcedExitDate=_nextForcedExitDate;
@property(readonly, nonatomic) NSDate *lastForcedExitDate; // @synthesize lastForcedExitDate=_lastForcedExitDate;
@property(readonly, nonatomic) NSDate *exitStartDate; // @synthesize exitStartDate=_exitStartDate;
@property(nonatomic) long long exitState; // @synthesize exitState=_exitState;
@property(readonly, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property(readonly, nonatomic) NSString *status;
- (void)ping;	// IMP=0x001000000002aaa9
- (void)noteServerHasChanges;	// IMP=0x001000000002a983
- (void)updateLastForcedExitDate;	// IMP=0x001000000002a8af
@property(readonly, nonatomic) _Bool shouldRunForceProcessingStagedScopesTaskNowMovingToForeground;
@property(readonly, nonatomic) _Bool shouldRunForceProcessingStagedScopesTaskNow;
@property(readonly, nonatomic) _Bool shouldScheduleForceProcessingStagedScopesTask;
@property(readonly, nonatomic) NSDictionary *supervisorInfo;
- (id)initWithScopeIdentifier:(id)arg1 exitState:(long long)arg2 supervisorInfo:(id)arg3;	// IMP=0x001000000002a289

@end

