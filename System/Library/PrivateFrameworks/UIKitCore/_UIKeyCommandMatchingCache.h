//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIKeyCommandMatchingCache : NSObject
{
    NSMutableDictionary *_commandKeyPlaneConflictsByInput;	// 8 = 0x8
    NSMutableDictionary *_reachabilityByInput;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004146b7
@property(readonly, nonatomic) NSMutableDictionary *reachabilityByInput; // @synthesize reachabilityByInput=_reachabilityByInput;
@property(readonly, nonatomic) NSMutableDictionary *commandKeyPlaneConflictsByInput; // @synthesize commandKeyPlaneConflictsByInput=_commandKeyPlaneConflictsByInput;
- (id)init;	// IMP=0x00000000004142be

@end

