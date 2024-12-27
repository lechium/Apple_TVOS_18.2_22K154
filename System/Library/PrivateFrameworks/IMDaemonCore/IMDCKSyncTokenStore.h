//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDCKSyncTokenStore : NSObject
{
}

+ (void)persistToken:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000001f088
+ (id)tokenForKey:(id)arg1;	// IMP=0x001000000001eef3
+ (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x001000000001ebd9
- (void)persistToken:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001eb74
- (id)tokenForKey:(id)arg1;	// IMP=0x000000000001eb23
- (void)migrateKey:(id)arg1 fromDatabase:(id)arg2;	// IMP=0x000000000001eabe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

