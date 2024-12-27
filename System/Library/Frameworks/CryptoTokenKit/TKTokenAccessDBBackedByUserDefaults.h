//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface TKTokenAccessDBBackedByUserDefaults : NSObject
{
    NSUserDefaults *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000074e3
- (id)_keyRefForRequest:(id)arg1;	// IMP=0x00000000000073f1
- (void)clearAllAccessRecords;	// IMP=0x0000000000007289
- (void)storeAccess:(long long)arg1 forRequest:(id)arg2;	// IMP=0x0000000000007220
- (long long)fetchAccessForRequest:(id)arg1;	// IMP=0x0000000000007191
- (id)init;	// IMP=0x0000000000006d91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

