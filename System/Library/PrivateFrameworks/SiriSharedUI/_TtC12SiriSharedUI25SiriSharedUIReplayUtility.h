//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12SiriSharedUI25SiriSharedUIReplayUtility : NSObject
{
    MISSING_TYPE *viewModel;	// 8 = 0x8
    MISSING_TYPE *isReplaying;	// 16 = 0x10
    MISSING_TYPE *didReplayRecently;	// 17 = 0x11
    MISSING_TYPE *currentUtterance;	// 24 = 0x18
    MISSING_TYPE *savedAceObjects;	// 40 = 0x28
    MISSING_TYPE *storedCallback;	// 48 = 0x30
    MISSING_TYPE *indexToReplayNext;	// 64 = 0x40
    MISSING_TYPE *latestIndexReplayed;	// 72 = 0x48
    MISSING_TYPE *viewHostingController;	// 80 = 0x50
    MISSING_TYPE *resetReplayTask;	// 88 = 0x58
}

+ (id)shared;	// IMP=0x0040000000069740
- (void).cxx_destruct;	// IMP=0x000000000006e2b0
- (_Bool)shouldSkipAutoDismissal;	// IMP=0x000000000006aab0
- (_Bool)hasContentAt:(struct CGPoint)arg1;	// IMP=0x000000000006a930
- (void)speechRecognized:(id)arg1;	// IMP=0x000000000006a810
- (void)registerWithReplayCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000006a760
- (void)receivedWithCommand:(id)arg1;	// IMP=0x000000000006a680
- (void)addReplayControlTo:(id)arg1;	// IMP=0x0000000000069f00
- (id)init;	// IMP=0x00000000000698f0

@end

