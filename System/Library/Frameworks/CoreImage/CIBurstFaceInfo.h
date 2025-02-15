//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceInfo : NSObject
{
    int swFaceId;	// 8 = 0x8
    int swLastFrameSeen;	// 12 = 0xc
    int hwFaceId;	// 16 = 0x10
    int hwLastFrameSeen;	// 20 = 0x14
    struct CGPoint swCenter;	// 24 = 0x18
    struct CGSize swSize;	// 40 = 0x28
    struct CGPoint hwCenter;	// 56 = 0x38
    struct CGSize hwSize;	// 72 = 0x48
}

@property int hwLastFrameSeen; // @synthesize hwLastFrameSeen;
@property struct CGSize hwSize; // @synthesize hwSize;
@property struct CGPoint hwCenter; // @synthesize hwCenter;
@property int hwFaceId; // @synthesize hwFaceId;
@property int swLastFrameSeen; // @synthesize swLastFrameSeen;
@property struct CGSize swSize; // @synthesize swSize;
@property struct CGPoint swCenter; // @synthesize swCenter;
@property int swFaceId; // @synthesize swFaceId;
- (float)overlapWithSwRect:(struct CGRect)arg1;	// IMP=0x0000000000036b07
- (float)overlapWithHwRect:(struct CGRect)arg1;	// IMP=0x0000000000036a42
- (struct CGRect)swFaceRect;	// IMP=0x0000000000036986
- (struct CGRect)hwFaceRect;	// IMP=0x00000000000368ca
- (id)init;	// IMP=0x00000000000367bb

@end

