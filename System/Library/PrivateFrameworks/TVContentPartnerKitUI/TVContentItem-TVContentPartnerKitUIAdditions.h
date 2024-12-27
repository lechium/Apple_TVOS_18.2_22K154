//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/TVContentItem.h>

@class NSDate, NSNumber, NSString, NSURL, TVContentIdentifier;

@interface TVContentItem (TVContentPartnerKitUIAdditions)

// Remaining properties
@property(readonly, copy) TVContentIdentifier *contentIdentifier;
@property(copy) NSDate *creationDate;
@property(copy) NSNumber *currentPosition;
@property(copy) NSURL *displayURL;
@property(copy) NSNumber *duration;
@property(copy) NSDate *expirationDate;
@property(copy) NSNumber *hasPlayedToEnd;
@property int imageShape;
@property(copy) NSURL *imageURL;
@property(copy) NSDate *lastAccessedDate;
@property(copy) NSURL *playURL;
@property(copy) NSString *title;
@end

