//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SiriTTSAudioData;

@interface _TtC8SearchUI20SearchUITTSUtilities : NSObject
{
}

+ (void)stopWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x00600000000b5840
+ (void)playWithAudioData:(SiriTTSAudioData *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x00600000000b55d0
+ (id)ttsAudioDataWithSfAudioData:(id)arg1;	// IMP=0x00600000000b5510
- (void).cxx_destruct;	// IMP=0x00000000000b5b10
- (id)init;	// IMP=0x00000000000b5ab0

@end

