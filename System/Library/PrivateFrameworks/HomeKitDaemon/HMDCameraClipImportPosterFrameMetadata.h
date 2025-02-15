//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipImportPosterFrameMetadata : NSObject
{
    NSString *_resourcePath;	// 8 = 0x8
    double _offset;	// 16 = 0x10
    unsigned long long _width;	// 24 = 0x18
    unsigned long long _height;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c12bd1
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) double offset; // @synthesize offset=_offset;
@property(readonly, copy) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (id)initWithPosterFrameMetadata:(id)arg1;	// IMP=0x0000000000c126e1

@end

