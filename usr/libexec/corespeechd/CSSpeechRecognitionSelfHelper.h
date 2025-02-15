//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CSSpeechRecognitionSelfHelper : NSObject
{
    _Bool _isSamplingForDictation;	// 8 = 0x8
    _Bool _isTier1LoggingAllowedForCurrentRequest;	// 9 = 0x9
    NSUUID *_asrId;	// 16 = 0x10
    NSString *_taskName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000008d4a1
@property(nonatomic) _Bool isTier1LoggingAllowedForCurrentRequest; // @synthesize isTier1LoggingAllowedForCurrentRequest=_isTier1LoggingAllowedForCurrentRequest;
@property(retain, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
@property(nonatomic) _Bool isSamplingForDictation; // @synthesize isSamplingForDictation=_isSamplingForDictation;
@property(retain, nonatomic) NSUUID *asrId; // @synthesize asrId=_asrId;
- (void)logDictationSamplingEventStatus:(unsigned long long)arg1 requestId:(id)arg2 error:(id)arg3;	// IMP=0x001000000008cfc4
- (_Bool)_isNonTier1Message:(id)arg1;	// IMP=0x001000000008ce0a
- (_Bool)_isTier1LoggingAllowedForCurrentRequestWithTask:(id)arg1;	// IMP=0x001000000008cc70
- (void)wrapAndEmitTopLevelEvent:(id)arg1 timestampInTicks:(id)arg2;	// IMP=0x001000000008c584
- (void)logSampledAudioFileStoredWithError:(id)arg1;	// IMP=0x001000000008c35d
- (void)logSampledAudioFileStoredSuccessfully;	// IMP=0x001000000008c303
- (void)logAssistantSamplingEventStatus:(unsigned long long)arg1 requestId:(id)arg2 error:(id)arg3;	// IMP=0x001000000008c2db
- (void)logSamplingEventStatus:(unsigned long long)arg1 requestId:(id)arg2 error:(id)arg3;	// IMP=0x001000000008c2b7
- (id)initWithAsrId:(id)arg1 taskName:(id)arg2 isSamplingForDictation:(_Bool)arg3;	// IMP=0x001000000008c1fc

@end

