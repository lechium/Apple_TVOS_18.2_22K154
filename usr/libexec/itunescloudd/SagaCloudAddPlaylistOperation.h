//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SagaCloudAddPlaylistOperation
{
    NSString *_playlistGlobalID;	// 16 = 0x10
    NSDictionary *_globalIDToSagaIDMap;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000011208c
- (void).cxx_destruct;	// IMP=0x0020000000111bd6
@property(retain, nonatomic) NSDictionary *globalIDToSagaIDMap; // @synthesize globalIDToSagaIDMap=_globalIDToSagaIDMap;
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x0010000000111914
- (void)processAddedItems:(id)arg1;	// IMP=0x001000000011182e
- (void)logCloudAddRequestDescription;	// IMP=0x001000000011178f
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x0010000000111741
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001116c4
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000111629
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 playlistGlobalID:(id)arg3;	// IMP=0x00100000001115a7
- (id)initWithClientIdentity:(id)arg1 playlistGlobalID:(id)arg2;	// IMP=0x0010000000111521

@end

