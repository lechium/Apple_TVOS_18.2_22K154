//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UISDeviceContext;

__attribute__((visibility("hidden")))
@interface _UIDeviceInitialDeviceConfigurationLoader : NSObject
{
    UISDeviceContext *_context;	// 8 = 0x8
    _Bool _hasRequestedPreload;	// 16 = 0x10
}

+ (id)sharedLoader;	// IMP=0x0040000000b91c02
- (void).cxx_destruct;	// IMP=0x0000000000b91dea
@property(readonly, nonatomic) UISDeviceContext *initialDeviceContext;
- (void)_startPreloadInitialDeviceContext;	// IMP=0x0000000000b91c63

@end

