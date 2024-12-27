//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdleScreenUI/NSObject-Protocol.h>

@class TVISScreenSaverConfiguration, TVISScreenSaverServiceController;
@protocol TVISScreenSaver;

@protocol TVISScreenSaverServiceObserver <NSObject>

@optional
- (void)screenSaverService:(TVISScreenSaverServiceController *)arg1 didUpdateConfiguration:(TVISScreenSaverConfiguration *)arg2;
- (void)screenSaverService:(TVISScreenSaverServiceController *)arg1 didUpdateActiveScreenSaver:(id <TVISScreenSaver>)arg2;
@end

