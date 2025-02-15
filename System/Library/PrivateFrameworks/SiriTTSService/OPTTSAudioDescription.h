//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSAudioDescription : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioDescription *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000116ffe
- (id)flatbuffData;	// IMP=0x0000000000116ee7
- (Offset_407e0587)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000116cf4
@property(readonly, nonatomic) unsigned int reserved;
@property(readonly, nonatomic) unsigned int bits_per_channel;
@property(readonly, nonatomic) unsigned int channels_per_frame;
@property(readonly, nonatomic) unsigned int bytes_per_frame;
@property(readonly, nonatomic) unsigned int frames_per_packet;
@property(readonly, nonatomic) unsigned int bytes_per_packet;
@property(readonly, nonatomic) unsigned int format_flags;
@property(readonly, nonatomic) unsigned int format_id;
@property(readonly, nonatomic) double sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000116b63
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000116980
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioDescription *)arg2;	// IMP=0x000000000011696b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000116951
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011693a
- (struct AudioStreamBasicDescription)audioStreamBasicDescription;	// IMP=0x0000000000121a28

@end

