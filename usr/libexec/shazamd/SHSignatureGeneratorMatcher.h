//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAudioTap, SHMatcherRequest;
@protocol SHAudioRecordingManager, SHMatcherDelegate, SHSessionDriver;

@interface SHSignatureGeneratorMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    SHAudioTap *_tap;	// 16 = 0x10
    id <SHSessionDriver> _sessionDriver;	// 24 = 0x18
    id <SHAudioRecordingManager> _audioRecordingManager;	// 32 = 0x20
    SHMatcherRequest *_request;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000002b48b
@property(readonly, nonatomic) SHMatcherRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(readonly, nonatomic) id <SHSessionDriver> sessionDriver; // @synthesize sessionDriver=_sessionDriver;
@property(readonly, nonatomic) SHAudioTap *tap; // @synthesize tap=_tap;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldGenerateSpectralOutput;	// IMP=0x001000000002b3b7
- (id)responseSignatureForRequest:(id)arg1;	// IMP=0x001000000002b2bb
- (void)stopRecognition;	// IMP=0x001000000002b24d
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x001000000002b07b
- (void)_stop;	// IMP=0x001000000002afcc
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x001000000002acd4
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x001000000002aaa1
- (void)sessionDriverEncounteredUnrecoverableError:(id)arg1 forSignature:(id)arg2;	// IMP=0x001000000002a9d1
- (void)matchSignature:(id)arg1;	// IMP=0x001000000002a872
- (id)initWithAudioTap:(id)arg1 sessionDriver:(id)arg2 audioRecordingManager:(id)arg3;	// IMP=0x001000000002a53a
- (id)initWithAudioTap:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x001000000002a41d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

