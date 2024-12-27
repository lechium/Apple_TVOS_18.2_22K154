//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNActionRunBlock : SCNAction
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)runBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x006000000007c384
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007c202
- (id)reversedAction;	// IMP=0x000000000007c449
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007c3df
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x000000000007c2a9
- (void)dealloc;	// IMP=0x000000000007c263
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007c20a
- (_Bool)isCustom;	// IMP=0x000000000007c1fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007c1bd
- (id)init;	// IMP=0x000000000007c171

@end

