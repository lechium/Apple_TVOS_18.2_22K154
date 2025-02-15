//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHClientCredentials, SHRecorderConfiguration;
@protocol SHAudioRecordingManager;

@interface SHAudioTapProvider : NSObject
{
    id <SHAudioRecordingManager> _audioRecordingManager;	// 8 = 0x8
    SHClientCredentials *_clientCredentials;	// 16 = 0x10
    SHRecorderConfiguration *_recorderConfiguration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000017345
@property(readonly, nonatomic) SHRecorderConfiguration *recorderConfiguration; // @synthesize recorderConfiguration=_recorderConfiguration;
@property(readonly, nonatomic) SHClientCredentials *clientCredentials; // @synthesize clientCredentials=_clientCredentials;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
- (id)tapForSource:(long long)arg1;	// IMP=0x0010000000016fd2
- (id)tapsForAvailableSources;	// IMP=0x0010000000016d99
- (id)initWithAudioRecordingManager:(id)arg1 clientCredentials:(id)arg2 recorderConfiguration:(id)arg3;	// IMP=0x0010000000016ce1
- (id)initWithAudioRecordingManager:(id)arg1 clientCredentials:(id)arg2;	// IMP=0x0010000000016c23

@end

