//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet, NSString;

@protocol _TtP16GenerativeModels31AvailabilityInternalXPCProtocol_
- (void)setOverriddenValues:(NSDictionary *)arg1 with:(void (^)(_Bool, NSError *))arg2;
- (void)updateCacheWithDisabledUseCases:(NSSet *)arg1 with:(void (^)(_Bool, NSError *))arg2;
- (void)siriAssetStatusWith:(void (^)(_Bool, NSError *))arg1;
- (void)removeAllWith:(void (^)(_Bool, NSError *))arg1;
- (void)updateAllWithUpdateReason:(NSString *)arg1 with:(void (^)(_Bool, NSError *))arg2;
- (void)cloudAvailabilityWith:(void (^)(_TtC16GenerativeModels17CloudAvailability *, NSError *))arg1;
@end

