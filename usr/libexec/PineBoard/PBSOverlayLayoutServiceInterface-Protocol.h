//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBSOverlayLayoutBatchUpdate, PBSOverlayLayoutService, PBSOverlayLayoutTransitionContext;

@protocol PBSOverlayLayoutServiceInterface <NSObject>
- (oneway void)performBatchUpdate:(PBSOverlayLayoutBatchUpdate *)arg1 withTransitionContext:(PBSOverlayLayoutTransitionContext *)arg2 reply:(void (^)(NSArray<__PBSOverlayLayoutElementHint__> *, NSError *))arg3;
- (void)setServiceClient:(PBSOverlayLayoutService *)arg1;
@end

