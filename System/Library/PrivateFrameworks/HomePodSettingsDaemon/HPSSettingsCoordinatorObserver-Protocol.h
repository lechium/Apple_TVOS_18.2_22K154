//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HPSSetting, NSString, NSUUID;
@protocol HPSSettingsCoordinating;

@protocol HPSSettingsCoordinatorObserver
- (void)coordinator:(id <HPSSettingsCoordinating>)arg1 didReceiveUpdateForKeyPath:(NSString *)arg2 setting:(HPSSetting *)arg3;
@property(nonatomic, readonly) NSUUID *observerID;
@end

