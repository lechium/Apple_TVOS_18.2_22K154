//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class AVPlayerItem;

@protocol AVPlayerItemDelegate <NSObject>

@optional
- (_Bool)playerItem:(AVPlayerItem *)arg1 shouldSeekToTime:(CDStruct_1b6d18a9 *)arg2 toleranceBefore:(CDStruct_1b6d18a9 *)arg3 toleranceAfter:(CDStruct_1b6d18a9 *)arg4;
@end

