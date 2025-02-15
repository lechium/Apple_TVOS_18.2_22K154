//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSSmartSiriVolumeEstimate : NSObject
{
    float _volumeEstimate;	// 8 = 0x8
    NSString *_debugLogPath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000ae087
- (void).cxx_destruct;	// IMP=0x00200000000ae077
@property(readonly, nonatomic) NSString *debugLogPath; // @synthesize debugLogPath=_debugLogPath;
@property(readonly, nonatomic) float volumeEstimate; // @synthesize volumeEstimate=_volumeEstimate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000adfbb
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000adecb
- (id)initWithVolumeEstimate:(float)arg1 debugLogFile:(id)arg2;	// IMP=0x00100000000ade50

@end

