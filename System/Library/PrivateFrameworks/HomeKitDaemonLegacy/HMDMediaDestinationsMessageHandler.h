//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationsMessageHandler
{
    id <HMDMediaDestinationsMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaDestinationsMessageHandlerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000091c197
@property __weak id <HMDMediaDestinationsMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaDestinationsMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)handleUpdatedDestination:(id)arg1;	// IMP=0x000000000091c0a6
- (void)handleMediaDestinationUpdatedNotification:(id)arg1;	// IMP=0x000000000091bc2b
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000091bab7

@end

