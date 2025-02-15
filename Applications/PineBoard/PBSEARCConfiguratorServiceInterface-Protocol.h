//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSNumber;

@protocol PBSEARCConfiguratorServiceInterface <NSObject>
- (oneway void)toggleEARC:(NSNumber *)arg1 withReply:(void (^)(NSNumber *, NSError *))arg2;
- (oneway void)enableEARC:(NSNumber *)arg1;
- (oneway void)fetchEARCStatusWithReply:(void (^)(NSNumber *, NSError *))arg1;
@end

