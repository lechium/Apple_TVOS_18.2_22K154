//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTCaptureConfiguration;

@interface GTCaptureUpdateConfiguration
{
    GTCaptureConfiguration *_configuration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003c95
- (void).cxx_destruct;	// IMP=0x0020000000003de2
@property(retain, nonatomic) GTCaptureConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003d40
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003c9d

@end

