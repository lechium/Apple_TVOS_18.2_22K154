//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSApplicationDataStore, MISSING_TYPE, NSDate, NSString, PBSBadgeValue;

@interface _PBSAppState : NSObject
{
    FBSApplicationDataStore *_store;	// 8 = 0x8
    _Bool _isTVSettings;	// 16 = 0x10
    _Bool _badgeEnabled;	// 17 = 0x11
    _Bool _recentlyUpdated;	// 18 = 0x12
    NSString *_bundleIdentifier;	// 24 = 0x18
    PBSBadgeValue *_badgeValueWrapper;	// 32 = 0x20
    MISSING_TYPE *_badgeValue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000020612a
@property(nonatomic, getter=isRecentlyUpdated) _Bool recentlyUpdated; // @synthesize recentlyUpdated=_recentlyUpdated;
@property(nonatomic, getter=isBadgeEnabled) _Bool badgeEnabled; // @synthesize badgeEnabled=_badgeEnabled;
@property(copy, nonatomic) id badgeValue; // @synthesize badgeValue=_badgeValue;
@property(readonly, copy, nonatomic) PBSBadgeValue *badgeValueWrapper; // @synthesize badgeValueWrapper=_badgeValueWrapper;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)invalidate;	// IMP=0x00100000002060e3
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000205db4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *nextWakeDate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDate",?,&,N

@property(readonly) Class superclass;
@property(nonatomic) _Bool usesBackgroundNetwork;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N


@end

