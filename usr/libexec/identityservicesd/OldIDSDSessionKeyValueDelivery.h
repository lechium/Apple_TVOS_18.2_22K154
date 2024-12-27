//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSGFTMetricsCollector, NSMutableDictionary, NSMutableSet, NSString;
@protocol OldIDSDSessionKeyValueDeliveryDelegate;

@interface OldIDSDSessionKeyValueDelivery : NSObject
{
    id <OldIDSDSessionKeyValueDeliveryDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_deliveryHandlersByUUID;	// 16 = 0x10
    NSMutableDictionary *_remoteKeyToParticipantIDToData;	// 24 = 0x18
    NSMutableDictionary *_remoteKeyToParticipantIDToWaitingBlock;	// 32 = 0x20
    NSString *_groupID;	// 40 = 0x28
    NSString *_sessionID;	// 48 = 0x30
    IDSGFTMetricsCollector *_metricsCollector;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    NSMutableDictionary *_localKeyToEntry;	// 72 = 0x48
    NSMutableDictionary *_groupIDToDesiredMaterialSet;	// 80 = 0x50
    NSMutableSet *_localMaterials;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000003444e4
@property(readonly, nonatomic) NSMutableSet *localMaterials; // @synthesize localMaterials=_localMaterials;
@property(readonly, nonatomic) NSMutableDictionary *groupIDToDesiredMaterialSet; // @synthesize groupIDToDesiredMaterialSet=_groupIDToDesiredMaterialSet;
@property(readonly, nonatomic) NSMutableDictionary *localKeyToEntry; // @synthesize localKeyToEntry=_localKeyToEntry;
- (void)requestDataForKey:(unsigned int)arg1 participantID:(unsigned long long)arg2;	// IMP=0x0010000000344481
- (void)sendData:(id)arg1 forKey:(unsigned int)arg2 encryption:(unsigned int)arg3 capability:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000034424c
- (void)_updateSendData;	// IMP=0x0010000000343334
- (int)_getTypeFromDataKey:(id)arg1;	// IMP=0x0010000000343311
- (unsigned int)_getKeyFromType:(int)arg1;	// IMP=0x0010000000343303
- (void)test_receiveData:(id)arg1 forKey:(unsigned int)arg2 fromParticipant:(unsigned long long)arg3;	// IMP=0x00100000003432f1
- (void)_receiveData:(id)arg1 forKey:(unsigned int)arg2 fromParticipant:(unsigned long long)arg3;	// IMP=0x0010000000342def
- (void)receiveDictionaryData:(id)arg1 forType:(int)arg2 fromParticipant:(unsigned long long)arg3;	// IMP=0x0010000000342a34
- (void)removeDeliveryHandler:(id)arg1;	// IMP=0x00100000003429cd
- (id)getAllKeyValueDeliveryLocalMaterialSetForGroupID:(id)arg1;	// IMP=0x0010000000342816
- (void)addDeliveryHandler:(id)arg1 uuid:(id)arg2;	// IMP=0x001000000034259d
- (void)dealloc;	// IMP=0x001000000034252e
- (id)initWithDelegate:(id)arg1 forGroupID:(id)arg2 sessionID:(id)arg3 metricsCollector:(id)arg4;	// IMP=0x00100000003422fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

