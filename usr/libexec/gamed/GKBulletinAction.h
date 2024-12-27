//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface GKBulletinAction : NSObject
{
    _Bool _isDestructive;	// 8 = 0x8
    _Bool _inAlertView;	// 9 = 0x9
    _Bool _inBannerView;	// 10 = 0xa
    long long _type;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_info;	// 32 = 0x20
    NSNumber *_adamID;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSString *_playerID;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000014d53c
- (void).cxx_destruct;	// IMP=0x002000000014dc76
@property _Bool inBannerView; // @synthesize inBannerView=_inBannerView;
@property _Bool inAlertView; // @synthesize inAlertView=_inAlertView;
@property _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(retain) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) NSString *info; // @synthesize info=_info;
@property(retain) NSString *title; // @synthesize title=_title;
@property long long type; // @synthesize type=_type;
- (id)appLaunchTrampolineURL;	// IMP=0x001000000014d9ca
- (id)description;	// IMP=0x001000000014d855
@property(readonly) NSDictionary *actionDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014d544
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000014d270
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000014cf82
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000014ce57
- (id)init;	// IMP=0x001000000014ce1d

@end

