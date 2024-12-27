//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionAccumulator : NSObject
{
    unsigned long long _values[9];	// 8 = 0x8
    NSString *_name;	// 80 = 0x50
    long long _type;	// 88 = 0x58
    CDUnknownBlockType _block;	// 96 = 0x60
    struct _NSRange _depthRange;	// 104 = 0x68
}

+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depthRange:(struct _NSRange)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000013f09f0
+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000013f09ce
- (void).cxx_destruct;	// IMP=0x00000000013f0f3a
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) struct _NSRange depthRange; // @synthesize depthRange=_depthRange;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x00000000013f0cb3
- (void)reset;	// IMP=0x00000000013f0c92
- (void)_increaseWithCount:(unsigned long long)arg1 source:(long long)arg2;	// IMP=0x00000000013f0c7c
- (_Bool)_increaseWithActions:(id)arg1;	// IMP=0x00000000013f0bde
- (void)increaseWithActions:(id)arg1;	// IMP=0x00000000013f0bcc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013f0b87
- (id)description;	// IMP=0x00000000013f0ad8

@end

