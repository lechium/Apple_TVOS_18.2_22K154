//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConversationKit/CNKConversationHUDDetailsViewControllerDelegate-Protocol.h>
#import <ConversationKit/NSObject-Protocol.h>

@class NSString;

@protocol CNKCallDetailsCoordinatorProtocol <NSObject, CNKConversationHUDDetailsViewControllerDelegate>
@property(nonatomic) _Bool shouldHideViewsFromScreenSharing;
@property(readonly, nonatomic) _Bool isCaptioningEnabled;
- (void)wantsDismissal;
- (void)stopWithReason:(NSString *)arg1;
- (void)startWithReason:(NSString *)arg1;
@end

