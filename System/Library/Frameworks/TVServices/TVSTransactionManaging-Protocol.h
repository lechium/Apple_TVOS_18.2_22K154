//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/NSObject-Protocol.h>

@class BSTransaction, NSObject;
@protocol OS_os_log, TVSTransactionManagerObserver;

@protocol TVSTransactionManaging <NSObject>
@property(retain, nonatomic) NSObject<OS_os_log> *log;
- (void)removeObserver:(id <TVSTransactionManagerObserver>)arg1;
- (void)addObserver:(id <TVSTransactionManagerObserver>)arg1;
- (void)addTransaction:(BSTransaction *)arg1;
@end

