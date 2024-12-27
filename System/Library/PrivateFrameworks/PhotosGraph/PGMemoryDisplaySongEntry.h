//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PGMemoryDisplaySongEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000002a8fa0

// Remaining properties
@property(nonatomic, copy) NSString *adamID; // @dynamic adamID;
@property(nonatomic, copy) NSString *album; // @dynamic album;
@property(nonatomic, retain) NSNumber *arousal; // @dynamic arousal;
@property(nonatomic, copy) NSString *artist; // @dynamic artist;
@property(nonatomic, copy) NSString *artworkURLFormat; // @dynamic artworkURLFormat;
@property(nonatomic, copy) NSDate *cacheDate; // @dynamic cacheDate;
@property(nonatomic, retain) NSNumber *clearedForPhotosMemoriesExport; // @dynamic clearedForPhotosMemoriesExport;
@property(nonatomic, copy) NSString *contentProvider; // @dynamic contentProvider;
@property(nonatomic, retain) NSNumber *duration; // @dynamic duration;
@property(nonatomic, copy) NSData *flexMLAnalysisAsData; // @dynamic flexMLAnalysisAsData;
@property(nonatomic, copy) NSString *introPreviewPath; // @dynamic introPreviewPath;
@property(nonatomic, retain) NSNumber *isExplicit; // @dynamic isExplicit;
@property(nonatomic, retain) NSNumber *loudnessMainPeak; // @dynamic loudnessMainPeak;
@property(nonatomic, retain) NSNumber *loudnessMainValue; // @dynamic loudnessMainValue;
@property(nonatomic, copy) NSString *songURLPath; // @dynamic songURLPath;
@property(nonatomic, copy) NSString *title; // @dynamic title;
@property(nonatomic, retain) NSNumber *valence; // @dynamic valence;

@end

