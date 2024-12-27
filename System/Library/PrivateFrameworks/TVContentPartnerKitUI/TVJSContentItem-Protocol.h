//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL, TVContentIdentifier;

@protocol TVJSContentItem <JSExport>
@property(copy) NSURL *displayURL;
@property(copy) NSURL *playURL;
@property(copy) NSNumber *hasPlayedToEnd;
@property(copy) NSNumber *currentPosition;
@property(copy) NSNumber *duration;
@property(copy) NSDate *creationDate;
@property(copy) NSDate *expirationDate;
@property(copy) NSDate *lastAccessedDate;
@property(copy) NSString *title;
@property int imageShape;
@property(copy) NSURL *imageURL;
@property(readonly, copy) TVContentIdentifier *contentIdentifier;
@end

