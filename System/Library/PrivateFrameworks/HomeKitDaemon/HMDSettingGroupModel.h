//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSettingGroupModel : HMBModel
{
}

+ (id)hmbProperties;	// IMP=0x00100000001a1f8b
- (id)copyWithNewParentModelID:(id)arg1;	// IMP=0x00000000001a1ecd
@property(readonly, nonatomic) NSString *nameForKeyPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *hmbModelID;
@property(readonly, nonatomic) NSUUID *hmbParentModelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;

@end

