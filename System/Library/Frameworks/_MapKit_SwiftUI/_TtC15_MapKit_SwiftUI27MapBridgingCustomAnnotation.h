//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface _TtC15_MapKit_SwiftUI27MapBridgingCustomAnnotation : NSObject
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *subtitle;	// 24 = 0x18
    MISSING_TYPE *coordinate;	// 40 = 0x28
    MISSING_TYPE *mapItem;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005e8f0
- (id)init;	// IMP=0x000000000005e8a0
- (id)_representedMapItem;	// IMP=0x000000000005e880
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, copy) NSString *title;

// Remaining properties
@property(nonatomic, readonly) MKMapItem *representedMapItem;

@end

