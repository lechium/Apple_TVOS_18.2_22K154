//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSStorageDatabase, NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AMSFraudReportDatabaseStateStorage : NSObject
{
    AMSStorageDatabase *_storageDatabase;	// 8 = 0x8
}

+ (id)new;	// IMP=0x00100000003d2fbf
- (void).cxx_destruct;	// IMP=0x00000000003d36d1
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000003d33cc
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000003d31c0
@property(readonly, nonatomic) NSArray *allKeys;
@property(retain, nonatomic) NSDate *lastCleanupDate;
- (id)init;	// IMP=0x00000000003d2e02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

