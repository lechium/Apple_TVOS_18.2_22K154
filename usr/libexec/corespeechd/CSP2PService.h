//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSADCompanionServiceProvider, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CSP2PService : NSObject
{
    id <CSADCompanionServiceProvider> _adCompanionServiceProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_lastCommunicatedPeer;	// 24 = 0x18
    NSString *_voiceTriggerBatchId;	// 32 = 0x20
    NSString *_voiceIdentificationBatchId;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_sema;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00400000000c1e74
- (void).cxx_destruct;	// IMP=0x00200000000bd54e
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property(retain, nonatomic) NSString *voiceIdentificationBatchId; // @synthesize voiceIdentificationBatchId=_voiceIdentificationBatchId;
@property(retain, nonatomic) NSString *voiceTriggerBatchId; // @synthesize voiceTriggerBatchId=_voiceTriggerBatchId;
@property(retain, nonatomic) NSString *lastCommunicatedPeer; // @synthesize lastCommunicatedPeer=_lastCommunicatedPeer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSADCompanionServiceProvider> adCompanionServiceProvider; // @synthesize adCompanionServiceProvider=_adCompanionServiceProvider;
- (_Bool)fileURL:(id)arg1 matchesFileNamePattern:(id)arg2;	// IMP=0x00100000000bd363
- (_Bool)shouldTransferVoiceTriggerLogFileWithURL:(id)arg1;	// IMP=0x00100000000bd0d8
- (id)_sha1:(id)arg1;	// IMP=0x00100000000bcfed
- (_Bool)isInternalWithoutProfile;	// IMP=0x00100000000bcf96
- (_Bool)isHeadlessDeviceDataCollectionModeEnabled;	// IMP=0x00100000000bcf3e
- (id)_getContentsOfDirectory:(id)arg1;	// IMP=0x00100000000bcd12
- (id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000bcc65
- (id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000bcbdc
- (id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;	// IMP=0x00100000000bcb85
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;	// IMP=0x00100000000bcb0b
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectory;	// IMP=0x00100000000bcab4
- (id)_spIdSiriDebugGradingDataRootDirectory;	// IMP=0x00100000000bca42
- (id)_spIdSiriDebugVTDataDirectory;	// IMP=0x00100000000bc9d0
- (void)_createDirectoryIfDoesNotExist:(id)arg1;	// IMP=0x00100000000bc71e
- (id)_speakerRecognitionAudioLogsGradingDir;	// IMP=0x00100000000bc6bb
- (void)_sendAcousticGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000bc4e5
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;	// IMP=0x00100000000bc31e
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bbe57
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bae64
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;	// IMP=0x00100000000ba411
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b9dae
- (void)_getHomeUserIdForSharedSiriId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b99fc
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b8edc
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 ofLogType:(unsigned long long)arg2 fromSenderID:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b8c60
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b8c46
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b8b6a
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b740d
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b6478
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b560d
- (id)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7 withFilePrefix:(id)arg8 withCompletion:(CDUnknownBlockType)arg9;	// IMP=0x00100000000b4e65
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7 withFilePrefix:(id)arg8;	// IMP=0x00100000000b4e1e
- (void)_sendCoreSpeechMagusGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b4c5d
- (void)_sendGeckoSpeechLogsToPeerId:(id)arg1;	// IMP=0x00100000000b4a7a
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1 forLogType:(unsigned long long)arg2;	// IMP=0x00100000000b489d
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b4889
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b46b3
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 sortedByCreationDate:(_Bool)arg3 compressedFileAvailable:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b3d5e
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3d46
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3c3d
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3aaa
- (void)sendGeckoSpeechLogsToCompanion;	// IMP=0x00100000000b3a2a
- (void)sendAcousticGradingDataToNearbyPeer;	// IMP=0x00100000000b39b9
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;	// IMP=0x00100000000b392c
- (void)sendVTNearMissGradingDataToCompanion;	// IMP=0x00100000000b38ac
- (void)sendCoreSpeechGradingDataToNearbyPeer;	// IMP=0x00100000000b383b
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3756
- (id)init;	// IMP=0x00100000000b36e1

@end

