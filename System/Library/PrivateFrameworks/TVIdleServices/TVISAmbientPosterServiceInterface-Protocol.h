//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVIdleServices/NSObject-Protocol.h>

@protocol TVISAmbientPosterServiceInterface <NSObject>

@optional
- (void)queryCurrentSnapshotWithIntent:(long long)arg1 reply:(void (^)(id <TVISScreenSaver>, NSError *))arg2;
@end

