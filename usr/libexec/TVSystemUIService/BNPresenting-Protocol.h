//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol BNConsidering, BNPosting, BNPresentable, BNPresentableIdentifying><BNPresentableUniquelyIdentifying;

@protocol BNPresenting <NSObject>
@property(readonly, copy, nonatomic) NSArray *allPresentables;
@property(readonly, copy, nonatomic) NSArray *presentedPresentables;
@property(readonly, copy, nonatomic) NSArray *topPresentables;
@property(nonatomic) __weak id <BNPosting> poster;
@property(readonly, nonatomic) id <BNConsidering> authority;
- (NSArray *)dismissPresentablesWithIdentification:(id <BNPresentableIdentifying><BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 animated:(_Bool)arg3 userInfo:(NSDictionary *)arg4;
- (NSArray *)dismissPresentablesWithIdentification:(id <BNPresentableIdentifying><BNPresentableUniquelyIdentifying>)arg1 reason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)presentPresentable:(id <BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;
- (id)initWithAuthority:(id <BNConsidering>)arg1;

@optional
- (void)morphFromPresentable:(id <BNPresentable>)arg1 toPresentable:(id <BNPresentable>)arg2 withOptions:(unsigned long long)arg3 userInfo:(NSDictionary *)arg4 stateChange:(_Bool)arg5;
- (NSArray *)dismissAllPresentablesWithRequesterIdentifier:(NSString *)arg1 withReason:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (NSArray *)dismissPresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 animated:(_Bool)arg4 userInfo:(NSDictionary *)arg5;
- (NSArray *)dismissPresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
@end

