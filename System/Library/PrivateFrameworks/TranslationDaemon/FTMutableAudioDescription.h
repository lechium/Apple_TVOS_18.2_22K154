//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface FTMutableAudioDescription
{
}

@property(nonatomic) unsigned int reserved;
@property(nonatomic) unsigned int bits_per_channel;
@property(nonatomic) unsigned int channels_per_frame;
@property(nonatomic) unsigned int bytes_per_frame;
@property(nonatomic) unsigned int frames_per_packet;
@property(nonatomic) unsigned int bytes_per_packet;
@property(nonatomic) unsigned int format_flags;
@property(nonatomic) unsigned int format_id;
@property(nonatomic) double sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000166492
- (id)init;	// IMP=0x0000000000166404

@end

