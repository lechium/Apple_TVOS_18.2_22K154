//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21SiriInformationSearch22PommesSearchRequestXPC : NSObject
{
    MISSING_TYPE *domain;	// 8 = 0x8
    MISSING_TYPE *listenAfterSpeaking;	// 24 = 0x18
    MISSING_TYPE *assistantId;	// 32 = 0x20
    MISSING_TYPE *requestId;	// 48 = 0x30
    MISSING_TYPE *isMultiUser;	// 64 = 0x40
    MISSING_TYPE *parseState;	// 1852404340 = 0x6e697274
    MISSING_TYPE *utterance;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *audioSource;	// 0 = 0x0
    MISSING_TYPE *audioDestination;	// 1844512 = 0x1c2520
    MISSING_TYPE *responseMode;	// 58975 = 0xe65f
    MISSING_TYPE *isEyesFree;	// 1844512 = 0x1c2520
    MISSING_TYPE *isVoiceTriggerEnabled;	// 0 = 0x0
    MISSING_TYPE *isTextToSpeechEnabled;	// 2 = 0x2
    MISSING_TYPE *isTriggerlessFollowup;	// 0 = 0x0
    MISSING_TYPE *isPushOffRequest;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *deviceRestrictions;	// 1869770847 = 0x6f72705f
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000199620
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001995b0
- (void).cxx_destruct;	// IMP=0x000000000019a880
- (id)init;	// IMP=0x000000000019a820
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019a7a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000199cd0

@end

