//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SBCPlaybackPositionEntity;

@protocol SBCDomainValueServiceProtocol <NSObject>
- (oneway void)pushPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 completionBlock:(void (^)(_Bool, NSError *, SBCPlaybackPositionEntity *))arg2;
- (oneway void)pullPlaybackPositionEntity:(SBCPlaybackPositionEntity *)arg1 completionBlock:(void (^)(_Bool, NSError *, SBCPlaybackPositionEntity *))arg2;
@end

