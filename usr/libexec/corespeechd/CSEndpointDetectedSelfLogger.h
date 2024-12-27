//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttSiriEndpointerNode, CSEndpointerMetrics, CSSiriClientBehaviorMonitor, NSString;
@protocol OS_dispatch_queue;

@interface CSEndpointDetectedSelfLogger : NSObject
{
    _Bool _localSRDisabled;	// 8 = 0x8
    _Bool _trpDetectDelivered;	// 9 = 0x9
    NSString *_mhId;	// 16 = 0x10
    CSAttSiriEndpointerNode *_endpointerNode;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CSSiriClientBehaviorMonitor *_siriClientBehaviorMonitor;	// 40 = 0x28
    CSEndpointerMetrics *_cachedRelaxedEndpointerMetrics;	// 48 = 0x30
}

+ (void)emitEndpointDetectedEventWithEndpointerMetrics:(id)arg1 withEndpointerModelType:(long long)arg2 withTrpId:(id)arg3 withMhID:(id)arg4;	// IMP=0x00200000000b1c43
- (void).cxx_destruct;	// IMP=0x00200000000b16a3
@property(retain, nonatomic) CSEndpointerMetrics *cachedRelaxedEndpointerMetrics; // @synthesize cachedRelaxedEndpointerMetrics=_cachedRelaxedEndpointerMetrics;
@property(retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // @synthesize siriClientBehaviorMonitor=_siriClientBehaviorMonitor;
@property(nonatomic) _Bool trpDetectDelivered; // @synthesize trpDetectDelivered=_trpDetectDelivered;
@property(nonatomic) _Bool localSRDisabled; // @synthesize localSRDisabled=_localSRDisabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, setter=registerEndpointerNode:) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000b15f7
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000b15f1
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000b1564
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000b14d7
- (void)didCompleteRecognitionTaskWithStatistics:(id)arg1 requestId:(id)arg2 endpointMode:(long long)arg3 error:(id)arg4;	// IMP=0x00100000000b148c
- (void)attSiriNode:(id)arg1 selectedTRPId:(id)arg2 withMetrics:(id)arg3;	// IMP=0x00100000000b13cd
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000b13c7
- (void)attSiriNode:(id)arg1 didDetectEndpointEventAtTime:(double)arg2 eventType:(long long)arg3 withMetrics:(id)arg4 useEndpointerSignal:(_Bool)arg5;	// IMP=0x00100000000b1327
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000b129a
- (void)reset;	// IMP=0x00100000000b124f
- (void)setup;	// IMP=0x00100000000b1177
- (id)init;	// IMP=0x00100000000b106c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

