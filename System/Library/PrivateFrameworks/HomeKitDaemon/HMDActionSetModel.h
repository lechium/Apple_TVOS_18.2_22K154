//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HMDActionSetModel
{
}

+ (id)properties;	// IMP=0x00100000003ddf5d
+ (id)cd_getMKFActionSetFromActionSet:(id)arg1;	// IMP=0x00100000006c1eb3
+ (id)cd_getMKFActionSetFromActionSetUUID:(id)arg1;	// IMP=0x00100000006c1e21
+ (Class)cd_entityClass;	// IMP=0x00100000006c1e10
+ (id)cd_parentReferenceName;	// IMP=0x00100000006c1e03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *lastExecutionDate; // @dynamic lastExecutionDate;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

