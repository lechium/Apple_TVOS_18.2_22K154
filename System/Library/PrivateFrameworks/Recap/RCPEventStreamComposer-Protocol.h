//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPButtonEventStreamComposer-Protocol.h>
#import <Recap/RCPFluidSwipeGesturesEventStreamComposer-Protocol.h>
#import <Recap/RCPGameControllerEventStreamComposer-Protocol.h>
#import <Recap/RCPPencilEventStreamComposer-Protocol.h>
#import <Recap/RCPTouchEventStreamComposer-Protocol.h>
#import <Recap/RCPVendorEventStreamComposer-Protocol.h>

@class RCPEventSenderProperties;

@protocol RCPEventStreamComposer <RCPTouchEventStreamComposer, RCPButtonEventStreamComposer, RCPFluidSwipeGesturesEventStreamComposer, RCPPencilEventStreamComposer, RCPVendorEventStreamComposer, RCPGameControllerEventStreamComposer>
- (void)composeWithSender:(RCPEventSenderProperties *)arg1 actionBlock:(void (^)(id <RCPEventStreamComposer>))arg2;
@end

