//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BNBannerSourceListenerPresentable-Protocol.h"
#import "BNPresentable-Protocol.h"

@class NSDictionary, NSSet, NSString, UIView;
@protocol TVSPPillContentContaining;

@protocol TVSSBannerPresentable <BNPresentable, BNBannerSourceListenerPresentable>
@property(readonly, nonatomic) NSString *panelMessageImageSymbolName;
@property(readonly, nonatomic) NSString *panelMessage;
@property(readonly, nonatomic) NSString *menuBarShortTitle;
@property(readonly, nonatomic) NSString *targetProviderIdentifier;
@property(readonly, nonatomic) _Bool supportsDisplayingAsMenuItem;
@property(readonly, nonatomic) _Bool hasPrimaryAction;
@property(readonly, nonatomic) UIView<TVSPPillContentContaining> *pillContentView;
@property(readonly, nonatomic) UIView *bannerContentView;
@property(copy, nonatomic) NSDictionary *presentableUserInfo;
@property(readonly, nonatomic) _Bool isTVSSBannerPresentable;

@optional
@property(readonly, nonatomic) NSSet *primaryActionTriggeringGestures;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSSet",?,R,N

- (void)dismissDueTimeoutWhenReadyWithCompletionHandler:(void (^)(void))arg1;
- (void)sendActionWithExternalGesture:(NSString *)arg1;
@end

