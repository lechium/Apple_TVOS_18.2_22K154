//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRecognitionProgress : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionProgress *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fb11a
- (id)flatbuffData;	// IMP=0x00000000000faf9d
- (Offset_5953e935)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000faec2
@property(readonly, nonatomic) NSString *speech_id;
@property(readonly, nonatomic) int processed_audio_duration_ms;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fae1e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionProgress *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fac73
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionProgress *)arg2;	// IMP=0x00000000000fac5e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fac44
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fac2d

@end

