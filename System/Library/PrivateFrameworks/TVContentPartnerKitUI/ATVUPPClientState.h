//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVUPPClientState : NSObject
{
    NSMutableDictionary *_pendingChanges;	// 8 = 0x8
    NSMutableDictionary *_uppKeyToRecordMap;	// 16 = 0x10
    NSString *_lastSyncedDomainVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009cddb
@property(copy) NSString *lastSyncedDomainVersion; // @synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion;
@property(readonly, nonatomic) NSMutableDictionary *uppKeyToRecordMap; // @synthesize uppKeyToRecordMap=_uppKeyToRecordMap;
@property(readonly, nonatomic) NSMutableDictionary *pendingChanges; // @synthesize pendingChanges=_pendingChanges;
- (id)init;	// IMP=0x000000000009cd2f

@end

