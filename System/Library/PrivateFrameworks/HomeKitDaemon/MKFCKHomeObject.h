//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHome, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKHomeObject
{
}

+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000496c3a
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x001000000049673f
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00100000004965f3
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x001000000049645a
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000495f75
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000495e29
+ (id)rootKeyPath;	// IMP=0x0010000000495e1c
+ (unsigned long long)cloudStoreTypes;	// IMP=0x0010000000495e11
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x0000000000495bd9
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x0000000000495b0c
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0000000000495ac1
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x0000000000495a76
- (void)willSave;	// IMP=0x00000000004959af
- (_Bool)isReadyToImportIntoLocalModelWithContext:(id)arg1;	// IMP=0x00000000004959a7
- (_Bool)validateHomeModelID:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000496f76
- (_Bool)validateHome:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000496dd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MKFCKHome *home; // @dynamic home;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(readonly) Class superclass;

@end

