//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CNDuplicateSet, NSData, NSString;

@interface CNDuplicateSetContactImage : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000016f2f0

// Remaining properties
@property(nonatomic, copy) NSString *cropRectString; // @dynamic cropRectString;
@property(nonatomic, retain) CNDuplicateSet *duplicateSet; // @dynamic duplicateSet;
@property(nonatomic, copy) NSData *fullscreenImageData; // @dynamic fullscreenImageData;
@property(nonatomic, copy) NSData *imageData; // @dynamic imageData;
@property(nonatomic, copy) NSData *imageHash; // @dynamic imageHash;
@property(nonatomic, copy) NSString *imageType; // @dynamic imageType;
@property(nonatomic, copy) NSData *memojiMetadata; // @dynamic memojiMetadata;
@property(nonatomic, copy) NSData *thumbnailImageData; // @dynamic thumbnailImageData;

@end

