//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SiriTTSAudibleContext : NSObject
{
    MISSING_TYPE *audioSessionId;	// 8 = 0x8
    MISSING_TYPE *immediate;	// 12 = 0xc
    MISSING_TYPE *didStartSpeaking;	// 16 = 0x10
    MISSING_TYPE *playbackVolume;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000015f7d
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000015f40
- (void).cxx_destruct;	// IMP=0x0000000000016382
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016327
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000160e4
- (id)init;	// IMP=0x0000000000015f01
@property(nonatomic) float playbackVolume; // @synthesize playbackVolume;
@property(nonatomic, copy) CDUnknownBlockType didStartSpeaking;
@property(nonatomic) _Bool immediate; // @synthesize immediate;
@property(nonatomic) unsigned int audioSessionId; // @synthesize audioSessionId;

@end

