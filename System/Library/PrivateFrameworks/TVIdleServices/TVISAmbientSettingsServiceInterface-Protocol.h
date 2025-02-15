//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVIdleServices/NSObject-Protocol.h>

@class NSString;

@protocol TVISAmbientSettingsServiceInterface <NSObject>

@optional
- (void)updateFilterForPortraitClockCategoryWithID:(NSString *)arg1 categoryFilter:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)updateActiveStateForPortraitClockCategoryWithID:(NSString *)arg1 activate:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)queryPortraitClockStateWithReply:(void (^)(_Bool, _Bool, NSArray *, NSError *))arg1;
- (void)setSelectedPhotoSlideShowStyleWithStyleID:(NSString *)arg1 effectID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)queryPhotoSlideShowStylesWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)setSelectedPhotoSourceWithSourceID:(NSString *)arg1 collectionID:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)queryPhotoSourceOptionsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)updateActiveStateForAerialThemeWithID:(NSString *)arg1 activate:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)queryAerialThemesWithReply:(void (^)(NSArray *, NSError *))arg1;
@end

