//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTMTLReplayServiceObserver;

__attribute__((visibility("hidden")))
@interface GTMTLReplayErrorReplyStream
{
    id <GTMTLReplayServiceObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002683f
- (void)notifyError_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00000000000267fb
- (id)initWithObserver:(id)arg1;	// IMP=0x0000000000026757

@end

