//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFSoftwareVersion.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessoryVersion : HMFSoftwareVersion
{
    NSString *_rawVersionString;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b5d003
- (void).cxx_destruct;	// IMP=0x0000000000b5cff0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b5cf7c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b5cee1
@property(readonly, copy, nonatomic) NSString *rawVersionString; // @synthesize rawVersionString=_rawVersionString;
- (id)initWithMatterVersionString:(id)arg1;	// IMP=0x0000000000b5cddf
- (id)initWithVersionString:(id)arg1;	// IMP=0x0000000000b5ccaa

@end

