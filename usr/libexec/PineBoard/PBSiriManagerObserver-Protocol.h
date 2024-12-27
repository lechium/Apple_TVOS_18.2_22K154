//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBSiriManager;

@protocol PBSiriManagerObserver <NSObject>

@optional
- (void)siriManagerDidUpdatePresenting:(PBSiriManager *)arg1;
- (void)siriManagerDidUnhideSiriWindow:(PBSiriManager *)arg1;
- (void)siriManagerDidHideSiriWindow:(PBSiriManager *)arg1;
- (void)siriManager:(PBSiriManager *)arg1 didUpdateVisibleState:(long long)arg2;
- (void)siriManager:(PBSiriManager *)arg1 didUpdateEnabledState:(_Bool)arg2;
@end

