//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKSharedUserDataRoot, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKSharedUserPhotosPerson
{
}

+ (id)fetchRequest;	// IMP=0x0010000000efd484
- (id)createHMPerson;	// IMP=0x0000000000c36cfa
- (void)updateWithHMPerson:(id)arg1;	// IMP=0x0000000000c36b96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSUUID *photoLibraryPersonUUID; // @dynamic photoLibraryPersonUUID;
@property(retain, nonatomic) MKFCKSharedUserDataRoot *root; // @dynamic root;
@property(readonly) Class superclass;

@end

