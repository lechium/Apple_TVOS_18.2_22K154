//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _PBAppInstallItem : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSDate *_installStartDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bb261
@property(readonly, copy, nonatomic) NSDate *installStartDate; // @synthesize installStartDate=_installStartDate;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x00100000000bb1ae
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000bb107
- (id)init;	// IMP=0x00100000000bb0dc

@end

