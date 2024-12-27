//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@protocol CNObserver;

@protocol CNForkJoinResultReportingStrategy <NSObject>
- (void)observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id <CNObserver>)arg2;
- (void)receiveResult:(id)arg1 fromObservableAtIndex:(unsigned long long)arg2 observer:(id <CNObserver>)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
@end

