//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipImportVideoSegmentMetadata : NSObject
{
    _Bool _header;	// 8 = 0x8
    NSString *_resourcePath;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c12684
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly, getter=isHeader) _Bool header; // @synthesize header=_header;
@property(readonly, copy) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
- (id)initWithVideoSegmentMetadata:(id)arg1;	// IMP=0x0000000000c12299

@end

