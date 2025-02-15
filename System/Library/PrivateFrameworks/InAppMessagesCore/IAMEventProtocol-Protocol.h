//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InAppMessagesCore/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IAMEventProtocol <NSObject>
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *name;
- (_Bool)matchesWithKey:(NSString *)arg1;

@optional
@property(readonly, copy, nonatomic) NSDictionary *payload;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSDictionary",?,R,C,N

@property(readonly, copy, nonatomic) NSString *source;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy, nonatomic) id value;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,R,C,N

@end

