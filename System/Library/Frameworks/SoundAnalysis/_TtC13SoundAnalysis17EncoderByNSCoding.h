//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface _TtC13SoundAnalysis17EncoderByNSCoding : NSCoder
{
    MISSING_TYPE *encoder;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000144fbb
- (id)init;	// IMP=0x0000000000144f85
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000144eec
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000144e3c
- (void)encodeBytes:(const char *)arg1 length:(long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000144dce
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000144d30
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x0000000000144cc8
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000144c50
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000144c26
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000144c15
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000144ba3
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000144ad9
- (void)encodeCMTimeMapping:(CDStruct_9abb004b)arg1 forKey:(id)arg2;	// IMP=0x0000000000144a0a
- (void)encodeCMTimeRange:(CDStruct_3c1748cc)arg1 forKey:(id)arg2;	// IMP=0x000000000014494f
- (void)encodeCMTime:(CDStruct_198678f7)arg1 forKey:(id)arg2;	// IMP=0x000000000014489d
@property(nonatomic, readonly) _Bool allowsKeyedCoding;

@end

