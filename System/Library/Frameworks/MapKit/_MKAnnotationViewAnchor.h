//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

__attribute__((visibility("hidden")))
@interface _MKAnnotationViewAnchor : VKAnchorWrapper
{
    MKAnnotationView *_annotationView;	// 8 = 0x8
}

@property(nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (double)pointOffsetForDistanceOffset:(double)arg1;	// IMP=0x00000000000d8b49
- (struct CGPoint)pointInLayer:(id)arg1 bound:(struct CGRect)arg2;	// IMP=0x00000000000d8a1c
- (CDStruct_c3b9c2ee)coordinate;	// IMP=0x00000000000d89ff

@end

