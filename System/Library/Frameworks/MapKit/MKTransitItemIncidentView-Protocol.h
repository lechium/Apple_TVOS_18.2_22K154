//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol GEOTransitIncident, GEOTransitRoutingIncidentMessage;

@protocol MKTransitItemIncidentView <NSObject>
@property(nonatomic) _Bool padBottom;
@property(nonatomic) long long cellPosition;
- (void)configureWithMessage:(NSString *)arg1 incident:(id <GEOTransitIncident>)arg2 referenceDate:(NSDate *)arg3 shouldShowImage:(_Bool)arg4 inSiri:(_Bool)arg5;
- (void)configureWithIncidentMessage:(id <GEOTransitRoutingIncidentMessage>)arg1 referenceDate:(NSDate *)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (void)configureWithIncident:(id <GEOTransitIncident>)arg1 referenceDate:(NSDate *)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
@end

