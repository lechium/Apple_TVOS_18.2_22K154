//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeUI/NSObject-Protocol.h>

@protocol TVHMPIPViewController <NSObject>
@property(nonatomic, getter=isStreaming) _Bool streaming;

@optional
- (void)willAnimatePictureInPictureStopOrSwap;
- (void)pictureInPictureDidEnd:(void (^)(void))arg1;
- (void)didEnterPictureInPicture;
@end

