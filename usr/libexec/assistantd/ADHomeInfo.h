//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface ADHomeInfo : NSObject
{
    _Bool _personalDomainsIsEnabled;	// 8 = 0x8
    _Bool _securePersonalDomainsRequireAuth;	// 9 = 0x9
    NSUUID *_currentHomeIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000236dd2
@property(retain, nonatomic) NSUUID *currentHomeIdentifier; // @synthesize currentHomeIdentifier=_currentHomeIdentifier;
@property(nonatomic) _Bool securePersonalDomainsRequireAuth; // @synthesize securePersonalDomainsRequireAuth=_securePersonalDomainsRequireAuth;
@property(nonatomic) _Bool personalDomainsIsEnabled; // @synthesize personalDomainsIsEnabled=_personalDomainsIsEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000236cf7
- (unsigned long long)hash;	// IMP=0x0010000000236c48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000236ba7
- (id)description;	// IMP=0x0010000000236ac9

@end

