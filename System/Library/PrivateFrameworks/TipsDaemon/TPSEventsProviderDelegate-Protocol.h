//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsDaemon/NSObject-Protocol.h>

@class NSArray, TPSEventProviderResult, TPSEventsProvider;

@protocol TPSEventsProviderDelegate <NSObject>
- (void)dataProvider:(TPSEventsProvider *)arg1 didReceiveCallbackWithResult:(TPSEventProviderResult *)arg2;
- (void)dataProvider:(TPSEventsProvider *)arg1 didFinishQueryWithResults:(NSArray *)arg2;
@end

