//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRUserIdentity, NSString;

@protocol MRDGroupSessionParticipant <NSObject>
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool guest;
@property(readonly, nonatomic) _Bool connected;
@property(readonly, nonatomic) MRUserIdentity *identity;
@property(readonly, nonatomic) NSString *identifier;
@end

