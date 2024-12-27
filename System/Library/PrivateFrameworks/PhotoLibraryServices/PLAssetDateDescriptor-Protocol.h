//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDate, NSNumber, NSString, PLLocalCreationDateCreator;

@protocol PLAssetDateDescriptor <NSObject>
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) NSNumber *rawTimeZoneOffsetValue;
@property(readonly, nonatomic) NSString *rawTimeZoneName;
@property(readonly, nonatomic) NSDate *utcDate;
@property(readonly, nonatomic) NSString *uuid;
- (NSDate *)localDateAndCreateIfNeededWithLocalDateCreator:(PLLocalCreationDateCreator *)arg1;
@end

