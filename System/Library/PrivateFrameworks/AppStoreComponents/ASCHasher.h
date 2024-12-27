//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface ASCHasher : NSObject
{
    _Bool _isFinalized;	// 8 = 0x8
    NSMutableData *_buffer;	// 16 = 0x10
}

+ (unsigned long long)executionSeed;	// IMP=0x004000000001bc98
- (void).cxx_destruct;	// IMP=0x000000000001c0b7
@property(nonatomic) _Bool isFinalized; // @synthesize isFinalized=_isFinalized;
@property(readonly, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
- (unsigned long long)finalizeHash;	// IMP=0x000000000001bfa8
- (void)combineObject:(id)arg1;	// IMP=0x000000000001bf64
- (void)combineUnsignedInteger:(unsigned long long)arg1;	// IMP=0x000000000001bf11
- (void)combineInteger:(long long)arg1;	// IMP=0x000000000001bebe
- (void)combineDouble:(double)arg1;	// IMP=0x000000000001be6b
- (void)combineBool:(_Bool)arg1;	// IMP=0x000000000001be18
- (void)combineBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000001bd70
- (id)init;	// IMP=0x000000000001bcda

@end

