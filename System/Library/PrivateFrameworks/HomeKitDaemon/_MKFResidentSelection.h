//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFResidentSelectionDatabaseID, NSArray, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFResidentSelection
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000699a58
+ (id)homeRelation;	// IMP=0x0010000000699a28
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000699974
+ (id)fetchRequest;	// IMP=0x0010000000915a20
- (id)castIfResidentSelection;	// IMP=0x0000000000699add
@property(readonly, copy, nonatomic) MKFResidentSelectionDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSNumber *mode; // @dynamic mode;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(retain, nonatomic) NSArray *preferredResidentIDSIdentifiers; // @dynamic preferredResidentIDSIdentifiers;
@property(copy, nonatomic) NSDate *selectionTimestamp; // @dynamic selectionTimestamp;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

