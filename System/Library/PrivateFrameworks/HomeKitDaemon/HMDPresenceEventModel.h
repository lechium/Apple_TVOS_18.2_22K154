//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDPresenceEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4;	// IMP=0x0010000000468abc
+ (id)properties;	// IMP=0x0010000000468a59
+ (Class)cd_entityClass;	// IMP=0x00100000003871c1
+ (id)cd_parentReferenceName;	// IMP=0x00100000003871b4
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000386ff5
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000386e4a

// Remaining properties
@property(retain, nonatomic) NSNumber *activation; // @dynamic activation;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *presenceType; // @dynamic presenceType;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *users; // @dynamic users;

@end

