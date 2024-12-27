//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDMatterCommandActionModel
{
}

+ (id)properties;	// IMP=0x00100000007bbdc2
+ (Class)cd_entityClass;	// IMP=0x0010000000ccb72b
- (id)dependentUUIDs;	// IMP=0x00000000007bbc38
- (id)decodeSerializedMatterCommands:(id)arg1 home:(id)arg2;	// IMP=0x00000000007bb813
- (void)loadModelWithActionInformation:(id)arg1;	// IMP=0x00000000007bb7e4
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x0000000000ccb0c7
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x0000000000ccaec1

// Remaining properties
@property(copy, nonatomic) NSArray *commands; // @dynamic commands;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *enforceExecutionOrder; // @dynamic enforceExecutionOrder;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *matterPathUUIDs; // @dynamic matterPathUUIDs;
@property(readonly) Class superclass;

@end

