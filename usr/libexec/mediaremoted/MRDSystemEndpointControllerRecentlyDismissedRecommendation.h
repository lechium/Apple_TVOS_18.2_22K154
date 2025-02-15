//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface MRDSystemEndpointControllerRecentlyDismissedRecommendation : NSObject
{
    NSString *_outputDeviceUID;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _disableDuration;	// 24 = 0x18
    NSString *_devicePlaybackSessionID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000b960
@property(readonly, nonatomic) NSString *devicePlaybackSessionID; // @synthesize devicePlaybackSessionID=_devicePlaybackSessionID;
- (double)disableDuration;	// IMP=0x001000000000b94b
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000b859
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000000b564
- (id)initWithOutputDevice:(id)arg1 date:(id)arg2 disableDuration:(double)arg3 devicePlaybackSessionID:(id)arg4;	// IMP=0x001000000000b457

@end

