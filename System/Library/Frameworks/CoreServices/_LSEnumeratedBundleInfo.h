//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSEnumeratedBundleInfo : NSObject
{
    _Bool _isPlaceholder;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000046dc1
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046ce6
- (unsigned long long)hash;	// IMP=0x0000000000046cbb
- (id)initWithBundleID:(id)arg1 isPlaceholder:(_Bool)arg2;	// IMP=0x0000000000046c45

@end

