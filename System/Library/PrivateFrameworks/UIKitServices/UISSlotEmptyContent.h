//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UISSlotEmptyContent : NSObject
{
    struct CGSize _contentSize;	// 8 = 0x8
}

+ (id)contentWithSize:(struct CGSize)arg1;	// IMP=0x006000000001da9e
- (id)image;	// IMP=0x000000000001db5f
- (void)deleteFromLayerContext:(id)arg1;	// IMP=0x000000000001db59
- (_Bool)shouldReplaceExistingContent;	// IMP=0x000000000001db51
- (_Bool)isRemote;	// IMP=0x000000000001db49
- (struct CGSize)contentSize;	// IMP=0x000000000001db39
- (unsigned char)contentScale;	// IMP=0x000000000001db2e
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x000000000001dadc

@end

