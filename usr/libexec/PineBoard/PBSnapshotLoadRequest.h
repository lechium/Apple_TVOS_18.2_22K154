//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PBSnapshotLoadRequest : NSObject
{
    _Bool _preferLaunchImage;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    double _preferredScaleFactor;	// 24 = 0x18
    NSString *_variant;	// 32 = 0x20
}

+ (id)requestWithBundleIdentifier:(id)arg1;	// IMP=0x002000000005e0bd
- (void).cxx_destruct;	// IMP=0x002000000005e50b
@property(copy, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(nonatomic) double preferredScaleFactor; // @synthesize preferredScaleFactor=_preferredScaleFactor;
@property(nonatomic) _Bool preferLaunchImage; // @synthesize preferLaunchImage=_preferLaunchImage;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (unsigned long long)hash;	// IMP=0x001000000005e3e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005e1cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005e134

@end

