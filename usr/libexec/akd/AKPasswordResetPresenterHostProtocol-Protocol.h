//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError;

@protocol AKPasswordResetPresenterHostProtocol <NSObject>
- (void)passwordResetFinishedWithResult:(NSDictionary *)arg1 error:(NSError *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

