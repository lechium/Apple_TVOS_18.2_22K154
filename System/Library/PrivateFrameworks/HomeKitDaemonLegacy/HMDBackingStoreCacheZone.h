//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheZone : HMFObject
{
    long long _zoneID;	// 8 = 0x8
    NSString *_zoneName;	// 16 = 0x10
    NSMutableArray *_actualGroups;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023b5b0
@property(retain) NSMutableArray *actualGroups; // @synthesize actualGroups=_actualGroups;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) long long zoneID; // @synthesize zoneID=_zoneID;
@property(readonly) NSArray *groups;
- (id)dumpDebug;	// IMP=0x000000000023b237
- (id)initWithZoneID:(long long)arg1 name:(id)arg2;	// IMP=0x000000000023b173

@end

