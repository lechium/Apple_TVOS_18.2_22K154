//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface PHAsset (ShareBack)
@property(readonly, nonatomic) PHAsset *asset;
@property(readonly, nonatomic) double horizontalAccuracy;
@property(readonly, nonatomic) NSTimeZone *timeZone;

// Remaining properties
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) CLLocation *location;
@end

