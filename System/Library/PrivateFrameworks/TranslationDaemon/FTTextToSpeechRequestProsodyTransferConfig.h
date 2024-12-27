//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechUserVoiceProfile, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequestProsodyTransferConfig : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestProsodyTransferConfig *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000116e06
- (id)flatbuffData;	// IMP=0x0000000000116c89
- (Offset_386ca18f)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000116b3c
@property(readonly, nonatomic) NSString *user_voice_profile_url;
@property(readonly, nonatomic) FTTextToSpeechUserVoiceProfile *user_voice_profile;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011691d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyTransferConfig *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000116772
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestProsodyTransferConfig *)arg2;	// IMP=0x000000000011675d
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000116743
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011672c

@end

