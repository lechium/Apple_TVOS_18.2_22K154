//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (FamilyCircle)
- (id)fa_dictionaryFromPlistData;	// IMP=0x009000000001a68a
- (id)_faCircularImageDataWithDiameter:(double)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x009000000001a4a3
- (struct CGContext *)_faCreateContextWithImage:(struct CGImage *)arg1 crop:(struct CGRect)arg2 diameter:(double)arg3;	// IMP=0x009000000001a2e6
- (struct CGRect)_faTranformedRectForImageSize:(struct CGSize)arg1 cropRect:(struct CGRect)arg2 diameter:(double)arg3;	// IMP=0x009000000001a23a
- (struct CGImage *)_faCreateImageRef;	// IMP=0x009000000001a1c6
- (id)_faCircularImageDataWithDiameter:(double)arg1;	// IMP=0x009000000001a194
@end

