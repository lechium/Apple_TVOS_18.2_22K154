//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSUUID, _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord;

@interface _TtC28SiriPrivateLearningInference36ThinContactGroundTruthCoreDataRecord : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000154f10

// Remaining properties
@property(nonatomic, copy) NSData *groundTruthSource; // @dynamic groundTruthSource;
@property(nonatomic, copy) NSString *groundTruthType; // @dynamic groundTruthType;
@property(nonatomic, copy) NSUUID *id; // @dynamic id;
@property(nonatomic, retain) _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord *plusContactSuggestion; // @dynamic plusContactSuggestion;

@end

