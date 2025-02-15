//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIFPSKeyDeletionInfoManagedObject : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSData *additionalFPSRequestParamsJSONData; // @dynamic additionalFPSRequestParamsJSONData;
@property(copy, nonatomic) NSString *contentID; // @dynamic contentID;
@property(copy, nonatomic) NSNumber *dsid; // @dynamic dsid;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSURL *fpsKeyServerURL; // @dynamic fpsKeyServerURL;
@property(copy, nonatomic) NSURL *fpsNonceURL; // @dynamic fpsNonceURL;
@property(retain, nonatomic) NSData *keyData; // @dynamic keyData;
@property(copy, nonatomic) NSURL *keyURI; // @dynamic keyURI;
@property(copy, nonatomic) NSDate *playbackExpirationStartDate; // @dynamic playbackExpirationStartDate;
@end

