//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceConfigEntry : NSObject
{
    int faceId;	// 8 = 0x8
    struct CGRect faceRect;	// 16 = 0x10
    int framesSinceLast;	// 48 = 0x30
}

@property int framesSinceLast; // @synthesize framesSinceLast;
@property struct CGRect faceRect; // @synthesize faceRect;
@property int faceId; // @synthesize faceId;
- (id)initWithRect:(struct CGRect)arg1 withFaceId:(int)arg2;	// IMP=0x000000000003663c

@end

