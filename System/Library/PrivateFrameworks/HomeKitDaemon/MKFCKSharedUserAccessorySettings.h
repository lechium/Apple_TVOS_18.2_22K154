//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKSharedUserDataRoot, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKSharedUserAccessorySettings
{
}

+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000456fd4
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000456efe
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000456e31
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000456e29
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000456d88
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000456ce7
+ (id)createWithHomeModelID:(id)arg1 accessoryModelID:(id)arg2 persistentStore:(id)arg3 context:(id)arg4;	// IMP=0x0010000000456bca
+ (id)fetchRequest;	// IMP=0x0010000000efd404
- (_Bool)_importIntoLocalUserModel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000456949
- (_Bool)_importWithContext:(id)arg1;	// IMP=0x00000000004567aa
- (_Bool)importIntoLocalUserModel:(id)arg1 context:(id)arg2;	// IMP=0x0000000000456731

// Remaining properties
@property(copy, nonatomic) NSUUID *accessoryModelID; // @dynamic accessoryModelID;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool listeningHistoryEnabled; // @dynamic listeningHistoryEnabled;
@property(nonatomic) _Bool mediaContentProfileEnabled; // @dynamic mediaContentProfileEnabled;
@property(nonatomic) _Bool personalRequestsEnabled; // @dynamic personalRequestsEnabled;
@property(retain, nonatomic) MKFCKSharedUserDataRoot *root; // @dynamic root;
@property(readonly) Class superclass;

@end

