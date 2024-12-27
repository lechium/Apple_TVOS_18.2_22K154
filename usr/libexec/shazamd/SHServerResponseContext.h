//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHServerResponseContext : NSObject
{
    double _defaultRecordingIntermissionInSeconds;	// 8 = 0x8
    double _defaultRecordingSignatureOffsetInSeconds;	// 16 = 0x10
    NSString *_campaignToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000053120
@property(copy, nonatomic) NSString *campaignToken; // @synthesize campaignToken=_campaignToken;
@property(nonatomic) double defaultRecordingSignatureOffsetInSeconds; // @synthesize defaultRecordingSignatureOffsetInSeconds=_defaultRecordingSignatureOffsetInSeconds;
@property(nonatomic) double defaultRecordingIntermissionInSeconds; // @synthesize defaultRecordingIntermissionInSeconds=_defaultRecordingIntermissionInSeconds;
- (id)init;	// IMP=0x0010000000053069
- (void)sh_setCampaignTokenForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007f49
- (void)sh_setDefaultValuesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007d9b

@end

