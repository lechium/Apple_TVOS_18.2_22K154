//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIOverlayWithMaterialRendering : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    struct CGRect _rect;	// 16 = 0x10
    struct CGRect _croppedRect;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000016d91d
@property(nonatomic) struct CGRect croppedRect; // @synthesize croppedRect=_croppedRect;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;	// IMP=0x000000000016d839
- (id)initWithIdentifier:(id)arg1 rect:(struct CGRect)arg2 croppedRect:(struct CGRect)arg3;	// IMP=0x000000000016d78e

@end

