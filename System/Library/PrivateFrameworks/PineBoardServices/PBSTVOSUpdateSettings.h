//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PBSTVOSUpdateSettings : NSObject
{
    MISSING_TYPE *minutesInOneYear;	// 8 = 0x8
}

- (id)init;	// IMP=0x000000000007a080
- (void)setShouldForceAllowAutoApply:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000079ef0
@property(nonatomic, readonly) _Bool shouldForceAllowAutoApply;
- (void)setAllowSameVersionUpdates:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000079c40
@property(nonatomic, readonly) _Bool allowSameVersionUpdates;
- (void)setPostponedRecheckDelay:(double)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x00000000000799c0
@property(nonatomic, readonly) double postponedRecheckDelay;
- (void)setPeriodicCheckInterval:(double)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000079740
@property(nonatomic, readonly) double periodicCheckInterval;
- (void)setShouldFakeUpdateSuccess:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000079590
@property(nonatomic, readonly) _Bool shouldFakeUpdateSuccess;
- (void)setShouldSkipUpdate:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000079340
@property(nonatomic, readonly) _Bool shouldSkipUpdate;
- (void)setAutoCheckForUpdate:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000079190
@property(nonatomic, readonly) _Bool autoCheckForUpdate;
- (void)setAutoInstallUpdate:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0000000000078fe0
@property(nonatomic, readonly) NSString *lastUpdatedFromOSBuildVersion;
@property(nonatomic, readonly) NSString *lastUpdatedFromOSVersion;
@property(nonatomic, readonly) _Bool autoInstallUpdate;
@property(nonatomic, readonly) NSDate *lastCheckDate;

@end

