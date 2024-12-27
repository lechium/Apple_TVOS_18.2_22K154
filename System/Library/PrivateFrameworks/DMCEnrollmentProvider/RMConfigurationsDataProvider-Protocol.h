//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, RMUIProfileViewModel;

@protocol RMConfigurationsDataProvider
- (void)setConfigurationActivated:(_Bool)arg1 forViewModel:(RMUIProfileViewModel *)arg2 completionHandler:(void (^)(NSString *, RMUIInteractiveProfileErrorViewModel *))arg3;
- (NSArray *)pluginViewModels;
- (NSArray *)pluginSectionViewModels;
- (NSArray *)profileViewModels;
@end

