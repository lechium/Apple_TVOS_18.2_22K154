//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSUUID, VUIndexMapping;

@interface VUIndexObservation : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000c0e40

// Remaining properties
@property(nonatomic, copy) NSUUID *asset; // @dynamic asset;
@property(nonatomic) short client; // @dynamic client;
@property(nonatomic) float confidence; // @dynamic confidence;
@property(nonatomic, copy) NSData *contextualEmbedding; // @dynamic contextualEmbedding;
@property(nonatomic, copy) NSData *embedding; // @dynamic embedding;
@property(nonatomic) long long identifier; // @dynamic identifier;
@property(nonatomic) _Bool isPrimary; // @dynamic isPrimary;
@property(nonatomic) long long legacyLabel; // @dynamic legacyLabel;
@property(nonatomic) int legacyPartition; // @dynamic legacyPartition;
@property(nonatomic, retain) VUIndexMapping *mapping; // @dynamic mapping;
@property(nonatomic, copy) NSUUID *moment; // @dynamic moment;
@property(nonatomic) float quality; // @dynamic quality;
@property(nonatomic) short source; // @dynamic source;
@property(nonatomic, retain) NSSet *tags; // @dynamic tags;
@property(nonatomic) short type; // @dynamic type;

@end

