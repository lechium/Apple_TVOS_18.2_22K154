//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeManagerHomeHandle, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerHomeModel
{
}

+ (id)modelForHomeUUID:(id)arg1;	// IMP=0x001000000060fbab
+ (id)properties;	// IMP=0x001000000060fb7b
+ (id)deriveUUIDFromHomeUUID:(id)arg1;	// IMP=0x001000000060fb5b
+ (Class)cd_entityClass;	// IMP=0x001000000045df40
+ (id)cd_parentReferenceName;	// IMP=0x001000000045df33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMDHomeManagerHomeHandle *handle; // @dynamic handle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

