//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BLSDisplayPowerResourceHint;

__attribute__((visibility("hidden")))
@interface BLSHAsyncDisplayPowerResourceHint : NSObject
{
    id <BLSDisplayPowerResourceHint> _hint;	// 8 = 0x8
}

+ (id)hintWithHint:(id)arg1;	// IMP=0x00100000000094b7
+ (id)sharedHighPriorityQueue;	// IMP=0x001000000000940e
- (void).cxx_destruct;	// IMP=0x0000000000009647
- (_Bool)updateState:(unsigned long long)arg1;	// IMP=0x000000000000956b
- (id)initWithHint:(id)arg1;	// IMP=0x0000000000009500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

