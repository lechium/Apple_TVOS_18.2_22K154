//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSController-Protocol.h>

@class NSString, PSSpecifier, UIViewController;
@protocol PSController;

@protocol PSURLControllerHandlerDelegate <PSController>
- (UIViewController<PSController> *)selectSpecifier:(PSSpecifier *)arg1;
- (PSSpecifier *)specifierForID:(NSString *)arg1;

@optional
@property(nonatomic, getter=isShowingSetupController) _Bool showingSetupController;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisShowingSetupController

- (void)handleScrollPPTTestName:(NSString *)arg1;
@end

