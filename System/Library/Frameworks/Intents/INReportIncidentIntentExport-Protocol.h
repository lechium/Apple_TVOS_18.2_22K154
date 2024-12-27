//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, INSupportedTrafficIncidentType, NSNumber, NSString;

@protocol INReportIncidentIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *additionalDetails;
@property(copy, nonatomic) CLPlacemark *userLocation;
@property(copy, nonatomic) NSNumber *isClear;
@property(copy, nonatomic) NSNumber *startTime;
@property(copy, nonatomic) INSupportedTrafficIncidentType *incidentType;
- (id)init;
@end

