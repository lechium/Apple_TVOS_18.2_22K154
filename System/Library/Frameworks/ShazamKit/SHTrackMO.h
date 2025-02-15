//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSDictionary, NSString, NSURL, SHGroupMO, SHMetadataMO;

__attribute__((visibility("hidden")))
@interface SHTrackMO : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x008000000002e39e

// Remaining properties
@property(copy, nonatomic) NSString *albumName; // @dynamic albumName;
@property(copy, nonatomic) NSString *appleMusicID; // @dynamic appleMusicID;
@property(copy, nonatomic) NSURL *appleMusicURL; // @dynamic appleMusicURL;
@property(copy, nonatomic) NSURL *artworkURL; // @dynamic artworkURL;
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) _Bool explicit; // @dynamic explicit;
@property(retain, nonatomic) NSArray *genres; // @dynamic genres;
@property(retain, nonatomic) SHGroupMO *group; // @dynamic group;
@property(copy, nonatomic) NSString *isrc; // @dynamic isrc;
@property(retain, nonatomic) NSArray *labels; // @dynamic labels;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) SHMetadataMO *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSDate *modifiedDate; // @dynamic modifiedDate;
@property(copy, nonatomic) NSString *providerID; // @dynamic providerID;
@property(copy, nonatomic) NSString *providerName; // @dynamic providerName;
@property(retain, nonatomic) NSDictionary *rawSongResponse; // @dynamic rawSongResponse;
@property(copy, nonatomic) NSString *recognitionID; // @dynamic recognitionID;
@property(copy, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(nonatomic) long long shazamCount; // @dynamic shazamCount;
@property(copy, nonatomic) NSString *shazamKey; // @dynamic shazamKey;
@property(copy, nonatomic) NSURL *shazamURL; // @dynamic shazamURL;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *syncID; // @dynamic syncID;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSURL *videoURL; // @dynamic videoURL;

@end

