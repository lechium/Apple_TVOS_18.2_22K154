//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCCameraTestUtils : NSObject
{
}

+ (_Bool)expectedGFTResolutionForDevice:(id)arg1 ratio:(struct CGSize *)arg2;	// IMP=0x008000000019a552
+ (_Bool)findExpectedFramerate:(float *)arg1 forDevice:(id)arg2;	// IMP=0x008000000019a441
+ (_Bool)expectedPreviewResolutionForDevice:(id)arg1 width:(int *)arg2 height:(int *)arg3;	// IMP=0x008000000019a35e
+ (_Bool)isCenterStageAvailable;	// IMP=0x008000000019a356
+ (_Bool)isCenterStageActive;	// IMP=0x008000000019a34e
+ (_Bool)isCameraAvailable:(long long)arg1;	// IMP=0x008000000019a346
+ (_Bool)isCameraAvailable;	// IMP=0x008000000019a32b
+ (_Bool)performReaction;	// IMP=0x008000000019a323
+ (_Bool)isReactionAvailable;	// IMP=0x008000000019a31b
+ (id)defaultCameraUID;	// IMP=0x008000000019a30e

@end

