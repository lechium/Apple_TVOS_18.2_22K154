//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSOrderedSet, NSString, NSUUID, _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord;

@interface _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000154400

// Remaining properties
@property(nonatomic, retain) NSOrderedSet *contributingGroundTruth; // @dynamic contributingGroundTruth;
@property(nonatomic, copy) NSString *fullName; // @dynamic fullName;
@property(nonatomic, copy) NSString *handleLabel; // @dynamic handleLabel;
@property(nonatomic, copy) NSUUID *id; // @dynamic id;
@property(nonatomic, retain) _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord *inferredContactReference; // @dynamic inferredContactReference;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic, copy) NSData *scoreHistory; // @dynamic scoreHistory;
@property(nonatomic, retain) NSOrderedSet *tags; // @dynamic tags;
@property(nonatomic) double timestamp; // @dynamic timestamp;
@property(nonatomic, copy) NSData *usoPersonQuery; // @dynamic usoPersonQuery;

@end

