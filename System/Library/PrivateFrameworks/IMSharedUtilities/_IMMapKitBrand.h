//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMBrand.h"

@class NSString;

@interface _IMMapKitBrand : IMBrand
{
    NSString *_brandURI;	// 16 = 0x10
}

- (void)wideLogoDataForDesiredSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d1e0a
- (void)squareLogoDataForDesiredSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d1df8
- (id)localizedResponseTime;	// IMP=0x00000000000d1dcd
- (_Bool)isVerified;	// IMP=0x00000000000d1da2
- (id)primaryPhoneNumber;	// IMP=0x00000000000d1d77
- (id)name;	// IMP=0x00000000000d1d4c
- (id)brandURI;	// IMP=0x00000000000d1d3b
- (void)dealloc;	// IMP=0x00000000000d1cf9
- (id)_init;	// IMP=0x00000000000d1ce3
- (id)_initWithMKMapItem:(id)arg1 brandURI:(id)arg2;	// IMP=0x00000000000d1c5d

@end

