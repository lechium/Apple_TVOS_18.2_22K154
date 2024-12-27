//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisProviderRequest.h>

@class AVSpeechSynthesisProviderVoice, NSString;

@interface AVSpeechSynthesisProviderRequest (PublicSpeechImplementation)
- (_Bool)isEqual:(id)arg1;	// IMP=0x0030000000059b90
- (unsigned long long)hash;	// IMP=0x0030000000059b04
- (id)description;	// IMP=0x0030000000059a33
@property(retain, nonatomic) AVSpeechSynthesisProviderVoice *voice;
@property(retain, nonatomic) NSString *jobIdentifier;
@property(retain, nonatomic) NSString *ssmlRepresentation;
- (id)initWithCoder:(id)arg1;	// IMP=0x0030000000059869
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0030000000059786
- (id)initWithSSMLRepresentation:(id)arg1 voice:(id)arg2;	// IMP=0x00300000000596e8
@end

