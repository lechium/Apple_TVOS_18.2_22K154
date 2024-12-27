//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechSpeechFeatureRequest, FTTextToSpeechSpeechFeatureResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTTtsTextToSpeechSpeechFeatureMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TtsTextToSpeechSpeechFeatureMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x00100000000901a4
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x0010000000090164
- (void).cxx_destruct;	// IMP=0x000000000009051a
- (id)flatbuffData;	// IMP=0x000000000009039d
- (Offset_6edbed89)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000090233
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureResponse *session_messageAsFTTextToSpeechSpeechFeatureResponse;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureRequest *session_messageAsFTTextToSpeechSpeechFeatureRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008fefd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TtsTextToSpeechSpeechFeatureMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000008fd1a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TtsTextToSpeechSpeechFeatureMessage *)arg2;	// IMP=0x000000000008fd05
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000008fceb
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008fcd4

@end

