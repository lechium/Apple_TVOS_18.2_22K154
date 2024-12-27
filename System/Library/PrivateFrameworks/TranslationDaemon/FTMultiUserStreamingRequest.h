//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTFinishAudio, FTMultiUserStartSpeechRequest, FTResetServerEndpointer, FTSetAlternateRecognitionSausage, FTSetEndpointerState, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTUpdateAudioInfo, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMultiUserStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultiUserStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017c3b5
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017c37b
- (void).cxx_destruct;	// IMP=0x000000000017cbf7
- (id)flatbuffData;	// IMP=0x000000000017ca7a
- (Offset_2c19e347)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017c58b
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTSetAlternateRecognitionSausage *contentAsFTSetAlternateRecognitionSausage;
@property(readonly, nonatomic) FTResetServerEndpointer *contentAsFTResetServerEndpointer;
@property(readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(readonly, nonatomic) FTSetEndpointerState *contentAsFTSetEndpointerState;
@property(readonly, nonatomic) FTSetSpeechProfile *contentAsFTSetSpeechProfile;
@property(readonly, nonatomic) FTSetSpeechContext *contentAsFTSetSpeechContext;
@property(readonly, nonatomic) FTSetRequestOrigin *contentAsFTSetRequestOrigin;
@property(readonly, nonatomic) FTUpdateAudioInfo *contentAsFTUpdateAudioInfo;
@property(readonly, nonatomic) FTMultiUserStartSpeechRequest *contentAsFTMultiUserStartSpeechRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017b9c2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017b7df
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStreamingRequest *)arg2;	// IMP=0x000000000017b7ca
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017b7b0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017b799

@end

