//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC4Sage33CompletePromptResponseXPCEnvelope : NSObject
{
    MISSING_TYPE *_completion;	// 8 = 0x8
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000020739
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000206fc
- (void).cxx_destruct;	// IMP=0x0000000000020940
- (id)init;	// IMP=0x0000000000020900
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020893
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000207bb
@property(nonatomic, copy) NSData *_completion;

@end

