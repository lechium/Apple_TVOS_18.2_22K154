//
//     Generated by classdump-c 4.2.0 (64 bit).
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

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000005102
- (void).cxx_destruct;	// IMP=0x0020000000005461
@property(nonatomic) unsigned int interposeVersionMetal; // @synthesize interposeVersionMetal=_interposeVersionMetal;
@property(nonatomic) unsigned int interposeVersionGL; // @synthesize interposeVersionGL=_interposeVersionGL;
@property(copy, nonatomic) NSDictionary *versionPlist; // @synthesize versionPlist=_versionPlist;
@property(copy, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000536f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000051a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000510a

@end

