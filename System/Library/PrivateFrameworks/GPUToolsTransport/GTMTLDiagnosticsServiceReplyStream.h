//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTMTLDiagnosticsServiceObserver;

__attribute__((visibility("hidden")))
@interface GTMTLDiagnosticsServiceReplyStream
{
    id <GTMTLDiagnosticsServiceObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015e97
- (void)notifyDiagnosticsIssue_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000015e21
- (void)notifyCommandBufferIssue_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000015dab
- (id)initWithObserver:(id)arg1;	// IMP=0x0000000000015d07

@end

