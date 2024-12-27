//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTCheckForSpeechRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct CheckForSpeechRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fdb8c
- (id)flatbuffData;	// IMP=0x00000000000fda0f
- (Offset_5f33d03a)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fd993
@property(readonly, nonatomic) long long end_speech_time;
@property(readonly, nonatomic) long long start_speech_time;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fd92c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CheckForSpeechRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fd781
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CheckForSpeechRequest *)arg2;	// IMP=0x00000000000fd76c
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fd752
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fd73b

@end

