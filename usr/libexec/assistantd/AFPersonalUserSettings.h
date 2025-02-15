//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AFPersonalUserSettings : NSObject
{
    _Bool _twentyFourHourTimeDisplay;	// 8 = 0x8
    NSString *_temperatureUnit;	// 16 = 0x10
    NSString *_region;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    NSString *_preferredLanguage;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001ce091
- (void).cxx_destruct;	// IMP=0x00200000001ce053
@property(copy, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage=_preferredLanguage;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(nonatomic) _Bool twentyFourHourTimeDisplay; // @synthesize twentyFourHourTimeDisplay=_twentyFourHourTimeDisplay;
@property(copy, nonatomic) NSString *temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001cde83
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001cddd5

@end

