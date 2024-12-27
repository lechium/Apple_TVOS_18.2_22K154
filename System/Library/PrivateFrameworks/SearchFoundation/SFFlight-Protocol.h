//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFFlight <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *carrierWebsite;
@property(copy, nonatomic) NSString *carrierPhoneNumber;
@property(copy, nonatomic) NSString *operatorFlightNumber;
@property(copy, nonatomic) NSString *operatorCarrierCode;
@property(copy, nonatomic) NSArray *legs;
@property(copy, nonatomic) NSString *flightNumber;
@property(copy, nonatomic) NSString *carrierName;
@property(copy, nonatomic) NSString *carrierCode;
@property(copy, nonatomic) NSString *flightID;
@end

