//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INImage, NSDate, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) INImage *providerImage;
@property(copy, nonatomic) NSNumber *minimumPartySize;
@property(copy, nonatomic) NSNumber *maximumPartySize;
@property(readonly, copy, nonatomic) NSDate *defaultBookingDate;
@property(readonly, nonatomic) unsigned long long defaultPartySize;
- (id)init;
@end

