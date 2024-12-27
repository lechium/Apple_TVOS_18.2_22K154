//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GTReplayConfiguration : NSObject
{
    _Bool _forceLoadActionClear;	// 8 = 0x8
    _Bool _forceLoadUnusedResources;	// 9 = 0x9
    _Bool _forceWaitUntilCompleted;	// 10 = 0xa
    _Bool _disableOptimizeRestores;	// 11 = 0xb
    _Bool _disableHeapTextureCompression;	// 12 = 0xc
    _Bool _enableStopOnError;	// 13 = 0xd
    _Bool _enableDisplayOnDevice;	// 14 = 0xe
    _Bool _enableReplayFromOtherPlatforms;	// 15 = 0xf
    _Bool _enableValidation;	// 16 = 0x10
    _Bool _enableCapture;	// 17 = 0x11
    _Bool _enableHUD;	// 18 = 0x12
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000003d7d
@property(nonatomic) _Bool enableHUD; // @synthesize enableHUD=_enableHUD;
@property(nonatomic) _Bool enableCapture; // @synthesize enableCapture=_enableCapture;
@property(nonatomic) _Bool enableValidation; // @synthesize enableValidation=_enableValidation;
@property(nonatomic) _Bool enableReplayFromOtherPlatforms; // @synthesize enableReplayFromOtherPlatforms=_enableReplayFromOtherPlatforms;
@property(nonatomic) _Bool enableDisplayOnDevice; // @synthesize enableDisplayOnDevice=_enableDisplayOnDevice;
@property(nonatomic) _Bool enableStopOnError; // @synthesize enableStopOnError=_enableStopOnError;
@property(nonatomic) _Bool disableHeapTextureCompression; // @synthesize disableHeapTextureCompression=_disableHeapTextureCompression;
@property(nonatomic) _Bool disableOptimizeRestores; // @synthesize disableOptimizeRestores=_disableOptimizeRestores;
@property(nonatomic) _Bool forceWaitUntilCompleted; // @synthesize forceWaitUntilCompleted=_forceWaitUntilCompleted;
@property(nonatomic) _Bool forceLoadUnusedResources; // @synthesize forceLoadUnusedResources=_forceLoadUnusedResources;
@property(nonatomic) _Bool forceLoadActionClear; // @synthesize forceLoadActionClear=_forceLoadActionClear;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003f40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003de2
- (id)init;	// IMP=0x0000000000003d85

@end

