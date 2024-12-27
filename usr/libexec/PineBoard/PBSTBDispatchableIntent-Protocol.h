//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSUserActivity, PBAppInfo;

@protocol PBSTBDispatchableIntent <NSObject>
@property(readonly, nonatomic) NSUserActivity *userActivity;
- (void)dispatchDidFailSetTopBoxAppNotInstalled;
- (void)dispatchDidFailSetTopBoxNotConfigured;
- (void)didDispatchToSetTopBoxApp;
- (void)didDispatchToForegroundedApp;
- (_Bool)stbAppCanHandle:(PBAppInfo *)arg1;
- (_Bool)focusedAppCanHandle:(PBAppInfo *)arg1;
@end

