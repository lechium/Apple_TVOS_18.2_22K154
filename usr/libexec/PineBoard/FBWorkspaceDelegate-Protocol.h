//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class FBSWorkspaceSceneRequestOptions, FBWorkspace;

@protocol FBWorkspaceDelegate <NSObject>
- (void)workspace:(FBWorkspace *)arg1 didReceiveSceneRequestWithOptions:(FBSWorkspaceSceneRequestOptions *)arg2 completion:(void (^)(FBScene *, NSError *))arg3;
@end

