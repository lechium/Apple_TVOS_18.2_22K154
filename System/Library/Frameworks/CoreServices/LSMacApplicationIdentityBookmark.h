//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSMacApplicationIdentityBookmark : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001af40
- (void).cxx_destruct;	// IMP=0x000000000001b051
- (unsigned long long)hash;	// IMP=0x000000000001b00e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001af53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001af48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001aecb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ad95

@end

