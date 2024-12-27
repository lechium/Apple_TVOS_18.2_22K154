//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DYGTGPUToolsVersionInfo : NSObject
{
    unsigned int _interposeVersionGL;	// 8 = 0x8
    unsigned int _interposeVersionMetal;	// 12 = 0xc
    NSDictionary *_infoPlist;	// 16 = 0x10
    NSDictionary *_versionPlist;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000e4a8
- (void).cxx_destruct;	// IMP=0x000000000000e807
@property(nonatomic) unsigned int interposeVersionMetal; // @synthesize interposeVersionMetal=_interposeVersionMetal;
@property(nonatomic) unsigned int interposeVersionGL; // @synthesize interposeVersionGL=_interposeVersionGL;
@property(copy, nonatomic) NSDictionary *versionPlist; // @synthesize versionPlist=_versionPlist;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e715
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e54f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e4b0

@end

