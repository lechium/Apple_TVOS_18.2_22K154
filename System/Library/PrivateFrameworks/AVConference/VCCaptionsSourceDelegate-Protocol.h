//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSError, VCCaptionsTranscription;

@protocol VCCaptionsSourceDelegate <NSObject>
- (void)streamToken:(long long)arg1 didDetectGibberish:(_Bool)arg2;
- (void)streamToken:(long long)arg1 didUpdateCaptions:(VCCaptionsTranscription *)arg2;
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didDisableCaptions:(_Bool)arg2 error:(NSError *)arg3;
- (void)streamToken:(long long)arg1 didEnableCaptions:(_Bool)arg2 error:(NSError *)arg3;
@end

