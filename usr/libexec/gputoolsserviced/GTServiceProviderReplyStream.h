//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTServiceProviderObserver;

@interface GTServiceProviderReplyStream
{
    id <GTServiceProviderObserver> _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000015a9f
- (void)notifyServiceListChanged_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000015a29
- (id)initWithObserver:(id)arg1;	// IMP=0x0010000000015985

@end

