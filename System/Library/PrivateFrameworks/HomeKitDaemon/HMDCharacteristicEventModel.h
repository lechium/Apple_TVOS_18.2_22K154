//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEventModel
{
}

+ (id)eventModelWithDictionary:(id)arg1 home:(id)arg2 eventTriggerUUID:(id)arg3 message:(id)arg4 checkForSupport:(_Bool)arg5 error:(id *)arg6;	// IMP=0x0010000000bd6610
+ (id)properties;	// IMP=0x0010000000bd65ad
+ (Class)cd_entityClass;	// IMP=0x0010000000574d64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id eventValue; // @dynamic eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

