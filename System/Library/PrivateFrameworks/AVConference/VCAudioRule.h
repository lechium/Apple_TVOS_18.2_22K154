//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioRule : NSObject
{
    int _payload;	// 8 = 0x8
    _Bool _isSecondary;	// 12 = 0xc
    _Bool _sbr;	// 13 = 0xd
    unsigned int _samplesPerBlock;	// 16 = 0x10
    unsigned long long _hash;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x000000000029cc4b
@property(readonly, nonatomic) unsigned int samplesPerBlock; // @synthesize samplesPerBlock=_samplesPerBlock;
@property(readonly, nonatomic) _Bool sbr; // @synthesize sbr=_sbr;
@property(readonly, nonatomic) _Bool isSecondary; // @synthesize isSecondary=_isSecondary;
@property(readonly, nonatomic) int payload; // @synthesize payload=_payload;
- (id)description;	// IMP=0x000000000029cbb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029cb10
- (id)initWithPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3 samplesPerBlock:(unsigned int)arg4;	// IMP=0x000000000029ca71
- (id)init;	// IMP=0x000000000029ca63

@end

