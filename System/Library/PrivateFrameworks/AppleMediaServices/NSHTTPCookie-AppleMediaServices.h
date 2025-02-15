//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPCookie.h>

@class NSString;

@interface NSHTTPCookie (AppleMediaServices)
+ (id)ams_cookieByMarkingCookieAsDeleted:(id)arg1;	// IMP=0x0010000000536443
+ (id)ams_propertiesForCookies:(id)arg1;	// IMP=0x001000000053832e
+ (id)ams_cookiesForProperties:(id)arg1;	// IMP=0x00100000005382c5
+ (id)ams_cookiesByMergingProperties:(id)arg1 intoProperties:(id)arg2;	// IMP=0x00100000005378e7
+ (id)ams_propertyXPCClasses;	// IMP=0x001000000053783d
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000053856b
+ (id)classesForPropertyCoding;	// IMP=0x001000000053835f
@property(readonly, nonatomic) NSString *hashedDescription;
- (_Bool)ams_shouldReplaceCookie:(id)arg1;	// IMP=0x001000000053751a
- (_Bool)ams_matchesURL:(id)arg1;	// IMP=0x0010000000537493
- (_Bool)ams_isEquivalent:(id)arg1;	// IMP=0x001000000053732f
- (_Bool)ams_isEqualToCookie:(id)arg1;	// IMP=0x0010000000536ac4
- (_Bool)_secureOnlyMatchesURL:(id)arg1;	// IMP=0x0010000000536a73
- (_Bool)_httpOnlyMatchesURL:(id)arg1;	// IMP=0x0010000000536a22
- (_Bool)_pathMatchesURL:(id)arg1;	// IMP=0x0010000000536845
- (_Bool)_domainMatchesURL:(id)arg1;	// IMP=0x0010000000536735
@property(readonly, nonatomic, getter=ams_isExpired) _Bool ams_expired;
@property(readonly, nonatomic, getter=ams_isDeleted) _Bool ams_deleted;
@property(readonly, nonatomic, getter=ams_isCookieValidForBag) _Bool ams_cookieValidForBag;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005384a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000538422

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

