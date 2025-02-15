//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregateData : NSObject
{
    NSArray *_destinations;	// 8 = 0x8
    NSArray *_destinationControllersData;	// 16 = 0x10
    NSArray *_groups;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000060f3c5
@property(copy) NSArray *groups; // @synthesize groups=_groups;
@property(copy) NSArray *destinationControllersData; // @synthesize destinationControllersData=_destinationControllersData;
@property(copy) NSArray *destinations; // @synthesize destinations=_destinations;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060f2a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060f29e
- (id)description;	// IMP=0x000000000060f1e1
- (unsigned long long)hash;	// IMP=0x000000000060f044
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000060ed68
- (id)sentinelGroup;	// IMP=0x000000000060ecf5
- (id)sentinelDestination;	// IMP=0x000000000060ec98
- (id)sentinelDestinationControllerData;	// IMP=0x000000000060ec25
- (id)sentinelIdentifier;	// IMP=0x000000000060ebf5
- (id)encodedMediaGroupEvents;	// IMP=0x000000000060e8ed
- (id)encodedDestinationControllerEvents;	// IMP=0x000000000060e78f
- (id)encodedDestinationEvents;	// IMP=0x000000000060e631
- (id)encodeToProtoBufferData;	// IMP=0x000000000060e4f9
- (id)decodeMediaGroupsWithEncodedMediaGroups:(id)arg1;	// IMP=0x000000000060e41d
- (id)decodeDestinationControllersWithEncodedDestinationControllers:(id)arg1;	// IMP=0x000000000060e212
- (id)decodeDestinationsWithEncodedDestinations:(id)arg1;	// IMP=0x000000000060e007
- (id)initWithProtoBufferData:(id)arg1;	// IMP=0x000000000060ddab
- (id)groupWithIdentifier:(id)arg1;	// IMP=0x000000000060dcdb
- (id)initWithDestinations:(id)arg1 destinationControllersData:(id)arg2;	// IMP=0x000000000060dcc2
- (id)initWithDestinations:(id)arg1 destinationControllersData:(id)arg2 groups:(id)arg3;	// IMP=0x000000000060dbd6

@end

