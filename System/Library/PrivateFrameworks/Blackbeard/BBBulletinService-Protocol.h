//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Blackbeard/NSObject-Protocol.h>

@class BBBulletinInfo;

@protocol BBBulletinService <NSObject>
- (void)presentBulletinWithInfo:(BBBulletinInfo *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
@end

