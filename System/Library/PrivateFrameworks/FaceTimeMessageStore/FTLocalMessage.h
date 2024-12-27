//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString, NSURL, NSUUID;

@interface FTLocalMessage : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000b15d1
@property(nonatomic, readonly) NSString *description;

// Remaining properties
@property(nonatomic, copy) NSUUID *callUUID; // @dynamic callUUID;
@property(nonatomic, copy) NSUUID *conversationID; // @dynamic conversationID;
@property(nonatomic, copy) NSDate *dateCreated; // @dynamic dateCreated;
@property(nonatomic, copy) NSDate *dateModified; // @dynamic dateModified;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic, copy) NSString *fileType; // @dynamic fileType;
@property(nonatomic, copy) NSString *from; // @dynamic from;
@property(nonatomic) _Bool isRTT; // @dynamic isRTT;
@property(nonatomic) _Bool isRead; // @dynamic isRead;
@property(nonatomic) _Bool isSensitive; // @dynamic isSensitive;
@property(nonatomic) short mailboxType; // @dynamic mailboxType;
@property(nonatomic, copy) NSURL *messageFile; // @dynamic messageFile;
@property(nonatomic, copy) NSURL *messageThumbnail; // @dynamic messageThumbnail;
@property(nonatomic) short messageType; // @dynamic messageType;
@property(nonatomic, copy) NSString *provider; // @dynamic provider;
@property(nonatomic, copy) NSString *quality; // @dynamic quality;
@property(nonatomic, copy) NSString *recipient; // @dynamic recipient;
@property(nonatomic, copy) NSUUID *recordUUID; // @dynamic recordUUID;
@property(nonatomic, copy) NSString *simID; // @dynamic simID;
@property(nonatomic, copy) NSString *thumbnailType; // @dynamic thumbnailType;
@property(nonatomic, copy) NSURL *transcript; // @dynamic transcript;
@property(nonatomic, copy) NSData *transcriptData; // @dynamic transcriptData;
@property(nonatomic, copy) NSString *transcriptType; // @dynamic transcriptType;
@property(nonatomic) short transcriptionStatus; // @dynamic transcriptionStatus;
@property(nonatomic) int voicemailID; // @dynamic voicemailID;

@end

