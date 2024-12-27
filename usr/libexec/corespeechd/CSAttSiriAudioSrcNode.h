//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAudioTandemStream, MISSING_TYPE, NSArray, NSHashTable, NSMutableDictionary, NSString;
@protocol CSAttSiriAudioSrcNodeDelegate, OS_dispatch_queue;

@interface CSAttSiriAudioSrcNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    CSAsset *_prefetchedAsset;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    MISSING_TYPE *_requiredNodes;	// 32 = 0x20
    CSAttSiriController *_attSiriController;	// 40 = 0x28
    NSString *_mhId;	// 48 = 0x30
    id <CSAttSiriAudioSrcNodeDelegate> _delegate;	// 56 = 0x38
    NSHashTable *_receivers;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    NSMutableDictionary *_decodersForTV;	// 80 = 0x50
    unsigned long long _decoderProcessedSampleCountForTV;	// 88 = 0x58
    CSAudioTandemStream *_tandemStream;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000008b74c
@property(retain, nonatomic) CSAudioTandemStream *tandemStream; // @synthesize tandemStream=_tandemStream;
@property(nonatomic) unsigned long long decoderProcessedSampleCountForTV; // @synthesize decoderProcessedSampleCountForTV=_decoderProcessedSampleCountForTV;
@property(retain, nonatomic) NSMutableDictionary *decodersForTV; // @synthesize decodersForTV=_decodersForTV;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(nonatomic) __weak id <CSAttSiriAudioSrcNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
- (id)_fetchAudioDecoderForTV:(unsigned int)arg1;	// IMP=0x001000000008b318
- (void)_handleDidAudioStartWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000008b1af
- (void)_handleDidStop;	// IMP=0x001000000008b031
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 wasBuffered:(_Bool)arg7 receivedNumChannels:(unsigned int)arg8;	// IMP=0x001000000008adb2
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x001000000008ad25
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x001000000008ac98
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;	// IMP=0x001000000008ac49
- (void)dealloc;	// IMP=0x001000000008ab85
- (void)stop;	// IMP=0x001000000008ab7f
- (void)pause;	// IMP=0x001000000008ab79
- (void)start;	// IMP=0x001000000008ab73
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000008aae6
- (void)addReceiver:(id)arg1;	// IMP=0x001000000008aa59
- (void)fetchRoutesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008a9cc
- (_Bool)isJarvisRoute;	// IMP=0x001000000008a8ee
- (_Bool)isBuiltInRoute;	// IMP=0x001000000008a7b6
- (void)attachToMasterStream:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008a4ac
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x001000000008a45c
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x001000000008a349

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

