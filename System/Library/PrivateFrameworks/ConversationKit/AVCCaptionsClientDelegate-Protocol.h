//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConversationKit/NSObject-Protocol.h>

@class AVCCaptionsClient, AVCCaptionsResult, NSError;

@protocol AVCCaptionsClientDelegate <NSObject>

@optional
- (void)captionsClient:(AVCCaptionsClient *)arg1 didDetectGibberish:(_Bool)arg2;
- (void)captionsServerDidDie:(AVCCaptionsClient *)arg1;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didUpdateCaptions:(AVCCaptionsResult *)arg2 source:(int)arg3;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didDisableCaptions:(_Bool)arg2 error:(NSError *)arg3;
- (void)captionsClient:(AVCCaptionsClient *)arg1 didEnableCaptions:(_Bool)arg2 error:(NSError *)arg3;
@end

