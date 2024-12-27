//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSArray, NSError;

__attribute__((visibility("hidden")))
@interface MNSessionUpdateResponseInfo : NSObject
{
    NSArray *_waypoints;	// 8 = 0x8
    GEOETATrafficUpdateRequest *_request;	// 16 = 0x10
    GEOETATrafficUpdateResponse *_response;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    double _responseTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000011cb1e
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEOETATrafficUpdateResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEOETATrafficUpdateRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;

@end

