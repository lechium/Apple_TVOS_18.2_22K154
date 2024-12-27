//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimeZone.h>

@interface NSTimeZone (Foundation)
+ (id)_timeZoneDataVersion;	// IMP=0x0060000000411780
+ (id)_knownTimeZoneIdentifiers;	// IMP=0x0060000000411720
+ (void)_setAbbreviationDictionary:(id)arg1;	// IMP=0x0060000000411670
+ (id)_abbreviationDictionary;	// IMP=0x00600000004115b0
+ (id)_resetSystemTimeZone;	// IMP=0x0060000000411590
+ (void)_setDefaultTimeZone:(id)arg1;	// IMP=0x0060000000411490
+ (id)_default;	// IMP=0x00600000004113f0
+ (id)_current;	// IMP=0x0060000000411350
+ (id)_autoupdating;	// IMP=0x00600000004112b0
+ (id)_timeZoneWithAbbreviation:(id)arg1;	// IMP=0x0060000000411270
+ (id)_timeZoneWithName:(id)arg1 tryAbbrev:(_Bool)arg2;	// IMP=0x0060000000411230
+ (id)_timeZoneWithSecondsFromGMT:(long long)arg1;	// IMP=0x0060000000411180
+ (id)_timeZoneWithName:(id)arg1;	// IMP=0x00600000004110b0
+ (id)_timeZoneWithName:(id)arg1 data:(id)arg2;	// IMP=0x0060000000411010
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000087999b
- (Class)classForCoder;	// IMP=0x0010000000879db5
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000879a93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000008799a3
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000008f2ccb
@end

