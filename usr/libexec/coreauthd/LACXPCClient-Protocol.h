//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LACXPCClient <NSObject>
@property(readonly, nonatomic) CDStruct_4c969caf auditToken;
@property(readonly, nonatomic) int processId;
@property(readonly, nonatomic) unsigned int userId;
- (_Bool)checkEntitlement:(NSString *)arg1;
@end

