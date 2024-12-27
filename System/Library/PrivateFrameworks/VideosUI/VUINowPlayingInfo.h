//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, VUIMediaInfo;
@protocol TVPAVFPlayback;

__attribute__((visibility("hidden")))
@interface VUINowPlayingInfo : NSObject
{
    AVPlayerViewController *_avPlayerViewController;	// 8 = 0x8
    NSObject<TVPAVFPlayback> *_player;	// 16 = 0x10
    VUIMediaInfo *_mediaInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f0106
@property(readonly, nonatomic) VUIMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(readonly, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property(readonly, nonatomic) AVPlayerViewController *avPlayerViewController; // @synthesize avPlayerViewController=_avPlayerViewController;
- (id)initWithMediaInfo:(id)arg1 player:(id)arg2 avPlayerViewController:(id)arg3;	// IMP=0x00000000000f0011

@end

