//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCountry : NSObject
{
    NSString *_countryCode;	// 8 = 0x8
    NSString *_countryName;	// 16 = 0x10
    NSString *_phoneticCountryName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000486de
@property(copy, nonatomic) NSString *phoneticCountryName; // @synthesize phoneticCountryName=_phoneticCountryName;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

@end

